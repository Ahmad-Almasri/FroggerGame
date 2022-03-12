#include "str.h"
#include "main.h"

#include "blackPack.h"
#include "bluePack.h"
#include "redPack.h"
#include "yellPack.h"

extern State state;

void initializePacks(){

	// if i = 0, then init. 3 packs
	// if i = 3, then init. 3 packs
	// if i = 6, then init. 3 packs
	// if i = 9, then init. 3 packs

	int  i = 0, index, temp = 0;
	int counter = 0;
	int startXPos[8] = {1000, 400, 800, 125, 1000, 200, 900, 300};
	// outter loop ... total number of packs is 24
	while(i<24){

		index = i;
		// inner loop for each path.
		temp = i+3;
		while(i<temp){

			// each path has unique image and yPos
			// FROM 0 TO 6 IS RIGHT TO LEFT
			// FROM 7 TO 11 IS LEFT TO RIGHT
			if(index==0){
				state.packs[i].packImg = (short int *) BLACKP.pixel_data;
				state.packs[i].yPos = PATH_1;
				state.packs[i].width = BLACKP.width;
				state.packs[i].height = BLACKP.height;
			}else if(index == 3){
				state.packs[i].packImg = (short int *) BLUEP.pixel_data;
				state.packs[i].yPos = PATH_2;
				state.packs[i].width = BLUEP.width;
				state.packs[i].height = BLUEP.height;
			}else if(index == 6){
				state.packs[i].packImg = (short int *) REDP.pixel_data;
				state.packs[i].yPos = PATH_3;
				state.packs[i].width = REDP.width;
				state.packs[i].height = REDP.height;
			}else if(index == 9){
				state.packs[i].packImg = (short int *) YELLP.pixel_data;
				state.packs[i].yPos = PATH_4;
				state.packs[i].width = YELLP.width;
				state.packs[i].height = YELLP.height;
			}else if(index == 12){
				state.packs[i].packImg = (short int *) REDP.pixel_data;
				state.packs[i].yPos = PATH_5;
				state.packs[i].width = REDP.width;
				state.packs[i].height = REDP.height;
			}else if(index == 15){
				state.packs[i].packImg = (short int *) BLUEP.pixel_data;
				state.packs[i].yPos = PATH_6;
				state.packs[i].width = BLUEP.width;
				state.packs[i].height = BLUEP.height;
			}else if(index == 18){
				state.packs[i].packImg = (short int *) YELLP.pixel_data;
				state.packs[i].yPos = PATH_7;
				state.packs[i].width = YELLP.width;
				state.packs[i].height = YELLP.height;
			}else if(index == 21){
				state.packs[i].packImg = (short int *) BLACKP.pixel_data;
				state.packs[i].yPos = PATH_8;
				state.packs[i].width = BLACKP.width;
				state.packs[i].height = BLACKP.height;
			}

			// each path has a leader pack
			if(isLeader(i)){
				state.packs[i].leader= 1;
				state.packs[i].follower= 0;
				// At what xPos each leader packs is going to start from
				state.packs[i].xPos = startXPos[counter]; // 125
				counter++; // 1
			}else{
				state.packs[i].leader= 0;
				state.packs[i].follower= 1;
				// the threshold for the following pack
				if(i<6)
					state.packs[i].gap = (i-index == 1) ? 400 : 700; 
				else
					state.packs[i].gap = (i-index == 1) ? 600 : 900; 
			}

			// packs less than 7 are right to left packs
			state.packs[i].direction = (index%2==0) ? RIGHT_TO_LEFT : LEFT_TO_RIGHT;
			// packs less than 7 their velocity is -1
			state.packs[i].velocity = (index%2==0) ? -1 : 1;

			i++;
		}
	}
}


void updatePacks(){
	int counter = 0, temp = 0;

	while(counter<24){

		
		// ****** start packs update ****** 

		// if a pack is a leader ... then check its followers
		if( state.packs[counter].leader == 1 && state.packs[counter].direction == LEFT_TO_RIGHT){

			if( (state.packs[counter].xPos >= state.packs[counter+1].gap) && (state.packs[counter+1].follower==1)){
				// add a new pack on screen follower #1
				state.packs[counter+1].xPos = 200;
				// remove follower
				state.packs[counter+1].follower = 0;
			}else if( ( state.packs[counter].xPos >= state.packs[counter+2].gap ) && (state.packs[counter+2].follower==1)){
				// add a new pack on screen follower #2
				state.packs[counter+2].xPos = 200;
				// remove follower
				state.packs[counter+2].follower = 0;
			}
		}else if(state.packs[counter].leader == 1 && state.packs[counter].direction == RIGHT_TO_LEFT){

			if( (state.packs[counter].xPos <= state.packs[counter+1].gap) && (state.packs[counter+1].follower==1)){
				// add a new pack on screen follower #1
				state.packs[counter+1].xPos = 1000;
				// remove follower
				state.packs[counter+1].follower = 0;
			}else if( ( state.packs[counter].xPos <= state.packs[counter+2].gap ) && (state.packs[counter+2].follower==1)){
				// add a new pack on screen follower #2
				state.packs[counter+2].xPos = 1000;
				// remove follower
				state.packs[counter+2].follower = 0;
			}
		}

		// if a pack is not a follower then update it.
		if(state.packs[counter].follower==0){
			// store its current position in temp
			temp = state.packs[counter].xPos;
			// store the old position of the pack to draw over it
			state.packs[counter].prevXPos = temp; 
			// set it back to 150 else add velocity
			if((state.packs[counter].direction==LEFT_TO_RIGHT))
				temp = (temp>1100) ? 125 : temp+state.packs[counter].velocity;
			// set it back to 580 else add velocity
			if((state.packs[counter].direction==RIGHT_TO_LEFT))
				temp = (temp<150) ? 1100 : temp+state.packs[counter].velocity;
			// update its position
			state.packs[counter].xPos = temp;
		}

		counter++;
	}
}
