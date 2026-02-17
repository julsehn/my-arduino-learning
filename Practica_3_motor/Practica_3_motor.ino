#define ENABLE1 5
#define DIRA1 3
#define DIRB1 4
#define ENABLE2 8
#define DIRA2 9
#define DIRB2 10

int i;
 
void setup() {
  pinMode(ENABLE1,OUTPUT);
  pinMode(DIRA1,OUTPUT);
  pinMode(DIRB1,OUTPUT);
  pinMode(ENABLE2,OUTPUT);
  pinMode(DIRA2,OUTPUT);
  pinMode(DIRB2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ENABLE1,HIGH);
  digitalWrite(ENABLE2,HIGH);
  
  digitalWrite(DIRA1,HIGH);
  digitalWrite(DIRB1,LOW);
  digitalWrite(DIRA2,HIGH);
  digitalWrite(DIRB2,LOW);
  delay(5000);
  
  digitalWrite(DIRA1,LOW);
  digitalWrite(DIRB1,HIGH);
  digitalWrite(DIRA2,HIGH);
  digitalWrite(DIRB2,LOW);
  delay(1000);
  
  digitalWrite(DIRA1,HIGH);
  digitalWrite(DIRB1,LOW);
  digitalWrite(DIRA2,HIGH);
  digitalWrite(DIRB2,LOW);
  delay(5000);
  
  digitalWrite(DIRA1,HIGH);
  digitalWrite(DIRB1,LOW);
  digitalWrite(DIRA2,LOW);
  digitalWrite(DIRB2,HIGH);
  delay(1000);
  
}
   
