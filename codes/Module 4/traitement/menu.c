#include <stdio.h>
#include <stdlib.h>


void interface()//Definition de notre interface de choix d'opération
{
    int i;
    printf("---------Choisissez votre mode de lecture----------\n");
    printf("0: Fermeture du programme\n 1: les donnee brutes\n 2: ordre croissant\n 3:ordre decroissant\n 4: affichage d'une donnee particuliere\n 5: moyenne du poul\n 6: Nombre de ligne de donnee en memoire\n 7: poul min\n 8 poul max\n ");
    scanf("%i",&i);
}
