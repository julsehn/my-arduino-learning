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
  delay(1000);
}

int ping(int triggerPin, int echoPin) {
  long duration;
  long distanceCm;
  digitalWrite(CERCA, LOW);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(4);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration / 58; // distancia en cm (approx)
  if (distanceCm <= 30) {
    digitalWrite(CERCA, HIGH);
  } else {
    digitalWrite(CERCA, LOW);
  }
  return (int)distanceCm;
}