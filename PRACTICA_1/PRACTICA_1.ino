#define TRIG_PIN 12
#define ECHO_PIN 11
int led = 4;
int espera1 = 500;
int espera2 = 1000;

void setup() {
   Serial.begin(9600);
   pinMode(TRIG_PIN, OUTPUT);
   pinMode(ECHO_PIN, INPUT);
   pinMode(led, OUTPUT);
}
void loop() {
   int cm = ping(TRIG_PIN, ECHO_PIN);
   Serial.print("Distancia: ");
   Serial.println(cm);
   delay(1000);
   int ping(int TRIG_PIN, int ECHO_PIN);
   int (longduration, DistanceCm);
   digitalWrite(led, LOW);
   digitalWrite(TRIG_PIN, LOW);
   delay(400);
   digitalWrite(TRIG_PIN, HIGH);
   delay(1000);
   digitalWrite(TRIG_PIN, LOW);
   int Duration = pulseIn(ECHO_PIN, HIGH);
   int distanceCm = (Duration * 10 / 292 / 2);
   if (distanceCm <= 20){ 
      digitalWrite(led, HIGH);
   } else{
      digitalWrite(led, LOW);
   }
   return distanceCm;
}