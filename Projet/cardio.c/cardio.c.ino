#include "cardio.h"

int valeurprec=0;
int tmpsprece=0;

void temps()
{
 time=millis(); // millis() permet de donner en millisecondes le temps d'éxécution de l'arduino
 Serial.println(time);
 delay(1000);// delai de 1 seconde
}

void FCM() 
{
  int valeurActuelle,valeurSeuil;
  long tempsDetection;
  valeurActuelle=analogRead(0);
  valeurSeuil=650;
  
   if (valeurActuelle > valeurSeuil) 
   {  // on est dans la zone max
    if (valeurprec <= valeurSeuil) 
    {  // 
      tempsDetection = millis();
      if (tempsDetection > (tmpsprece + 200))
      {  // ce n'est pas seulement du bruit?
        Serial.println( (1000.0 * 60.0) / (tempsDetection - tmpsprece),0);
        tmpsprece = tempsDetection;
                                              
      }
    }
  }

  valeurprec = valeurActuelle;

}



