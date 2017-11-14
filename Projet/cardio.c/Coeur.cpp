#include "Coeur.h"
#include "param.h"
#include "Arduino.h"
 int i;
void assignation_led()
 {
 }

void coeur_led()//Allume mode chenille
{
  for (i=0;i<10;i++)
  {
  pinMode(L[i],OUTPUT);
  digitalWrite(L[i],HIGH);
  }
  
}

