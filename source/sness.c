/*
 * AUTHOR : AHMAD ALMASRI -- University Of Calgary
 * DATE : 2021
 * 
 * A C program for a SNES controller that prints on the screen the pressed
 * button on the SNESS controller and termnates when the user presses START
 * 
 * SNES CONTROLLER has 16 buttons, but the used button are 13 only.
 * [B, Y, Select, Start, Joy-pad UP, Joy-pad Down, Joy-pad Left, Joy-pad
	Right, A, X, Left, Right]
 */
//======================================================================
#include <stdio.h>
#include <unistd.h>      
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <wiringPi.h>
#include <string.h>
#include "initGPIO.h"
//======================================================================
/*
 * MACROS TO CONTORL THE PINS STATE
 */
//	NUMBER OF BUTTONS
#define numberOfBtns 16
//	BASE ADDRESS OF GPIO
unsigned int *GPIO;
//	READ PIN = INP_GPIO(PIN)
#define INP_GPIO(PIN) *(GPIO+(PIN/10)) &= ~( 7 << ( (PIN%10) * 3) )   // 000
//	WRITE PIN = OUT_GPIO(PIN)
#define OUT_GPIO(PIN) *(GPIO+(PIN/10)) |= ( 1 << ( (PIN%10) * 3) )	  // 001
//	GPIO SET, CLR, AND LEV BASE ADDRESS
#define GPSET0 	7  // 28/4
#define GPCLR0  10 // 40/4
#define GPLEV0  13  // 52/4
//	SET AND CLR FUNCTIONS
#define GPIOSET(PIN)  GPIO[GPSET0] = 1 << PIN 
#define GPIOCLR(PIN)  GPIO[GPCLR0] = 1 << PIN 
//	LATCH = 9
#define LAT 9
//	DATA = 10
#define DAT 10
//	CLOCK = 11
#define CLK 11

//======================================================================
/*
 * DECLARE FUNCTIONS
 */
void initSNES();

void buttonsPressd(int *data);
void waitF(int);

int btnIndex(int *);
void printPressedBtn(int);

int compare(int *a1, int *a2);

//======================================================================

//======================================================================
/*
 * compare two integers array
 * Args:
 * a1 and a2 are both int array
 * Return:
 * -1 if not equal
 * 1  if equal
 */
int compare(int *a1, int *a2){
	for(int i=0; i<16; i++){
		if(a1[i] != a2[i])
			return -1;
	}
	
	return 1;
}

//======================================================================

/*
 * Initialize the approperiate pins for the sness driver
 */
void initSNES(){
	GPIO = getGPIOPtr();
    
	// set CLK to WRITE
	INP_GPIO(CLK);
	OUT_GPIO(CLK);
	
	// set LAT to WRITE
	INP_GPIO(LAT);
	OUT_GPIO(LAT);
	
	// set DATA to READ
	INP_GPIO(DAT);
}

//======================================================================
/*
 * buttonsPressed function get the current state of the sness controller
 * Args:
 * A pointer array
 * Return:
 * The caller will get the data back becuse the state is stored on a
 * pointer array
 */
void buttonsPressd(int *data){
//	counter
	int index = 0;
	
//	set clock and latch for 12 MIS
	GPIOSET(CLK);
	GPIOSET(LAT);
	
//  wait
	waitF(12);
	
//	clear latch	
	GPIOCLR(LAT);
	
//	loop over the buttons 16 times
	while(index < numberOfBtns){
		
// 		wait
		waitF(6);
		
//		CLK is low
		GPIOCLR(CLK);
		
//		wait
		waitF(6);
		
//		read DATA FROM GPLEV0
		data[index] = (GPIO[GPLEV0] >> DAT) & 1;
		
//		CLK is high
		GPIOSET(CLK);
		
// 		inc. index 
		index++;
	}
}
//======================================================================
/*
 * This function delay the main thread for a given number
 * of microseconds
 */
void waitF(int waitingTime){
	delayMicroseconds(waitingTime);
}

//======================================================================
/*
 * btnIndex returns the index of the pressed button
 * Args:
 * data is an array of the current state of the sness controller
 * The logic is base on:
 * data[x] = 0 --> pressed && data[x]=1 --> NOT pressed
 */
int btnIndex(int *data){
	int index = 0;
	while(index < 13){
		// WAS IT PRESSED ??
		if(data[index] == 0)
		{
			//	BECAUSE NUMBERS STARTS FROM 1 ON THE SNESS
			//  THEREFORE, DISPLAY RETURNS INDEX+1
			return index+1;
		}
		
		index++;
	}
	// NO BUTTON IS PRESSED
	return -1;
}
//======================================================================
/*
 * printPressedBtn function prints the name of the pressed button
 * Args:
 * index = the index of the btton
 */
void printPressedBtn(int index){
	switch(index){
		case 1:
		//B
		printf("Button B\n");
		break;
		case 2:
		// Y
		printf("Button Y\n");
		break;
		case 3:
		// Select
		printf("Button Select\n");
		break;
		case 4:
		// Start
		printf("Button Start\n");
		break;
		case 5:
		// Joy-pad UP
		printf("Joy-pad UP\n");
		break;
		case 6:
		// Joy-pad DOWN
		printf("Joy-pad DOWN\n");
		break;
		case 7:
		// joy-pad LEFT
		printf("Joy-pad LEFT\n");
		break;
		case 8:
		// joy-pad RIGHT
		printf("Joy-pad RIGHT\n");
		break;
		case 9:
		// A
		printf("Button A\n");
		break;
		case 10:
		// X
		printf("Button X\n");
		break;
		case 11:
		// Left
		printf("Button L\n");
		break;
		case 12:
		// Right
		printf("Button R\n");
		break;
		// 13 - 16 are unused ...
	}
}
//======================================================================
