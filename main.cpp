#include <Arduino.h>

void setup() {
  pinMode(2, OUTPUT); // El LED integrado suele estar en el pin 2
}

void loop() {
  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  delay(1000);
}
