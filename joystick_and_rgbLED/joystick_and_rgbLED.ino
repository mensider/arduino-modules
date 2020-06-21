/*
Demonstrates the woring of Joystick module and RGB LED

By Sooraj K
*/

int joystick_x = A0;  // X-Axis movement value  Analog Input
int joystick_y = A1;  // Y-Axis movement value  Analog Input
int joystick_switch = 12;   //Push Button state

int LED_Red = 3;    //PWM Pins conneted to LED
int LED_Green = 5;
int LED_Blue = 6;

void setup() {
  pinMode(joystick_switch,INPUT_PULLUP);
    
  pinMode(LED_Red, OUTPUT);
  pinMode(LED_Green, OUTPUT);
  pinMode(LED_Blue, OUTPUT);
}

void loop() {
  delay(10);
  if (digitalRead(joystick_switch)) {     //if push switch is open
    RGB_LED(0,analogRead(joystick_y)/4,analogRead(joystick_x)/4);     
    //analogRead() returns an integer between 0 and 1023, gives a combination of BLUE and GREEN
  }
  else {    //if push switch is closed
    RGB_LED(255,0,0);   // RED Colour
  }
}

void RGB_LED(int R, int G, int B)   //function for RGB LED
 {
  analogWrite(LED_Red, R);
  analogWrite(LED_Green, G);
  analogWrite(LED_Blue, B);
}
