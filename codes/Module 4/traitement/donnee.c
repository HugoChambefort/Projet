#include <stdio.h>
#include <stdlib.h>
#include "donnee.h"
FILE*read() //structure de lecture d'un fichier
{

    FILE *f=NULL;
    f=fopen("Battements","r");

    if(f==NULL)
    {
        printf("ERREUR: le fichier ne peut etre ouvert");
        exit(EXIT_FAILURE);
    }
return read;
}

void Tri_bulletps (tableauDonnees[],tailleMax){ // Tri par bulle pour le temps et affiche le poul à coté
     int permut,i,temp,temp1,j=0;
     do{
            permut = 0;
     for (i=1;tailleMax;i++){
          if (tableauDonnees[i-1].temps>tableauDonnees[i].temps){
              temp = tableauDonnees[i-1].temps;
             tableauDonnees[i-1].temps=tableauDonnees[i].temps;
              tableauDonnees[i].temps=temp;
              temp1 = tableauDonnees[i-1].poul;
             tableauDonnees[i-1].poul=tableauDonnees[i].poul;
              tableauDonnees[i].poul=temp1;
              permut=1;
            }
        }
        j++;
    }
    while(permut);
}


void Tri_bullepoul (tableauDonnees[],tailleMax){ // Tri par bulle pour le poul et affiche le temps à coté
     int permut,i,temp,temp1,j=0;
     do{
            permut = 0;
     for (i=1;tailleMax;i++){
          if (tableauDonnees[i-1].poul>tableauDonnees[i].poul){ //On vérifie si la case de gauche est superieur à celle de droite
            temp = tableauDonnees[i-1].poul; //on place la case de gauche dans une variable temporaire
            tableauDonnees[i-1].poul=tableauDonnees[i].poul;
            tableauDonnees[i].poul=temp; // on réatribue la valeur
            temp1 = tableauDonnees[i-1].temps;
            tableauDonnees[i-1].temps=tableauDonnees[i].temps;
             tableauDonnees[i].temps=temp1;
              permut=1; //mettre la variable à 1
            }
        }
        j++;
    }
    while(permut);
}

