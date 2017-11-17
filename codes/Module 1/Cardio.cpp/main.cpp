#include "Cardio.h"
#include "Arduino.h"
#include "FreqMeasure.h"
void setup() {
 Serial.begin(9600); //début de la communication série.
 FreqMeasure.begin();
 }



void loop()
{
  int tp,poul;
  tp=temps();
  poul=random(60,120);
  Serial.print(tp);
  Serial.print(";");
  Serial.println( poul);
 
}

