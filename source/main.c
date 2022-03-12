#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include "framebuffer.h"
#include <time.h>
#include <wiringPi.h>
#include <string.h>

#include <pthread.h>

#include "initGPIO.h"
#include "sness.h"

#include "blue.h"
#include "lose.h"
#include "menu1.h"
#include "menu2.h"
#include "quit.h"
#include "start.h"
#include "win.h"
#include "block.h"
#include "fire.h"
#include "revier.h"

#include "live.h"
#include "score.h"
#include "steps.h"
#include "timeT.h"
#include "rewRed.h"
#include "rewGreen.h"

#include "newFrog.h"


#include "str.h"

#include "frogFile.h"
#include "logsFile.h"
#include "carsFile.h"
#include "pacMan.h"
#include "doors.h"
#include "num0.h"
#include "num1.h"
#include "num2.h"
#include "num3.h"
#include "num4.h"
#include "num5.h"
#include "num6.h"
#include "num7.h"
#include "num8.h"
#include "num9.h"

// 2 global variables for the sness
// 1) input stores the value of the pressed button
// 2) read to synchronise the input
int input = -1, rd = 1;

int challenge = 1;
short int array[720 * 1280 * 2];
State state;
struct fbs framebufferstruct;

void drawRect(int startX, int endX, int startY, int endY, short int color);
void drawStaticImage(int startX, int width, int startY, int height, short int *img);
void drawGame();
void checkChallenge();
void drawCars();
void drawLogs();
void drawFrog();
void drawPacks();
void drawFire(int);
void drawMonsters();
void * snessThread(void * var);
State getState();
void drawNumber(int startX, int startY, int number);
short int * getImageNumber(int);
int getNumberHeight(int number);
int getNumberWidth(int number);
void initGAME();
void displayMainMenu(int i);
void displayMenu(int i);
int checkGameRules();
int getTime();
void STARTGAME();
void challengeController(int);
void drawCanvas(int i);
void drawChalleng1();
void drawChalleng2();
void drawChalleng3();
void drawChalleng4();
void re();
//int getRand(int, int);
//void checkReward();
//void drawReward();
int getScore();
// to control the loop
int GAME = 0, MENU = 0, MAIN_MENU = 1;
int MAIN_MENU_BTN_1 = 1, MAIN_MENU_BTN_2 = 0;
int MENU_BTN_1 = 1, MENU_BTN_2 = 0;
int LOOP = 1;
// const time is the time that we start the game at
int CONST_TIME = 120;
// the time where each challenge start at
//time_t challengStartTime;
// control the transiontion between the challenges
int control = 0;

