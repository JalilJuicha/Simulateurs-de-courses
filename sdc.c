#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section

struct	Race{

	int numberOfLaps;
	int currentLap;
	char firstPlaceDriverName[20];
	char firstPlaceRaceCarColor[20];
};

struct RaceCar{

	char driverName[20];
	char raceCarColor[20];
	int totalLapTime;
};

// Print functions section

void	printIntro() {

	printf("Bienvenue à notre événement principal, les fans de course numérique ! \n J'espère que tout le monde a pris son goûter car nous allons commencer !\n   =======================================================================\n");
};

// Logic functions section

int main()
{
    
	printIntro();

    //srand(time(0));





}






