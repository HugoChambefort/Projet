void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
   long nombre = random(60,85);
   Serial.println(nombre);

    delay(4);
}
