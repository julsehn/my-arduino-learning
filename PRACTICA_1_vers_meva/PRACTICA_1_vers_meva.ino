#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
int led = 4;
int espera = 500;

void setup() {
   Serial.begin(9600);
   pinMode(led, OUTPUT);
   delay(1000);
}

void loop() {
   a=sr04.Distance();
   Serial.print("Distància:");
   Serial.print(a);
   Serial.println("cm");
   if (a <= 20){
      digitalWrite(led, HIGH);
   } else{
      digitalWrite(led, LOW);
   }
   delay(1000);
}
