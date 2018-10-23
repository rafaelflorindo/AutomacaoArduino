#include <Ultrasonic.h>
 
#define TRIGGER_PIN 10
#define ECHO_PIN 11
 
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
float dist, metro;

void setup() {
  Serial.begin(9600);
}

void loop() {
  long microsec = ultrasonic.timing();
  dist = ultrasonic.convert(microsec, Ultrasonic::CM);
  metro = dist/100;
  Serial.print(metro);
  Serial.print(" metros.");
  Serial.println();
  delay(2000);
}
