#include "str.h"
//#include "monster.h"
#include "wahsh.h"
#include "main.h"
#include <stdio.h>

extern State state;

void initializeDoors(){

	state.doors[0].arrayIndex = 1;
	state.doors[1].arrayIndex = 2;

	state.doors[2].arrayIndex = 7;
	state.doors[3].arrayIndex = 8;

	state.doors[4].arrayIndex = 13;
	state.doors[5].arrayIndex = 14;

	state.doors[0].level1 = 0;

	state.doors[0].level2 = 0;
}

/*
	you can turn it off
*/
int getRandResult(int index){
	//srand(time(NULL));
	// if even then 0 if odd then 1
	return index % 2;
}


//==== Monster =====



void initializeMonsters(){

	// if i = 0, then init. 3 monsters
	// if i = 3, then init. 3 monsters
	// if i = 6, then init. 3 monsters
	// if i = 9, then init. 3 monsters

	int  i = 0, index, temp = 0;
	int counter = 0;
	int startXPos[8] = {1000, 400, 800, 125, 1000, 200, 900, 300};
	// outter loop ... total number of monsters is 12
	while(i<18){

		index = i;
		// inner loop for each path.
		temp = i+3;
		while(i<temp){

			// each path has unique image and yPos
			// FROM 0 TO 6 IS RIGHT TO LEFT
			// FROM 7 TO 11 IS LEFT TO RIGHT
			if(index==0){
				state.monsters[i].monImg = (short int *) w.pixel_data;
				state.monsters[i].yPos = PATH_2;
				state.monsters[i].width = w.width;
				state.monsters[i].height = w.height;
			}else if(index == 3){
				state.monsters[i].monImg = (short int *) w.pixel_data;
				state.monsters[i].yPos = PATH_3;
				state.monsters[i].width = w.width;
				state.monsters[i].height = w.height;
			}else if(index == 6){
				state.monsters[i].monImg = (short int *) w.pixel_data;
				state.monsters[i].yPos = PATH_4;
				state.monsters[i].width = w.width;
				state.monsters[i].height = w.height;
			}else if(index == 9){
				state.monsters[i].monImg = (short int *) w.pixel_data;
				state.monsters[i].yPos = PATH_5;
				state.monsters[i].width = w.width;
				state.monsters[i].height = w.height;
			}else if(index == 12){
				state.monsters[i].monImg = (short int *) w.pixel_data;
				state.monsters[i].yPos = PATH_6;
				state.monsters[i].width = w.width;
				state.monsters[i].height = w.height;
			}else if(index == 15){
				state.monsters[i].monImg = (short int *) w.pixel_data;
				state.monsters[i].yPos = PATH_7;
				state.monsters[i].width = w.width;
				state.monsters[i].height = w.height;
			}

			// each path has a leader mon
			if(isLeader(i)){
				state.monsters[i].leader= 1;
				state.monsters[i].follower= 0;
				// At what xPos each leader monsters is going to start from
				state.monsters[i].xPos = startXPos[counter]; // 125
				counter++; // 1
			}else{
				state.monsters[i].leader= 0;
				state.monsters[i].follower= 1;
				// the threshold for the following mon
				if(i<6)
					state.monsters[i].gap = (i-index == 1) ? 400 : 700; 
				else
					state.monsters[i].gap = (i-index == 1) ? 600 : 900; 
			}

			// monsters less than 7 are right to left monsters
			state.monsters[i].direction = (index%2==0) ? RIGHT_TO_LEFT : LEFT_TO_RIGHT;
			// monsters less than 7 their velocity is -1
			state.monsters[i].velocity = (index%2==0) ? -1 : 1;

			i++;
		}
	}

	printf("DONE\n");

}


void updateMonsters(){
	int counter = 0, temp = 0;

	while(counter<18){

		
		// ****** start monsters update ****** 

		// if a mon is a leader ... then check its followers
		if( state.monsters[counter].leader == 1 && state.monsters[counter].direction == LEFT_TO_RIGHT){

			if( (state.monsters[counter].xPos >= state.monsters[counter+1].gap) && (state.monsters[counter+1].follower==1)){
				// add a new mon on screen follower #1
				state.monsters[counter+1].xPos = 200;
				// remove follower
				state.monsters[counter+1].follower = 0;
			}else if( ( state.monsters[counter].xPos >= state.monsters[counter+2].gap ) && (state.monsters[counter+2].follower==1)){
				// add a new mon on screen follower #2
				state.monsters[counter+2].xPos = 200;
				// remove follower
				state.monsters[counter+2].follower = 0;
			}
		}else if(state.monsters[counter].leader == 1 && state.monsters[counter].direction == RIGHT_TO_LEFT){

			if( (state.monsters[counter].xPos <= state.monsters[counter+1].gap) && (state.monsters[counter+1].follower==1)){
				// add a new mon on screen follower #1
				state.monsters[counter+1].xPos = 1000;
				// remove follower
				state.monsters[counter+1].follower = 0;
			}else if( ( state.monsters[counter].xPos <= state.monsters[counter+2].gap ) && (state.monsters[counter+2].follower==1)){
				// add a new mon on screen follower #2
				state.monsters[counter+2].xPos = 1000;
				// remove follower
				state.monsters[counter+2].follower = 0;
			}
		}

		// if a mon is not a follower then update it.
		if(state.monsters[counter].follower==0){
			// store its current position in temp
			temp = state.monsters[counter].xPos;
			// store the old position of the mon to draw over it
			state.monsters[counter].prevXPos = temp; 
			// set it back to 150 else add velocity
			if((state.monsters[counter].direction==LEFT_TO_RIGHT))
				temp = (temp>1100) ? 125 : temp+state.monsters[counter].velocity;
			// set it back to 580 else add velocity
			if((state.monsters[counter].direction==RIGHT_TO_LEFT))
				temp = (temp<150) ? 1100 : temp+state.monsters[counter].velocity;
			// update its position
			state.monsters[counter].xPos = temp;
		}

		counter++;
	}
}
