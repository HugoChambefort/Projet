#include <stdio.h>
#include <stdlib.h>
#ifndef _Donnees_
#define _Donnees_
typedef struct Donnees Donnees;
struct Donnees{ //Structure de donnees
	long temps;
	int pouls;
	char tableauDonnees[];
};
#endif


FILE*read();
void Tri_bulletps();
void Tri_bullepoul();
