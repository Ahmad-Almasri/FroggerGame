#include "str.h"
//#include "frog.h"
#include "newFrog.h"
#include "stdio.h"
#include "doors.h"
#include "block.h"
#include "rewRed.h"
extern State state;
    

void initFrog();
void updateFrog(int, int);
void checkCollision();
void checkCollisionPackMan();
void checkCollisionDoors();
void checkFloat();
int checkFloatValue(int i);
int checkCollisionValue(int i, int, int);
int getLeaderIndex();
int checkFor();
int checkFrogPosition(int direction);
void updateFloatingFrog(int i);
//============================================

void initFrog(){

	state.frog.frogImg = (short int *) nf.pixel_data;
	state.frog.xPos = 600;
	state.frog.yPos = START_GAP2;
	state.frog.width = nf.width;
	state.frog.height = nf.height;
	state.frog.velocity = 50;
	state.frog.fVar = 0;

	printf("Done2\n");
}



void updateFrog(int input, int challenge){
	// there is no input
	if(checkFrogPosition(input)==0)
	{

		if(checkFor() == 1){
			if(challenge == 0){
				checkCollision();
			}else if(challenge == 1){
				checkCollisionDoors();
			}else if(challenge == 2){
				checkCollisionPackMan();
			}else if(challenge == 3){
				checkFloat();
			}
		}

		return;
	}

	if(input == 1){
		// up
		state.frog.yPos -=state.frog.velocity;
		// update number of steps
		state.NUM_OF_STEPS--;
	}else if(input == 2){
		// down
		state.frog.yPos +=state.frog.velocity;
		// update number of steps
		state.NUM_OF_STEPS--;
	}else if(input == 3){
		// left
		state.frog.xPos -=40;
		// update number of steps
		state.NUM_OF_STEPS--;
	}else if(input == 4){
		state.frog.xPos +=40;
		// update number of steps
		state.NUM_OF_STEPS--;
	}

	// after updates check the new position
	if(checkFor() == 1){
		if(challenge == 0){
			checkCollision();
		}else if(challenge == 1){
			checkCollisionDoors();
		}else if(challenge == 2){
			checkCollisionPackMan();
		}else if(challenge == 3){
			checkFloat();
		}
	}

	// if(state.reward.visibility == 1){
	// 	if(state.frog.yPos == state.reward.yPos){
	// 		int value = state.frog.width+state.frog.xPos;
	// 		if(state.reward.xPos-12<=value && value<=state.reward.xPos+RERE.width+12){
	// 			// there is a collision
	// 			if(state.reward.type == 1){
	// 				// increment the live
	// 				state.LIVES++;
	// 			}else{
	// 				state.SCORE_CONST++;
	// 			}
	// 		}
	// 	}
	// }
}

//============================================

// cars collision
void checkCollision(){
	// get index of the leader
	int i = getLeaderIndex(), temp = i+3;
	if(i == -1){
		return;
	}
	while(i< temp){
		// break if there is a collision
		if(checkCollisionValue(i,state.cars[i].xPos+state.cars[i].width, state.cars[i].xPos)){
			printf("%d -- %d -- RESET\n", i, state.cars[i].xPos);
			break;
		}
		i++;
	}
}

void checkCollisionPackMan(){
	
	int i = getLeaderIndex(), temp = i+3;
	while(i< temp){
		// break if there is a collision
		if(checkCollisionValue(i,state.packs[i].xPos+state.packs[i].width, state.packs[i].xPos)){
			break;
		}
		i++;
	}
}


void checkCollisionDoors(){
	int i = state.frog.yPos;

	if(i == PATH_1 || i == PATH_8){
		if(i == PATH_1 && state.doors[0].level1 == 1)
			return;
		if(i == PATH_8 && state.doors[0].level2 == 1)
			return;
		int j  = 0, t1, t2, t3;
		while(j < 6){
			// check if the frog within the doors cordin.
			t1 = (125+47*state.doors[j].arrayIndex);
			t2 = state.frog.width+state.frog.xPos;
			t3 = t1+BL.width;
			if(t1<=t2 && t2<=t3){
				// pass
				if(i == PATH_1)
					state.doors[0].level1 = 1;
				else
					state.doors[0].level2 = 1;
				return;
			}
			j++;
		}
		state.LOSE_FLAG = 1;
	}else{
		// here is check for other obsticals
		i = getLeaderIndex();
		int temp = i+3;
		while(i< temp){
			if(checkCollisionValue(i,state.monsters[i].xPos+state.monsters[i].width, state.monsters[i].xPos)){
				break;
			}
			i++;
		}
	}
}

