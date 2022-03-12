#include "str.h"
#include "main.h"
#include "shortLog.h"
#include "longLog.h"
#include "frogFile.h"
extern State state;
      
void initializeLogs(){

	// if i = 0, then init. 3 logs
	// if i = 3, then init. 3 logs
	// if i = 6, then init. 3 logs
	// if i = 9, then init. 3 logs

	int  i = 0, index, temp = 0;
	int counter = 0;
	int startXPos[8] = {1000, 400, 800, 125, 1000, 200, 900, 300};
	// outter loop ... total number of logs is 12
	while(i<24){

		index = i;
		// inner loop for each path.
		temp = i+3;
		while(i<temp){

			// each path has unique image and yPos
			// FROM 0 TO 6 IS RIGHT TO LEFT
			// FROM 7 TO 11 IS LEFT TO RIGHT
			if(index==0){
				state.logs[i].logImg = (short int *) sl.pixel_data;
				state.logs[i].yPos = PATH_1;
				state.logs[i].width = sl.width;
				state.logs[i].height = sl.height;
			}else if(index == 3){
				state.logs[i].logImg = (short int *) ll.pixel_data;
				state.logs[i].yPos = PATH_2;
				state.logs[i].width = ll.width;
				state.logs[i].height = ll.height;
			}else if(index == 6){
				state.logs[i].logImg = (short int *) sl.pixel_data;
				state.logs[i].yPos = PATH_3;
				state.logs[i].width = sl.width;
				state.logs[i].height = sl.height;
			}else if(index == 9){
				state.logs[i].logImg = (short int *) ll.pixel_data;
				state.logs[i].yPos = PATH_4;
				state.logs[i].width = ll.width;
				state.logs[i].height = ll.height;
			}else if(index == 12){
				state.logs[i].logImg = (short int *) sl.pixel_data;
				state.logs[i].yPos = PATH_5;
				state.logs[i].width = sl.width;
				state.logs[i].height = sl.height;
			}else if(index == 15){
				state.logs[i].logImg = (short int *) ll.pixel_data;
				state.logs[i].yPos = PATH_6;
				state.logs[i].width = ll.width;
				state.logs[i].height = ll.height;
			}else if(index == 18){
				state.logs[i].logImg = (short int *) sl.pixel_data;
				state.logs[i].yPos = PATH_7;
				state.logs[i].width = sl.width;
				state.logs[i].height = sl.height;
			}else if(index == 21){
				state.logs[i].logImg = (short int *) ll.pixel_data;
				state.logs[i].yPos = PATH_8;
				state.logs[i].width = ll.width;
				state.logs[i].height = ll.height;
			}

			// each path has a leader log
			if(isLeader(i)){
				state.logs[i].leader= 1;
				state.logs[i].follower= 0;
				// At what xPos each leader logs is going to start from
				state.logs[i].xPos = startXPos[counter]; // 125
				counter++; // 1
			}else{
				state.logs[i].leader= 0;
				state.logs[i].follower= 1;
				// the threshold for the following log
				if(i<6)
					state.logs[i].gap = (i-index == 1) ? 400 : 700; 
				else
					state.logs[i].gap = (i-index == 1) ? 600 : 900; 
			}

			// logs less than 7 are right to left logs
			state.logs[i].direction = (index%2==0) ? RIGHT_TO_LEFT : LEFT_TO_RIGHT;
			// logs less than 7 their velocity is -1
			state.logs[i].velocity = (index%2==0) ? -1 : 1;

			state.logs[i].hasFrog = 0;

			i++;
		}
	}
}


void updateLogs(){
	int counter = 0, temp = 0;

	while(counter<24){

		
		// ****** start logs update ****** 

		// if a log is a leader ... then check its followers
		if( state.logs[counter].leader == 1 && state.logs[counter].direction == LEFT_TO_RIGHT){

			if( (state.logs[counter].xPos >= state.logs[counter+1].gap) && (state.logs[counter+1].follower==1)){
				// add a new log on screen follower #1
				state.logs[counter+1].xPos = 200;
				// remove follower
				state.logs[counter+1].follower = 0;
			}else if( ( state.logs[counter].xPos >= state.logs[counter+2].gap ) && (state.logs[counter+2].follower==1)){
				// add a new log on screen follower #2
				state.logs[counter+2].xPos = 200;
				// remove follower
				state.logs[counter+2].follower = 0;
			}
		}else if(state.logs[counter].leader == 1 && state.logs[counter].direction == RIGHT_TO_LEFT){

			if( (state.logs[counter].xPos <= state.logs[counter+1].gap) && (state.logs[counter+1].follower==1)){
				// add a new log on screen follower #1
				state.logs[counter+1].xPos = 1000;
				// remove follower
				state.logs[counter+1].follower = 0;
			}else if( ( state.logs[counter].xPos <= state.logs[counter+2].gap ) && (state.logs[counter+2].follower==1)){
				// add a new log on screen follower #2
				state.logs[counter+2].xPos = 1000;
				// remove follower
				state.logs[counter+2].follower = 0;
			}
		}

		// if a log is not a follower then update it.
		if(state.logs[counter].follower==0){
			// store its current position in temp
			temp = state.logs[counter].xPos;
			// store the old position of the log to draw over it
			state.logs[counter].prevXPos = temp; 
			// set it back to 150 else add velocity
			if((state.logs[counter].direction==LEFT_TO_RIGHT))
				temp = (temp>1100) ? 125 : temp+state.logs[counter].velocity;
			// set it back to 580 else add velocity
			if((state.logs[counter].direction==RIGHT_TO_LEFT))
				temp = (temp<150) ? 1100 : temp+state.logs[counter].velocity;
			// update its position
			state.logs[counter].xPos = temp;
		}

		if(state.logs[counter].hasFrog == 1){
			updateFloatingFrog(counter);
			state.logs[counter].hasFrog = 0;
		}
		counter++;
	}
}
