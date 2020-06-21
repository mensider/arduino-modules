/*
Demonstrates the working of Hall Sensor

By Sooraj K
*/

#define Hall_Sensor_D 2           //Hall sensor signal pin

int Field_detected=0;             //Here you can store both values, the Val2 can be boolean
int LEDpin = 13;                  //Using on board LED

void setup() {
  pinMode(Hall_Sensor_D,INPUT);
  pinMode(LEDpin ,OUTPUT);
}

void loop() {
  
  Field_detected=digitalRead(Hall_Sensor_D);
  
  if (Val2==HIGH) {                     //If magnetic field detected
    digitalWrite(LEDpin,HIGH);          //Turn on LED briefly
    delay(500);
  }
  else{
    digitalWrite(LEDpin,LOW);
    delay(500);
  }
}