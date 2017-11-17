#include <stdio.h>
#include <stdlib.h>
#include "action.h"
#include "donnee.h"


void affichage(int choice,tableauDonnees[],int nblignes) //Affichage de nos opérations
{
    scanf("%i",&choice);
    if (choice=0) //Sortie si l'utilisateur entre 0
    {
        printf("Fermeture du programme")
        exit(1);
    }
    else if (choice=1)
     {
        basiques(tableauDonnees[], int nblignes);
    }

}

void basiques(tableauDonnees[], int nblignes)
{
            int i;

            for( i = 0; i < nblignes; i++ )//Affichage de notre poul par nombre de ligne de notre excel
            {
                printf("Temps:%i Pouls:%i\n",tableauDonnees[i].time,tableauDonnees[i].pouls);
            }
}
