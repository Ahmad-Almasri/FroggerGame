#include "str.h"

//#include "wahsh.h"
#include "main.h"
#include "stdio.h"
extern State state;

#include "newCarLR.h"
#include "newCarRL.h"
#include "cleft.h"
#include "cright.h"

void initializeCars(){

	// if i = 0, then init. 3 cars
	// if i = 3, then init. 3 cars
	// if i = 6, then init. 3 cars
	// if i = 9, then init. 3 cars

	int  i = 0, index, temp = 0;
	int counter = 0;
	int startXPos[8] = {1000, 400, 800, 125, 1000, 200, 900, 300};
	// outter loop ... total number of cars is 12
	while(i<24){

		index = i;
		// inner loop for each path.
		temp = i+3;
		while(i<temp){

			// each path has unique image and yPos
			// FROM 0 TO 6 IS RIGHT TO LEFT
			// FROM 7 TO 11 IS LEFT TO RIGHT
			// odd left to right
			if(index==0){
				state.cars[i].carImg = (short int *) ncrl.pixel_data;
				state.cars[i].yPos = PATH_1;
				state.cars[i].width = ncrl.width;
				state.cars[i].height = ncrl.height;
			}else if(index == 3){
				state.cars[i].carImg = (short int *) CL.pixel_data;
				state.cars[i].yPos = PATH_2;
				state.cars[i].width = CL.width;
				state.cars[i].height = CL.height;
			}else if(index == 6){
				state.cars[i].carImg = (short int *) CR.pixel_data;
				state.cars[i].yPos = PATH_3;
				state.cars[i].width = CR.width;
				state.cars[i].height = CR.height;
			}else if(index == 9){
				state.cars[i].carImg = (short int *) nclr.pixel_data;
				state.cars[i].yPos = PATH_4;
				state.cars[i].width = nclr.width;
				state.cars[i].height = nclr.height;
			}else if(index == 12){
				state.cars[i].carImg = (short int *) ncrl.pixel_data;
				state.cars[i].yPos = PATH_5;
				state.cars[i].width = ncrl.width;
				state.cars[i].height = ncrl.height;
			}else if(index == 15){
				state.cars[i].carImg = (short int *) CL.pixel_data;
				state.cars[i].yPos = PATH_6;
				state.cars[i].width = CL.width;
				state.cars[i].height = CL.height;
			}else if(index == 18){
				state.cars[i].carImg = (short int *) CR.pixel_data;
				state.cars[i].yPos = PATH_7;
				state.cars[i].width = CR.width;
				state.cars[i].height = CR.height;
			}else if(index == 21){
				state.cars[i].carImg = (short int *) nclr.pixel_data;
				state.cars[i].yPos = PATH_8;
				state.cars[i].width = nclr.width;
				state.cars[i].height = nclr.height;
			}

			// each path has a leader car
			if(isLeader(i)){
				state.cars[i].leader= 1;
				state.cars[i].follower= 0;
				// At what xPos each leader cars is going to start from
				state.cars[i].xPos = startXPos[counter]; // 125
				counter++; // 1
			}else{
				state.cars[i].leader= 0;
				state.cars[i].follower= 1;
				// the threshold for the following car
				if(i<6)
					state.cars[i].gap = (i-index == 1) ? 400 : 700; 
				else
					state.cars[i].gap = (i-index == 1) ? 600 : 900; 
			}

			// cars less than 7 are right to left cars
			state.cars[i].direction = (index%2==0) ? RIGHT_TO_LEFT : LEFT_TO_RIGHT;
			// cars less than 7 their velocity is -1
			state.cars[i].velocity = (index%2==0) ? -1 : 1;

			i++;
		}
	}
	printf("HELLO\n");
}

void updateCars(){
	int counter = 0, temp = 0;

	while(counter<24){

		
		// ****** start CARS update ****** 

		// if a car is a leader ... then check its followers
		if( state.cars[counter].leader == 1 && state.cars[counter].direction == LEFT_TO_RIGHT){

			if( (state.cars[counter].xPos >= state.cars[counter+1].gap) && (state.cars[counter+1].follower==1)){
				// add a new car on screen follower #1
				state.cars[counter+1].xPos = 200;
				// remove follower
				state.cars[counter+1].follower = 0;
			}else if( ( state.cars[counter].xPos >= state.cars[counter+2].gap ) && (state.cars[counter+2].follower==1)){
				// add a new car on screen follower #2
				state.cars[counter+2].xPos = 200;
				// remove follower
				state.cars[counter+2].follower = 0;
			}
		}else if(state.cars[counter].leader == 1 && state.cars[counter].direction == RIGHT_TO_LEFT){

			if( (state.cars[counter].xPos <= state.cars[counter+1].gap) && (state.cars[counter+1].follower==1)){
				// add a new car on screen follower #1
				state.cars[counter+1].xPos = 1000;
				// remove follower
				state.cars[counter+1].follower = 0;
			}else if( ( state.cars[counter].xPos <= state.cars[counter+2].gap ) && (state.cars[counter+2].follower==1)){
				// add a new car on screen follower #2
				state.cars[counter+2].xPos = 1000;
				// remove follower
				state.cars[counter+2].follower = 0;
			}
		}

		// if a car is not a follower then update it.
		if(state.cars[counter].follower==0){
			// store its current position in temp
			temp = state.cars[counter].xPos;
			// store the old position of the car to draw over it
			state.cars[counter].prevXPos = temp; 
			// set it back to 150 else add velocity
			if((state.cars[counter].direction==LEFT_TO_RIGHT))
				temp = (temp>1100) ? 125 : temp+state.cars[counter].velocity;
			// set it back to 580 else add velocity
			if((state.cars[counter].direction==RIGHT_TO_LEFT))
				temp = (temp<150) ? 1100 : temp+state.cars[counter].velocity;
			// update its position
			state.cars[counter].xPos = temp;
		}

		counter++;
	}
}
