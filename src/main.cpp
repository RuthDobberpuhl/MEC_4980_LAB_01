#include <Arduino.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200); 
}

void loop(){
  digitalWrite(LED_BUILTIN, HIGH); 
  Serial.println("LED is on");
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED is off");
  delay(1000);
}