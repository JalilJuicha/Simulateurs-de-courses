# Simulateurs-de-courses
À vos marques, prêts, partez 🚦🚦🚦! En utilisant les structures et le reste de vos connaissances en C, nous allons créer un simulateur de course.

Tout d'abord, nous allons définir nos types de données complexes à l'aide de structures. Ensuite, nous créerons quelques fonctions d'impression amusantes pour aider à mettre à jour notre public. Enfin, nous implémenterons des fonctions pour aider à la logique de la course et nous lancerons notre course !

1. Nous allons commencer par créer nos types de données pour la course.
Dans la section structures, créez une structure `Race` qui possède les variables membres suivantes :
    1. un int - `numberOfLaps`
    2. un int - `currentLap`
    3. une chaîne de caractères - `firstPlaceDriverName`
    4. une chaîne de caractères - `firstPlaceRaceCarColor`
2. Ensuite, dans la section structures, créez une structure `RaceCar` qui a les variables membres suivantes :
    1. a string - `driverName`
    2. une chaîne - `raceCarColor`
    3. un nombre entier - `totalLapTime`
3. Puisque chaque course a besoin d'une introduction amusante, créons-en une. 
    
    Dans la section `“Print function section”`, créez la fonction `printIntro()` qui imprime un message d'introduction amusant pour la course sur la console. Par exemple :
    

```c
Bienvenue à notre événement principal, les fans de course numérique !
J'espère que tout le monde a pris son goûter car nous allons commencer !
```

Allez-y et appelez `printIntro()` depuis `main()` pour voir sa sortie dans la console.

1. Outre une introduction, une course a toujours un compte à rebours !
    
    Dans la section des fonctions d'impression, créez la fonction `printCountDown()` qui imprime un message amusant de compte à rebours pour nos coureurs.
    
    Par exemple :
    
    ```c
    Coureurs prêts ! Dans...
    5
    4
    3
    2
    1
    Course !
    ```
    

Allez-y et appelez `printCountDown()` depuis la fonction `main()` pour voir son résultat.

1. Une fois la course lancée, nous devons être en mesure d'indiquer au public qui est en tête après chaque tour.
    
    Dans la section des fonctions d'impression, créez la fonction `printFirstPlaceAfterLap()` qui possède un seul paramètre de type `Race` nommé `race`.
    
    La fonction doit accéder aux variables membres de race et imprimer un message annonçant le `tour en cours`, le `nom du pilote en tête` et `la couleur de la voiture` de course qu'il conduit.
    
    Par exemple :
    
    ```c
    Après le tour numéro 2
    La première place est occupée par : Youssef dans la voiture de course jaune !
    ```
    
2. Lorsque la course se termine, nous devons féliciter le gagnant et dire au public que la course est terminée.
    
    Dans la section des fonctions d'impression, créez la fonction `printCongratulation()` qui possède un paramètre de type `Race` nommé `race`.
    
    La fonction doit accéder aux variables membres de race et afficher un message de félicitations avec le `nom du pilote` et `la couleur de la voiture` de course qu'il conduisait.
    
    Par exemple :
    
    ```c
    Félicitons tous Ahmed, dans la voiture de course orange, pour son incroyable performance.
    C'était vraiment une belle course et bonne nuit à tous !
    ```
    
3. Pour que notre course soit passionnante, nous avons besoin d'un moyen de calculer le temps que met une voiture de course pour effectuer un tour.
    
    Dans la section des fonctions logiques, sous la section des fonctions d'impression, créez la fonction `calculateTimeToCompleteLap()` qui n'a pas de paramètres et renvoie un type `int`.
    
    Dans la fonction, déclarez 3 variables `int` :
    
    - `vitesse`
    - `acceleration`
    - `nerves`
    
    Initialisez chacune à un nombre aléatoire entre 1 et 3. (utilisez la fonction rand()).
    
    retourner la somme des trois variables.
    
4. Maintenant que nous savons combien de temps il faut à une voiture de course pour terminer un tour, nous devons être en mesure de connaître le temps total de course de la voiture.
    
    Dans les fonctions logiques, créez la fonction `updateRaceCar()` et, puisque nous devons modifier le temps total du tour pour la voiture de course donnée, assurez-vous qu'elle a un seul paramètre de pointeur `RaceCar` nommé `raceCar` et qu'elle n'a pas de sortie.
    
    Cette fonction doit trouver le temps qu'il a fallu à la `raceCar` pour effectuer un tour et l'ajouter à la variable membre `totalLapTime`.
    
5. Finalement, nous devons savoir qui est le nouveau pilote de la première place et quelle couleur de voiture il conduit.
    
    Dans la section des fonctions logiques, créez la fonction `updateFirstPlace()` qui a les paramètres suivants :
    
    - un pointeur de course - `race`
    - un pointeur de voiture de course - `raceCar1`
    - un pointeur de voiture de course - `raceCar2`
    et n'a pas de sortie.
    
    Cette fonction doit définir les variables membres de la course `firstPlaceDriverName` et `firstPlaceRaceCarColor` avec :
    
    - les variables membres `raceCar1 driverName` et `raceCarColor` si son `totalLapTime` est inférieur ou égal à `raceCar2 totalLapTime`
    - les variables membres `raceCar2 driverName` et `raceCarColor`, sinon.

10. Rassemblons toutes nos pièces pour créer notre course numérique !

Au-dessus de main(), créez la fonction `startRace()` qui a 2 paramètres de pointeur `RaceCar` :

- `raceCar1`
- `courseCar2`

et ne renvoie aucune sortie.

Cette fonction doit initialiser un type de course nommé race avec les valeurs de variables membres suivantes :

- 5 - `numberOfLaps`
- 1 - `currentLap`
- "" - `firstPlaceDriverName`
- "" - `firstPlaceRaceCarColor`
1. Ensuite, nous devons être en mesure de simuler tous les tours de la course, où, à chaque tour, le temps de chaque voiture de course est calculé et un pilote de première place et la couleur de sa voiture de course sont annoncés.
    
    Dans `startRace()`, créez une boucle for qui boucle le `numberOfLaps` dans `Race`.
    
    A l'intérieur de la boucle :
    
    - Met à jour la variable membre `raceCar1` et `raceCar2 totalLapTime`.
    - Met à jour les variables membres `Race firstPlaceDriverName` et `firstPlaceRaceCarColor`.
    - Afficher les informations relatives à la première place
2. Une fois tous les tours terminés, nous devons être en mesure d'annoncer le nom des gagnants et la couleur de leur voiture de course.
    
    Dans `startRace()`, après la boucle for, imprimez un message de félicitations.
    
3. Maintenant que la logique de course est complète, nous pouvons travailler sur le point d'entrée de la simulation de course.
    
    Dans `main()`, déclarez et initialisez 2 types de données `RaceCar`.
    
    Ensuite, imprimez un message d'introduction et commencez le compte à rebours.
    
    Enfin, appelez `startRace()` avec des pointeurs vers les types de `RaceCar` que vous avez créés.
    
    Profitez de la course !
