#include <Arduino.h>

// put function declarations here:
unsigned char c; 
#define LED_BUILTINN D4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTINN, OUTPUT);

}

void loop() {
  digitalWrite(LED_BUILTINN, HIGH);
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
      c = Serial.read();   // read the character
      Serial.write(c);     // echo
      digitalWrite(LED_BUILTINN, LOW);
      delay(10);
    }
  // Serial.print("Hello, world!");



}