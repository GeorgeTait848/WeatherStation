//#include <ESP_LM35.h>
/* LM35 analog temperature sensor with Arduino example code. More info: https://www.makerguides.com */

// Define to which pin of the Arduino the output of the LM35 is connected:
#define sensorPin A5

void setup() {
  // Begin serial communication at a baud rate of 9600:
  Serial.begin(9600);

  Serial.print("Temperature");
    Serial.print("(\xC2\xB0"); 
     Serial.println("C)");
    
}

void loop() {
  // Get a reading from the temperature sensor:
  int reading = analogRead(sensorPin);

  // Convert the reading into voltage:
  float voltage = reading * (5000 / 1024.0);

  // Convert the voltage into the temperature in degree Celsius:
  float temperature = voltage / 10;

  // Print the temperature in the Serial Monitor:
//  Serial.println(reading);
  Serial.println(temperature);


  delay(1000); // wait a second between readings
}
