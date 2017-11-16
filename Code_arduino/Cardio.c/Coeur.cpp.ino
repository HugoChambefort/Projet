
#include "Coeur.h"
#include "param.h"
#include <Arduino.h>

#define freq 490 //Défini la fréquence sur 490
#define dutyCycle 50 // 100/dutycycle 10 pour 10%, 20 pour 5%
const int L[10]={2,3,4,5,6,7,8,9,10};//Tableau des pins pour la suite

 int i;
 
void coeur_led()//Allume mode LED battement de coeur
{
  do{
  for (i=0;i<10;i++)// Incrémentation pour chaque pins
  {
  pinMode(L[i],OUTPUT);//Mettre les pins comme des sorties
  digitalWrite(L[i],HIGH); //Allumer les LEDS
  }
  delay(100);//delai 100ms
  for (i=0;i<11;i++)
  {
     digitalWrite(L[i],LOW);//La LED s'éteint
  }
  delay(100);
 
  } while(1);
}

void chenille()//Allume le mode chenille
{
  int period = 1000/freq;
  int timing = period / dutyCycle;
 
  do 
  {
    for(i=2; i<11; i++)
  
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);// signal d'allumage donc signal 1
    delay(100);//delai de 100ms
    digitalWrite(i, LOW);

    delay(100);   

  } 
 

  } while(1);
 
}

void un_surdeux()
{
  do{ //boucle infini
  for (i=2;i<10;i+=2) // boucle pour chaque pin
  {
  pinMode(L[i],OUTPUT);
  digitalWrite(L[i],HIGH); 
  }
  delay(500);//delai de 500 millisecondes
  for (i=2;i<11;i+=2)
  {
     digitalWrite(L[i],LOW);
  }
  delay(500);
  for (i=3;i<10;i+=2)
  {
  pinMode(L[i],OUTPUT);
  digitalWrite(L[i],HIGH); 
  }
  delay(500);
  for (i=3;i<11;i+=2)
  {
     digitalWrite(L[i],LOW);
  }
  delay(500);
 
  } while(i);
}
void un_surtrois()
{
  do{
  for (i=2;i<10;i+=3)
  {
  pinMode(L[i],OUTPUT);
  digitalWrite(L[i],HIGH); 
  }
  delay(500);
  for (i=2;i<11;i+=3)
  {
     digitalWrite(L[i],LOW);
  }
  delay(500);
  for (i=3;i<10;i+=3)
  {
  pinMode(L[i],OUTPUT);
  digitalWrite(L[i],HIGH); 
  }
  delay(500);
  for (i=3;i<11;i+=3)
  {
     digitalWrite(L[i],LOW);
  }
  delay(500);
 
 
  } while(i);
}


void aleatoire_led()
{
  i=random(2,10);
  pinMode(i,OUTPUT);
  digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
  delay(100);
}