int main(int argc, char const *argv[])
{
	/* initialize + get FBS */
	framebufferstruct = initFbInfo();	

	pthread_t snessContoller;
			
	// background
	displayMainMenu(1);

	pthread_create(&snessContoller, NULL, snessThread, NULL);
	int temp;
	STARTGAME();
//============================================
	while(LOOP){
		temp = checkGameRules();
		if(temp == 0){
			// STOP the game win case
			drawStaticImage(550, w.width, PATH_2, w.height, (short int *) w.pixel_data);
			// Score
			drawStaticImage(550, SC.width, PATH_2+w.height, SC.height, (short int *)SC.pixel_data);
			//state.SCORE = getScore();
			drawNumber(550+SC.width, PATH_2+w.height, state.SCORE);
			drawGame();
			//LOOP = 0;
			MAIN_MENU = 0;
			MENU = 0;
			GAME = 0;
			//printf("t0\n");		
		}else if(temp == 1){
			// STOP the game lose case
			drawStaticImage(550, l.width, PATH_2, l.height, (short int *) l.pixel_data);
			// Score
			drawStaticImage(550, SC.width, PATH_2+w.height, SC.height, (short int *)SC.pixel_data);
			//state.SCORE = getScore();
			drawNumber(550+SC.width, PATH_2+w.height, state.SCORE);
			drawGame();
			MAIN_MENU = 0;
			MENU = 0;
			GAME = 0;

		}else if(temp == 2){ // ***
			GAME = 1;
			MENU = 0; 
			//re initialize the game
			re();
			// wait for 2 sec
			sleep(2);
			// set control back to 0 means that challenge1 is going to be displayed
			control = 0;
			drawChalleng1();
			rd = 1;
			input = -1;

		}
		
		if(MAIN_MENU == 1){
			if(input != -1 && rd == 0){
				// UP
				if(input == 5){
					// display the up img
					// black back
					// up image
					displayMainMenu(1);
					// set BTN_1 = 1 and BTN_2 = 0
					MAIN_MENU_BTN_1 = 1; MAIN_MENU_BTN_2 = 0;
				}else if(input == 6){
					// display the down img
					displayMainMenu(2);
					// set BTN_1 = 0 and BTN_2 = 1
					MAIN_MENU_BTN_1 = 0; MAIN_MENU_BTN_2 = 1;
				}else if(input == 9){
					// A is pressed
					if(MAIN_MENU_BTN_1 == 1){
						// close MAIN MUNE
						MAIN_MENU = 0;
						// start the game
						GAME = 1;
						// call init game

						// drawRect(START_X, END_X, START_Y, END_Y, (short int)0x000000);
						initGAME();
						// display the game challeng 1
						control = 0;

						drawChalleng1();
						//STARTGAME();
					}else{
						// stop the GAME
						LOOP = 0;
					}
				}
				rd = 1;
				input = -1;
			}
		}else if(GAME == 1){

			if(input != -1 && rd == 0){
				// start pressed
				if(input == 4){
					// stop updting the game
					GAME = 0;
					MENU = 1;
					// *** display the menu
					displayMenu(1);
				}else{
					updateFrog(input-4, control);
					checkChallenge();
				}
				rd = 1;
				input = -1;
			}else if (GAME != 0){
				updateFrog(-1, control);
				checkChallenge();
			}
			// draw the current challenge
			if(GAME != 0 && control == 0){
				drawChalleng1();
			}else if(GAME != 0 && control == 1){
				drawChalleng2();
			}else if(GAME != 0 && control ==2){
				drawChalleng3();
			}else if(GAME != 0 && control == 3){
				drawChalleng4();
			}
		}else if(MENU == 1){
			if(input != -1 && rd == 0){
				// start means lose the menu back to game
				if(input == 10){
					MENU = 0;
					GAME = 1;
					if(control == 0){
						drawChalleng1();
					}else if(control == 1){
						drawChalleng2();
					}else if(control == 2){
						drawChalleng3();
					}else if(control == 3){
						drawChalleng4();
					}
				}else if(input == 5){
					// display the up img
					displayMenu(1);
					// set BTN_1 = 1 and BTN_2 = 0
					MENU_BTN_1 = 1; MENU_BTN_2 = 0;
				}else if(input == 6){
					// display the down img
					displayMenu(2);
					// set BTN_1 = 0 and BTN_2 = 1
					MENU_BTN_1 = 0; MENU_BTN_2 = 1;
				}else if(input == 9){
					// A is pressed
					if(MENU_BTN_1 == 1){
						// resatrt
						// call init game 
						// close MAIN MUNE
						MENU = 0;
						// start the game
						GAME = 1;
						// can initthe game here
						// call init game
						//initGAME();
						re();
						// display the game challeng 1
						control = 0;
						drawChalleng1();
						//STARTGAME();
					}else{
						// quit the GAME
						MENU = 0;
						MAIN_MENU = 1;
						displayMainMenu(1);
					}
				}
				rd = 1;
				input = -1;
			}
		}else{
			// if there is input the go back to MAIN_MENU
			if(input != -1 && rd == 0){
				MAIN_MENU = 1;
				displayMainMenu(1);
				rd = 1;
				input = -1;
			}
		}

		
	}
	LOOP = 0;
//============================================
	// stop te thread.
	pthread_join(snessContoller, NULL);

	munmap(framebufferstruct.fptr, framebufferstruct.screenSize);
	return 0;
}

