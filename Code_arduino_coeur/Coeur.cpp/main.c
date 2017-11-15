#include "Coeur.h"

void setup() {
 Serial. begin(9600); //début de la communication série.
 int i;
 switch(choix)
 {
  case 1:
  coeur_led(i);
  break;
  
  case 2:
  chenille(i);
  break;
  
  case 3:
  un_surdeux(i);
  break;
  
  case 4:
  un_surtrois(i);
  break;

  case 5:
  aleatoire_led(i);
  break;

  
 }
 
}



void loop()
{
 
}