//============================================

void checkFloat(){
	//printf("--- %d ---\n", state.frog.yPos);
	int i = getLeaderIndex(), temp = i+3;
	if(i == -1){
		return;
	}
	while(i < temp){
		if(checkFloatValue(i)){
			state.frog.fVar = 1;
			return;
		}
		i++;
	}
	printf("I am here ... RESET\n");
	// if there is no float then stop
	state.LOSE_FLAG = 1;
	return;
}

//============================================

// chick within the log width or not
int checkFloatValue(int i){
	int value = state.frog.width+state.frog.xPos;
	if(state.logs[i].xPos-12<=value && value<=state.logs[i].xPos+state.logs[i].width+12){
		// there is a collision
		state.frog.woodIndex = i;
		state.logs[i].hasFrog = 1;
		return 1; // float
	}
	return 0;
}

//============================================

// check if the there is a collision
int checkCollisionValue(int i, int value1, int value2){
	
	int term1 = state.frog.xPos, term2 = state.frog.width+state.frog.xPos;
	//int value = state.cars[i].xPos+state.cars[i].width;
	if(term1<=value1 && value1<=term2+1){
		// there is a collision
		//printf("1)a collision with %d, where y = %d\n", i, state.frog.yPos);
		state.LOSE_FLAG = 1;
		return 1;
	}
	//value2 = state.cars[i].xPos;
	if(term1<=value2 && value2<=term2+1){
		// there is a collision
		//printf("2)a collision with %d, where y = %d\n", i, state.frog.yPos);
		state.LOSE_FLAG = 1;
		return 1;
	}

	return 0; // no collision
}

//============================================

// this function returns the index of the car or the log leader
int getLeaderIndex(){
	int value;
	switch(state.frog.yPos){
		case PATH_1: // 100
			value = 0;
		break;
		case PATH_2: // 150
			value = 3;
		break;
		case PATH_3: // 200
			value = 6;
		break;
		case PATH_4: // 250
			value = 9;
		break;
		case PATH_5: // 300
			value = 12;
		break;
		case PATH_6: // 350
			value = 15;
		break;
		case PATH_7: // 400
			value = 18;
		break;
		case PATH_8: // 450
			value = 21;
		break;
		default:
			value = -1;
		break;
	}

	return value;
}

//============================================

// this function tells what function should be invoked
int checkFor(){

	if(100<=state.frog.yPos && 450>=state.frog.yPos)
		return 1; // check for frog posiont
	else
		return -1; // no need to check
}

//============================================

// check if the move of the frog is valid or not
int checkFrogPosition(int direction){
	// 1 : up - 2 : down
	// 3 : left - 4 : right
	if(direction == -1){
		return 0;
	}
	int t1 = state.frog.yPos;
	int t2 = state.frog.xPos;
	if(direction == 1){
		if(t1-50>=START_Y)
			return 1; // valid move
		else
			return 0; // invalid move
	}else if(direction == 2){
		if(t1+50<=550)
			return 1; // valid move
		else
			return 0; // invalid move
	}else if(direction == 3){
		if(t2-40>=START_X)
			return 1; // valid move
		else
			return 0; // invalid move
	}else if(direction == 4){
		if(t2+40<END_X)
			return 1; // valid move
		else
			return 0; // invalid move
	}

	return 0;
}

//============================================

void updateFloatingFrog(int i){
	state.frog.xPos+= state.logs[i].velocity;
	if((state.logs[i].direction==LEFT_TO_RIGHT))
		state.LOSE_FLAG = (state.frog.xPos>1075) ? 1 : 0;
	else
		state.LOSE_FLAG = (state.frog.xPos<150) ? 1 : 0;
}

//============================================