//============================================

/*
 Get the leader car, log, pack of each path
*/
int isLeader(int i){
	return i==0||i==3||i==6||i==9||i==12||i==15||i==18||i==21;
}


void * snessThread(void * var){
  int data[16], index = -1;
	
	initSNES();
	
	// start the loop
	while(LOOP){
		delayMicroseconds(75555);
		// get data from buttonsPressd
		buttonsPressd(data);
		// get index
		index = btnIndex(data);
		
		if(index != -1 && rd == 1){
        //  5 - 8 up  down left right
			input = index; //- 4;
			rd = 0;
		}	
	}

	return NULL;
}
// called first time to start the game
void initGAME(){
	initializeCars();
	initializeLogs();
	initializePacks();
	initializeDoors();
	initializeMonsters();
	initFrog();

	//challengStartTime = time(NULL);
}
// re initialize for the game ...
void re(){
	int i = 0;
	// delet the old data
	while(i<24){
		//state.cars[i] = (const state.cars[i]){0};
		memset(&state.cars[i], 0, sizeof(state.cars[i]));
		memset(&state.logs[i], 0, sizeof(state.logs[i]));
		memset(&state.packs[i], 0, sizeof(state.packs[i]));
		if(i < 15){
			memset(&state.monsters[i], 0, sizeof(state.monsters[i]));
		}
		if(i < 6){
			memset(&state.doors[i], 0, sizeof(state.doors[i]));
		}
		i++;
	}
	initializeCars();
	initializeLogs();
	initializePacks();
	initializeDoors();
	initializeMonsters();
	initFrog();
	//challengStartTime = time(NULL);
	//state.reward.visibility = 0;
}

// check which challenge should be displayed on the screen
void checkChallenge(){
	if(state.frog.yPos == 0 && control < 3){
		state.frog.yPos = START_GAP2;
		control++;
		//challengStartTime = time(NULL);
		//state.reward.visibility = 0;
	}else if(state.frog.yPos == 0 && control == 3){
		state.WIN_FLAG = 1;
	}
	//checkReward();
}

// check if there is a reward or not
/*
void checkReward(){
	int temp = time(NULL) - challengStartTime;
	// to update the posion of the reward each 30 seconds
	challengStartTime = time(NULL);
	if(temp >= 30){
		state.reward.visibility = 1;
		state.reward.xPos = getRand(150, 1000);
		if(control == 2){
			// path 2 to path 7 can have a reward
			state.reward.yPos = getRand(150, 400);
		}else if(control == 4){
			// place the reward before the revier
			state.reward.yPos = getRand(500, 600);
		}else{
			// anywhere in the screen
			state.reward.yPos = getRand(100, 600);
		}
		state.reward.type = getRand(1, 2);
		if(state.reward.type == 1){
			// get Img of reward
			// green or red
			// green extra live
			// red 100 points plus
			state.reward.rewardImg = (short int *) GRRE.pixel_data;
		}else{
			state.reward.rewardImg = (short int *) RERE.pixel_data;	
		}
	}
}

// get rand number
int getRand(int lower, int upper){
    srand(time(NULL));

    return (rand() % (upper - lower + 1)) + lower;

}
*/
// set the init. value of the game
void STARTGAME(){
	state.LIVES = 4; state.SCORE = 0;
	state.NUM_OF_STEPS = 500;
	state.TIME = CONST_TIME;
	state.startTime = time(NULL);
	state.LOSE_FLAG = 0;
	state.WIN_FLAG = 0;
}

