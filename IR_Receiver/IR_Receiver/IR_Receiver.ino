#include <IRremote.h>   //Library containing Decoder

int RECV_PIN = 11;    //IR Reciever Signal Pin
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);   //Prints the code into serial monitor
    irrecv.resume(); // Receive the next value
  }
}