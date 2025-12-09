const int EchoPin = 5;
const int TriggerPin = 6;
#define CERCA 10

void setup() {
  Serial.begin(9600);
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  pinMode(CERCA, OUTPUT);
}

void loop() {
  int cm = ping(TriggerPin, EchoPin);
  Serial.print("Distancia: ");
  Serial.println(cm);
  delay(1000); //No majuscula al prinici
}

int ping(int triggerPin, int echoPin) { //no majuscules
  long duration; //separar-ho en dos
  long distanceCm; //separar-ho en dos
  digitalWrite(CERCA, LOW); 
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(4);
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TriggerPin, LOW);
  duration = pulseIn(echoPin, HIGH); //no majuscules
  distanceCm = duration / 58; //número massa complex i sense parentesis
  if (distanceCm <= 10) { //sobra el then
    digitalWrite(CERCA, HIGH);
  } else {
    digitalWrite(CERCA, LOW);
  }
  return (int)distanceCm; 
}