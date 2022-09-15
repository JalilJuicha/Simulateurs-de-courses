#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section

struct	Race{

	int numberOfLaps;
	int currentLap;
	char firstPlaceDriverName[];
	char firstPlaceRaceCarColor[];
};

// Print functions section

// Logic functions section

int main()
{
    srand(time(0));
};
