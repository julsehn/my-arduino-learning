const int GREENONE = 5;
const int YELLOWONE = 6;
const int REDONE = 7;
const int GREENTWO = 8;
const int YELLOWTWO = 9;
const int REDTWO = 10;

void setup() {
  pinMode(GREENONE, OUTPUT);
  pinMode(YELLOWONE, OUTPUT);
  pinMode(REDONE, OUTPUT);
  pinMode(GREENTWO, OUTPUT);
  pinMode(YELLOWTWO, OUTPUT);
  pinMode(REDTWO, OUTPUT);

  digitalWrite(REDTWO, HIGH);
  digitalWrite(YELLOWTWO, LOW);
  digitalWrite(GREENTWO, LOW);
  digitalWrite(REDONE, HIGH);
  digitalWrite(YELLOWONE, LOW);
  digitalWrite(GREENONE, LOW);
  delay(2000);
}

void loop(){
  digitalWrite(REDTWO,LOW);
  digitalWrite(YELLOWTWO,LOW);
  digitalWrite(GREENTWO,HIGH);
  digitalWrite(REDONE,HIGH);
  digitalWrite(YELLOWONE,LOW);
  digitalWrite(GREENONE,LOW);
  delay(3000);
  digitalWrite(REDTWO,LOW);
  digitalWrite(YELLOWTWO,HIGH);
  digitalWrite(GREENTWO,LOW);
  digitalWrite(REDONE,HIGH);
  digitalWrite(YELLOWONE,LOW);
  digitalWrite(GREENONE,LOW);
  for (int i=0 ; i < 5 ; i++) {
    digitalWrite(YELLOWTWO, LOW);
    delay(500);
    digitalWrite(YELLOWTWO, HIGH);
    delay(500);
  }
  delay(2000);
  digitalWrite(REDTWO, HIGH);
  digitalWrite(YELLOWTWO, LOW);
  digitalWrite(GREENTWO, LOW);
  digitalWrite(REDONE, HIGH);
  digitalWrite(YELLOWONE, LOW);
  digitalWrite(GREENONE, LOW);
  delay(1000);
  digitalWrite(REDTWO,HIGH);
  digitalWrite(YELLOWTWO,LOW);
  digitalWrite(GREENTWO,LOW);
  digitalWrite(REDONE,LOW);
  digitalWrite(YELLOWONE,LOW);
  digitalWrite(GREENONE,HIGH);
  delay(3000);
  digitalWrite(REDTWO,HIGH);
  digitalWrite(YELLOWTWO,LOW);
  digitalWrite(GREENTWO,LOW);
  digitalWrite(REDONE,LOW);
  digitalWrite(YELLOWONE,HIGH);
  digitalWrite(GREENONE,LOW);
  for (int i ; i < 5 ; i++) {
    digitalWrite(YELLOWONE, LOW);
    delay(500);
    digitalWrite(YELLOWONE, HIGH);
    delay(500);
  }
  delay(2000);
  digitalWrite(REDTWO, HIGH);
  digitalWrite(YELLOWTWO, LOW);
  digitalWrite(GREENTWO, LOW);
  digitalWrite(REDONE, HIGH);
  digitalWrite(YELLOWONE, LOW);
  digitalWrite(GREENONE, LOW);
  delay(1000);
}