void displayMainMenu(int i){
	// set back
	drawRect(START_X, END_X, START_Y, END_Y, (short int)0x000000);
	if(i == 1){
		// up
		drawStaticImage(400, s.width, 200, s.height, (short int *) s.pixel_data);
	}else{
		// down
		drawStaticImage(400, q.width, 200, q.height, (short int *) q.pixel_data);
	}

	drawGame();
}

void displayMenu(int i){
	if(i == 1){
		// up
		drawStaticImage(400, m1.width, 200, m1.height, (short int *) m1.pixel_data);
	}else{
		// down
		drawStaticImage(400, m2.width, 200, m2.height, (short int *) m2.pixel_data);
	}

	drawGame();
}
// get time diffrence
int getTime(int i){

	int temp = time(NULL) - state.startTime;
	if(temp >= 0){
		state.TIME = i - temp;
	}
	// printf("%d\n", i - temp);
	return i-temp;
}
// calc the score
// int getScore(){
// 	// remaining time
// 	// remaining moves
// 	// remaining lives
// 	// times a constant

// 	int temp = getTime(CONST_TIME);
// 	temp += state.NUM_OF_STEPS;
// 	temp+= state.LIVES;

// 	return temp*state.SCORE_CONST;
// }

// check if the game should be stops 
int checkGameRules(){

	if(state.WIN_FLAG == 1){
		// you win
		state.WIN_FLAG = 0;
		return 0;
	}

	if(state.NUM_OF_STEPS == 0){ // done 
		// stop the game
		return 1;
	}else if(getTime(CONST_TIME) <= 0){ // done
		// stop the game 

		return 1;
	}else if(state.LOSE_FLAG == 1){ // done
		// in this case we have a collision
		// check number of lives
		state.LOSE_FLAG = 0;
		if(state.LIVES-1 == 0){
			// stop the game
			printf("lolo\n");
			return 1;
		}else{
			// continue
			// reset the flag
			// 2 means reinitialize the game
			state.LIVES--;
			printf("l4\n");
			return 2;
		}
	}
	// no action is required ...
	return 3;
}


void drawChalleng1(){
	// cars only

	updateCars();
	drawCanvas(1);

//	drawReward();
	drawCars(); 

	drawFrog();

	drawGame();

}

void drawChalleng2(){
	// mon and fire
	updateMonsters();
	drawCanvas(1);
//	drawReward();
	drawFire(PATH_1);
	drawFire(PATH_8);
	drawMonsters();
	drawFrog();
	drawGame();
}

void drawChalleng3(){
	// PackMan
 	updatePacks();
 	drawCanvas(3);
 //	drawReward();
 	drawPacks();
 	drawFrog();
 	drawGame();
}

void drawChalleng4(){
	// Logs
	updateLogs();
	drawCanvas(4);
//	drawReward();
	drawLogs(); 
	drawFrog();
	drawGame();
}

// void drawReward(){
// 	if(state.reward.visibility == 1){
// 		drawStaticImage(state.reward.xPos, RERE.width, state.reward.yPos, RERE.height, state.reward.rewardImg);
// 	}
// }

