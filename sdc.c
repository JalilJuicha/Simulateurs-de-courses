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


int     calculateTimeToCompleteLap(){
	srand(time(0));
	//to get value between to numbers we use (rand() % (max - min +1) + min)
	
    int vitesse=(rand() % (3 - 1 +1) + 1);
	int acceleration=(rand() % (3 - 1 +1) + 1);
	int nerves=(rand() % (3 - 1 +1) + 1);
	
    return  vitesse+ acceleration+nerves;
};

void    updateRaceCar(struct RaceCar *raceCar){
	
    raceCar->totalLapTime+=calculateTimeToCompleteLap();
	
};


void    updateFirstPlace(struct Race *race,struct RaceCar *raceCar1,struct RaceCar *raceCar2){

    if (raceCar1->totalLapTime<= raceCar2->totalLapTime){
    	strcpy(race->firstPlaceDriverName,raceCar1->driverName);

    	strcpy(race->firstPlaceRaceCarColor,raceCar1->raceCarColor);
    	printFirstPlaceAfterLap(*race);

	}else if (raceCar1->totalLapTime > raceCar2->totalLapTime) {
		strcpy(race->firstPlaceDriverName,raceCar2->driverName);
		strcpy(race->firstPlaceRaceCarColor,raceCar2->raceCarColor);
    }
    race->currentLap++;
};



///////////
void    startRace(struct RaceCar *raceCar1,struct RaceCar *courseCar2){
	

        struct Race race={5,1,"",""};
	    int i,c;
	    for (i=0;i<race.numberOfLaps;i++){
	
        //race.currentLap=i;
		updateRaceCar(courseCar2);
		updateRaceCar(raceCar1);
		
	
		updateFirstPlace(&race,raceCar1,courseCar2);
		printFirstPlaceAfterLap(race);
 		
	
	
	}
	    printCongratulation(race);

};



int main()
{
    
	    struct RaceCar  race1={"Jalil","Bleu",0};
        struct RaceCar  race2={"Joe","Noir",0};
	    printIntro();
        printCountDown();
        startRace(&race1,&race2);
        
        printf("%d",calculateTimeToCompleteLap());
    

    return 0;    
    
    //srand(time(0));

}
