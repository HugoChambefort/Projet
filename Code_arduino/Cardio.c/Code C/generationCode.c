#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"
#define FILE_param "C:\\Users\\hugol\\OneDrive\\Documents\\Exia\\Projet\\Code_arduino\\Cardio.c\\param.h"//Chemin pour écrire dans param.h
void generation(choice)
{

    FILE*f=NULL; // Déclaration pour une ouverture de fichier
    f=fopen(FILE_param,"w"); //Ouverture de param.h en mode écriture seulement

    if (f==NULL)
        //Si le fichier s'ouvre ps envoyer une erreur
    {
        printf("Erreur d'ouverture de fichier");
        exit(EXIT_FAILURE );
    }
    switch(choice) //Switch de nos choix pour l'allumage du coeur
    {
    case 1:
        fprintf(f,"#define choix 1"); //ecrira dans param.h le choix 1
        break;
    case 2:
        fprintf(f,"#define choix 2");
        break;
    case 3:
        fprintf(f,"#define choix 3");
        break;

    case 4:
        fprintf(f,"#define choix 4");
        break;
    case 5:
        fprintf(f,"#define choix 5");
        break;

    }
    fclose(f);//Fermeture du fichier
}