void drawCanvas(int x){

	// Street 
	//drawStaticImage(125, GRE.width, END_GAP, GRE.height, (short int *)GRE.pixel_data);
	//drawStaticImage(125, GRE.width, END_GAP2, GRE.height, (short int *)GRE.pixel_data);
	drawStaticImage(125, BLU.width, END_GAP, BLU.height, (short int *)BLU.pixel_data);
//	drawRect(START_X, END_X, START_GAP, START_GAP2+50, (short int)0xFFFFFF);
	if(x == 4){
		//drawRect(START_X, END_X, PATH_1, PATH_8+50, (short int)0xFF00FF);
		drawStaticImage(125, REV.width, PATH_1, REV.height, (short int *)REV.pixel_data);
	}else if (x == 3){
		drawRect(START_X, END_X, PATH_1, PATH_8+50, (short int)0xFFFFFF);
	}else{
		drawRect(START_X, END_X, PATH_1, PATH_8+50, (short int)0x000000);	
	}
	drawStaticImage(125, BLU.width, START_GAP, BLU.height, (short int *)BLU.pixel_data);
//	drawRect(START_X, END_X, END_GAP, START_GAP2+50, (short int)0xFFFFFF);
	// INFO
	drawRect(START_X, END_X, INFO, INFO+100, (short int)0x000000);
	// number of lives
	drawStaticImage(200, lv.width, INFO+50, lv.height, (short int *)lv.pixel_data);
	drawNumber(200+lv.width, INFO+50, state.LIVES);

	// Score
	drawStaticImage(400, SC.width, INFO+50, SC.height, (short int *)SC.pixel_data);
	//state.SCORE = getScore();
	drawNumber(400+SC.width, INFO+50, state.SCORE);

	// number of number of steps
	drawStaticImage(600, ST.width, INFO+50, ST.height, (short int *)ST.pixel_data);
	drawNumber(600+ST.width, INFO+50, state.NUM_OF_STEPS);

	// TIME
	drawStaticImage(800, TI.width, INFO+50, TI.height, (short int *)TI.pixel_data);
	drawNumber(800+TI.width, INFO+50, state.TIME);


}

//============================================

void drawFrog(){
	drawStaticImage(state.frog.xPos, state.frog.width, state.frog.yPos, state.frog.height, state.frog.frogImg);
}


void drawCars(){
	int index = 0, xPos = 0, yPos = 0;
	int width, height;
	while(index < 24){
		// ****** CARS ******
		if(state.cars[index].follower == 0){
			xPos = state.cars[index].xPos;
			yPos = state.cars[index].yPos;
			width = state.cars[index].width;
			height = state.cars[index].height;
			if(xPos+width>=START_X && xPos+width<=END_X)
				drawStaticImage(xPos, width, yPos, height, state.cars[index].carImg);
		}
		index++;
	}	
}

//============================================

void drawLogs(){
	int index = 0, xPos = 0, yPos = 0;
	int width, height;
	while(index < 24){
		// ****** LOGS ******
		if(state.logs[index].follower == 0){
			xPos = state.logs[index].xPos;
			yPos = state.logs[index].yPos;
			width = state.logs[index].width;
			height = state.logs[index].height;
			if(xPos+width>=START_X+width && xPos+width<=END_X)
				drawStaticImage(xPos, width, yPos, height, state.logs[index].logImg);
		}
		index++;
	}	
}

//============================================

void drawPacks(){
	int index = 0, xPos = 0, yPos = 0;
	int width, height;
	while(index < 24){
		// ****** LOGS ******
		if(state.packs[index].follower == 0){
			xPos = state.packs[index].xPos;
			yPos = state.packs[index].yPos;
			width = state.packs[index].width;
			height = state.packs[index].height;
			if(xPos+width>=START_X+width && xPos+width<=END_X)
				drawStaticImage(xPos, width, yPos, height, state.packs[index].packImg);
		}
		index++;
	}	
}

//============================================

void drawMonsters(){
	int index = 0, xPos = 0, yPos = 0;
	int width, height;
	while(index < 18){
		// ****** LOGS ******
		if(state.monsters[index].follower == 0){
			xPos = state.monsters[index].xPos;
			yPos = state.monsters[index].yPos;
			width = state.monsters[index].width;
			height = state.monsters[index].height;
			if(xPos+width>=START_X+width && xPos+width<=END_X)
				drawStaticImage(xPos, width, yPos, height, state.monsters[index].monImg);
		}
		index++;
	}	
}

//============================================

