#include <stdio.h>
#include <stdlib.h>
#define tailleMax 100

typedef struct donnees{ //Structure de donnees
	long temps;
	int pouls;
	char tableauDonnees[];
} donnees;

void Tri_bulletps();
void Tri_bullepoul();
