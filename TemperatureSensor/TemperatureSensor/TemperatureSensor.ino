/*
Demonstrates the working of Temperature Sensor

By Sooraj K
*/

float temp;

void setup() {
   Serial.begin(9600);
}

void loop() {
  temp = analogRead(tempPin);       // Get analog voltage from sensor
  temp = temp * 0.48828125;         // Convert the analog voltage to its temperature equivalent
  Serial.print("Temperature = ");
  Serial.print(temp);               // Display temperature value
  Serial.println("degree Celsius");
  delay(1000);
}