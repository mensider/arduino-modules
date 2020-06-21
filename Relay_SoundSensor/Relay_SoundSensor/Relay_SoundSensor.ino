/*
Clap Switch

Demonstrates the working of Sound Sensor and Relay

By Sooraj K
*/

const int relayPin = 11;    //Relay signal pin
const int soundPin = 7;     //Sound sensor signal pin

int soundVal = 0;           //Variable to hold sound input
int currentState = LOW;     //Relay current state
int previousState = HIGH;   //Relay previou state

void setup ()
{
  pinMode (relayPin, OUTPUT);
  pinMode (soundPin, INPUT);
}
 
void loop ()
{
  soundVal = digitalRead(soundPin);                       //Read sound input
  if (soundVal == LOW && previousState==HIGH)             //If clap detected
  {
    currentState=!currentState;
    digitalWrite (relayPin, currentState);                //Toggle relay state
  }
  previousState=soundVal;                                 //save state
  delay(10);
}