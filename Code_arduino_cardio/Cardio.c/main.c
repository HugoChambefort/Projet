#include "Coeur.h"
#include "param.h"
void setup() {
 Serial. begin(9600); //début de la communication série.
 
}



void loop()
{
  temps();//Fonction du temps
  FCM();
  
 
}

