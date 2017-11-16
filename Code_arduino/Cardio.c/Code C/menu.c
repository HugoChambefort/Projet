#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int choix(choice)
{

    printf("Bonjour choisissez le mode d'allummage du coeur de LED:\n 1 pour coeur_led\n 2 pour la chenille\n 3 pour un sur deux\n 4 pour un sur trois \n 5 pour une LED aleatoire\n");
    scanf("%d",&choice); //Affichage de notre interface de choix sur console

    return choice;
}
