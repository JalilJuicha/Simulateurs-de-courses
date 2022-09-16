#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

// Structures section

struct	Race{

	int numberOfLaps;
	int currentLap;
	char firstPlaceDriverName[20];
	char firstPlaceRaceCarColor[20];
};

struct  RaceCar{

	char driverName[20];
	char raceCarColor[20];
	int totalLapTime;
};

// Print functions section

void	printIntro() {

	printf("Bienvenue à notre événement principal, les fans de course numérique ! \n J'espère que tout le monde a pris son goûter car nous allons commencer !\n   =======================================================================\n");

};

void    printCountDown(){

    int i=6;
    printf("Coureurs prets ! Dans ... \n");
        while (i>1){
            i--;
    sleep(2);
    printf("%d\n",i);
    }
    printf("Course!!!\n");



};

void     printFirstPlaceAfterLap(struct Race race){
    
    printf("\n Apres le tour numero %d \n La premiere place est occupee par : %s dans la voiture de course %s !",race.currentLap,race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
};


void    printCongratulation(struct Race race){
    printf("Felicitons tous  %s dans la voiture de course %s , pour son incroyable performance.\n C'etait vraiment une belle course et bonne nuit a tous !\n",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
};


// Logic functions section




///////////

int main()
{
    
	printIntro();
    printCountDown();
    return 0;
    
    //srand(time(0));

}
