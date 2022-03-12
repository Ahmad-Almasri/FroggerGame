#include <time.h>

#define START_Y 0
#define START_X 125

#define END_Y 720
#define END_X 1125

#define CHANNEL_1 50
#define CHANNEL_2 100
#define CHANNEL_3 150
#define CHANNEL_4 200
// ---- GAP 50 [250 - 300]
/*
#define PATH_1 300
#define PATH_2 350
#define PATH_3 400
#define PATH_4 450
* */
#define END_GAP 0
#define END_GAP2 50
// from 0 to 100 END GAP
#define PATH_1 100
#define PATH_2 150
#define PATH_3 200
#define PATH_4 250
#define PATH_5 300
#define PATH_6 350
#define PATH_7 400
#define PATH_8 450
// from 100 to 450 PATHS
#define START_GAP 500
#define START_GAP2 550
// from 500 to 600 STArt GAP
#define INFO 600
// from 600 to 700 INFO
#define LEFT_TO_RIGHT 1
#define RIGHT_TO_LEFT -1

typedef struct Frog{
	short int *frogImg;
	
	int xPos;
	int yPos;

	int width;
	int height;

	int velocity;

	int woodIndex;

	int fVar;

}Frog;

typedef struct Car{
	
	short int *carImg;
	
	int xPos;
	int yPos;

	int width;
	int height;

	int prevXPos; // there is no need to store prevYPos because yPos is never changed

	int direction;

	int leader;
	int follower;

	int velocity;
	int gap;

}Car;

typedef struct Pack{
	
	short int *packImg;
	
	int xPos;
	int yPos;

	int width;
	int height;

	int prevXPos; // there is no need to store prevYPos because yPos is never changed

	int direction;

	int leader;
	int follower;

	int velocity;
	int gap;

}Pack;

typedef struct Logs{

	short int *logImg;

	int  xPos;
	int  yPos;

	int width;
	int height;

	int prevXPos; // there is no need to store prevYPos because yPos is never changed
	
	int direction;

	int leader;
	int follower;

	int velocity;
	int gap;

	int hasFrog;

}Logs;

typedef struct Doors
{
	int arrayIndex;
	int level1;
	int level2;
}Doors;

typedef struct Monster
{
	short int *monImg;
	
	int xPos;
	int yPos;

	int width;
	int height;

	int prevXPos; // there is no need to store prevYPos because yPos is never changed

	int direction;

	int leader;
	int follower;

	int velocity;
	int gap;
	
}Monster;



typedef struct State{
	
	//GameMap gameMap;

	// # of objects : 12 + 9 + 1 = 22
	Frog frog;
	Car cars[24];
	Logs logs[24];

	
	Pack packs[24];
	
	Doors doors[6];
	Monster monsters[18];
	// Flags
	int WIN_FLAG;
	int LOSE_FLAG;

	// Info.
	int SCORE;
	int LIVES; // satrtng with min. of 4
	int NUM_OF_STEPS;
	int TIME;
	time_t startTime;

}State;
