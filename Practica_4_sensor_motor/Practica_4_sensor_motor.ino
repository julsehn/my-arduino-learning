#define ENABLE1 5
#define DIRA1 3
#define DIRB1 4
#define ENABLE2 8
#define DIRA2 9
#define DIRB2 10
#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
int aleatori = 0;
SR04 sr04 = SR04(TRIG_PIN, ECHO_PIN);
long a;

int i;
 
void setup() {
  pinMode(ENABLE1,OUTPUT);
  pinMode(DIRA1,OUTPUT);
  pinMode(DIRB1,OUTPUT);
  pinMode(ENABLE2,OUTPUT);
  pinMode(DIRA2,OUTPUT);
  pinMode(DIRB2,OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  delay(1000);
}

void loop() {
  digitalWrite(DIRA1,HIGH);
  digitalWrite(DIRB1,LOW);
  digitalWrite(DIRA2,HIGH);
  digitalWrite(DIRB2,LOW);
  delay(200);
  digitalWrite(ENABLE1,HIGH);
  digitalWrite(ENABLE2,HIGH);
  a=sr04.Distance();
  Serial.print(a);
  Serial.println("cm");
  if (a < 15) {
    digitalWrite(ENABLE1,LOW);
    digitalWrite(ENABLE2,LOW);
    delay(2000);
    aleatori = random(1,2);
      if (aleatori == 1){
      digitalWrite(DIRA1,LOW);
      digitalWrite(DIRB1,HIGH);
      digitalWrite(DIRA2,HIGH);
      digitalWrite(DIRB2,LOW);
      delay(250);
    } else {
      digitalWrite(DIRA1,HIGH);
      digitalWrite(DIRB1,LOW);
      digitalWrite(DIRA2,LOW);
      digitalWrite(DIRB2,HIGH);
      delay(250);
    }
  }
}