void drawFire(int yPos){
  
  if(state.doors[0].level1 == 1 && yPos == PATH_1){
  	drawRect(START_X, END_X, yPos, yPos+50, (short int)0x000000);
  	return;
  }

  if(state.doors[0].level2 == 1 && yPos == PATH_8){
  	drawRect(START_X, END_X, yPos, yPos+50, (short int)0x000000);
  	return;
  }

  int sx = START_X, ex = nf.width;
  int temp =sx+ex;

  int i = 0;
  while(temp<=END_X){
	drawStaticImage(sx, FIR.width, yPos, FIR.height, (short int *)FIR.pixel_data);
	sx +=BL.width;
	temp =sx+ex;	
	i++;
  }

  i = 0;
  while(i<6){
  	drawStaticImage((125+47*state.doors[i].arrayIndex), BL.width, yPos, BL.height, (short int *)BL.pixel_data);
  	i++;
  }
}

//============================================


//============================================

void drawNumber(int startX, int startY, int number){
	int arrayNumber[4], i = 0;
	if(number == 0){
		arrayNumber[i] = 0;
		i++;
	}else{
		while(number){
			arrayNumber[i] = number % 10;
			number/=10;
			i++;
		}
	}
	// start drawing the number from the state.array in a reverse order
	i--;
	while(i>=0){
		drawStaticImage(startX, getNumberWidth(arrayNumber[i]), startY, getNumberHeight(arrayNumber[i]), getImageNumber(arrayNumber[i]));
		startX+=getNumberWidth(arrayNumber[i]);
		i--;
	}
}

short int * getImageNumber(int number){
	switch(number){
		case 0:
			return (short int *) N0.pixel_data;
		break;

		case 1:
			return (short int *) N1.pixel_data;
		break;

		case 2:
			return (short int *) N2.pixel_data;
		break;

		case 3:
			return (short int *) N3.pixel_data;
		break;

		case 4:
			return (short int *) N4.pixel_data;
		break;

		case 5:
			return (short int *) N5.pixel_data;
		break;

		case 6:
			return (short int *) N6.pixel_data;
		break;

		case 7:
			return (short int *) N7.pixel_data;
		break;

		case 8:
			return (short int *) N8.pixel_data;
		break;

		case 9:
			return (short int *) N9.pixel_data;
		break;
	}

	return NULL;
}

int getNumberWidth(int number){
	switch(number){
		case 0:
			return N0.width;
		break;

		case 1:
			return N1.width;
		break;

		case 2:
			return N2.width;
		break;

		case 3:
			return N3.width;
		break;

		case 4:
			return N4.width;
		break;

		case 5:
			return N5.width;
		break;

		case 6:
			return N6.width;
		break;

		case 7:
			return N7.width;
		break;

		case 8:
			return N8.width;
		break;

		case 9:
			return N9.width;
		break;
	}

	return 0;
}

int getNumberHeight(int number){
	switch(number){
		case 0:
			return N0.height;
		break;

		case 1:
			return N1.height;
		break;

		case 2:
			return N2.height;
		break;

		case 3:
			return N3.height;
		break;

		case 4:
			return N4.height;
		break;

		case 5:
			return N5.height;
		break;

		case 6:
			return N6.height;
		break;

		case 7:
			return N7.height;
		break;

		case 8:
			return N8.height;
		break;

		case 9:
			return N9.height;
		break;
	}

	return 0;
}

//============================================

void drawRect(int startX, int endX, int startY, int endY, short int color){

	// startX, endX, satrtY, endY.
	for (int y = startY; y < endY; y++)
	{
		for (int x = startX; x < endX; x++) 
		{	
			array[y*1280+x] = color;
		}
	}
}
//============================================

void drawStaticImage(int startX, int width, int startY, int height, short int *img){
	
	// draw ...
	int endX = startX+width, endY = startY+height;
	int i=0;

	for (int y = startY; y < endY; y++)
	{
		for (int x = startX; x < endX; x++)
		{	
				array[y*1280+x] = img[i];
				i++;		
		}
	}
}

//============================================

void drawGame(){
	printf("Done\n");
 	memcpy((unsigned short int*)framebufferstruct.fptr, array, 720*1280*2);
}

//============================================