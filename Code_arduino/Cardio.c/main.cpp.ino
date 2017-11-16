#include "Cardio.h"
#include "Arduino.h"
#include "FreqMeasure.h"
void setup() {
 Serial.begin(9600); //début de la communication série.
 FreqMeasure.begin();
 switch(choix)
 {
  case 1:
  coeur_led();
  break;
  case 2:
  chenille();
  break;
  case 3:
  un_surdeux();
  break;
  case 4:
  un_surtrois();
  break;
  case 5:
  aleatoire_led();
  break;
  

 }



}



void loop()
{
  int tp,poul;
  tp=temps();
  poul=FCM();
  Serial.print(tp);
  Serial.print(";");
  Serial.println(poul);
 
}

