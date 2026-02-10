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
  // Activar ambos motores
  digitalWrite(ENABLE1,HIGH);
  digitalWrite(ENABLE2,HIGH);
  
  // 1. Avanzar en sentit rectilini durant 5 segons
  Serial.println("Avançant recte durant 5 segons");
  digitalWrite(DIRA1,HIGH);
  digitalWrite(DIRB1,LOW);
  digitalWrite(DIRA2,HIGH);
  digitalWrite(DIRB2,LOW);
  delay(5000);
  
  // 2. Girar a l'esquerra durant 1 segon
  Serial.println("Girant a l'esquerra durant 1 segon");
  digitalWrite(DIRA1,LOW);   // Motor 1 retrocedeix
  digitalWrite(DIRB1,HIGH);
  digitalWrite(DIRA2,HIGH);  // Motor 2 avança
  digitalWrite(DIRB2,LOW);
  delay(1000);
  
  // 3. Avançar en sentit rectilini durant 5 segons
  Serial.println("Avançant recte durant 5 segons");
  digitalWrite(DIRA1,HIGH);
  digitalWrite(DIRB1,LOW);
  digitalWrite(DIRA2,HIGH);
  digitalWrite(DIRB2,LOW);
  delay(5000);
  
  // 4. Girar a la dreta durant 1 segon
  Serial.println("Girant a la dreta durant 1 segon");
  digitalWrite(DIRA1,HIGH);  // Motor 1 avança
  digitalWrite(DIRB1,LOW);
  digitalWrite(DIRA2,LOW);   // Motor 2 retrocedeix
  digitalWrite(DIRB2,HIGH);
  delay(1000);
  
  // Detenir motors
  digitalWrite(ENABLE1,LOW);
  digitalWrite(ENABLE2,LOW);
  delay(2000);
}
   
