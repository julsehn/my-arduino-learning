#define ENABLE1 5
#define DIRA1 3
#define DIRB1 4
#define ENABLE2 8
#define DIRA2 9
#define DIRB2 10

int i;
 
void setup() {
  //---set pin direction
  pinMode(ENABLE1,OUTPUT);
  pinMode(DIRA1,OUTPUT);
  pinMode(DIRB1,OUTPUT);
  pinMode(ENABLE2,OUTPUT);
  pinMode(DIRA2,OUTPUT);
  pinMode(DIRB2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  //---back and forth example
    Serial.println("One way, then reverse");
    digitalWrite(ENABLE1,HIGH); // ENABLE1 on
    digitalWrite(ENABLE2,HIGH); // ENABLE2 on
    for (i=0;i<5;i++) {
    digitalWrite(DIRA1,HIGH); //one way
    digitalWrite(DIRB1,LOW);
    digitalWrite(DIRA2,HIGH); //one way
    digitalWrite(DIRB2,LOW);
    delay(500);
    digitalWrite(DIRA1,LOW);  //reverse
    digitalWrite(DIRB1,HIGH);
    digitalWrite(DIRA2,LOW);  //reverse
    digitalWrite(DIRB2,HIGH);
    delay(500);
  }
  digitalWrite(ENABLE1,LOW); // disable
  digitalWrite(ENABLE2,LOW); // disable
  delay(2000);

  Serial.println("fast Slow example");
  //---fast/slow stop example
  digitalWrite(ENABLE1,HIGH); //ENABLE1 on
  digitalWrite(ENABLE2,HIGH); //ENABLE2 on
  digitalWrite(DIRA1,HIGH); //one way
  digitalWrite(DIRB1,LOW);
  digitalWrite(DIRA2,HIGH); //one way
  digitalWrite(DIRB2,LOW);
  delay(3000);
  digitalWrite(ENABLE1,LOW); //slow stop
  digitalWrite(ENABLE2,LOW); //slow stop
  delay(1000);
  digitalWrite(ENABLE1,HIGH); //ENABLE1 on
  digitalWrite(ENABLE2,HIGH); //ENABLE2 on
  digitalWrite(DIRA1,LOW); //one way
  digitalWrite(DIRB1,HIGH);
  digitalWrite(DIRA2,LOW); //one way
  digitalWrite(DIRB2,HIGH);
  delay(3000);
  digitalWrite(DIRA1,LOW); //fast stop
  digitalWrite(DIRA2,LOW); //fast stop
  delay(2000);

  Serial.println("PWM full then slow");
  //---PWM example, full speed then slow
  analogWrite(ENABLE1,255); //ENABLE1 on
  analogWrite(ENABLE2,255); //ENABLE2 on
  digitalWrite(DIRA1,HIGH); //one way
  digitalWrite(DIRB1,LOW);
  digitalWrite(DIRA2,HIGH); //one way
  digitalWrite(DIRB2,LOW);
  delay(2000);
  analogWrite(ENABLE1,180); //half speed
  analogWrite(ENABLE2,180); //half speed
  delay(2000);
  analogWrite(ENABLE1,128); //half speed
  analogWrite(ENABLE2,128); //half speed
  delay(2000);
  analogWrite(ENABLE1,50); //half speed
  analogWrite(ENABLE2,50); //half speed
  delay(2000);
  analogWrite(ENABLE1,128); //half speed
  analogWrite(ENABLE2,128); //half speed
  delay(2000);
  analogWrite(ENABLE1,180); //half speed
  analogWrite(ENABLE2,180); //half speed
  delay(2000);
  analogWrite(ENABLE1,255); //half speed
  analogWrite(ENABLE2,255); //half speed
  delay(2000);
  digitalWrite(ENABLE1,LOW); //all done
  digitalWrite(ENABLE2,LOW); //all done
  delay(10000);
}
   
