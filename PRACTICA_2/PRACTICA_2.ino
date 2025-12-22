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
}

void loop(){
  delay(1500);
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
  delay(2000);
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
  delay(2000);
}
