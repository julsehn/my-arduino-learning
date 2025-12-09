#include <LiquidCrystal.h>
#include "SR04.h"
#define TRIG_PIN 2
#define ECHO_PIN 4
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
int espera = 500;
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Hello, World!");
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  a=sr04.Distance();
  Serial.print("Distància:");
  Serial.print(a);
  Serial.println("cm");
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.setCursor(0, 1);
  lcd.print("                "); // 16 espacios para LCD 16x2
  delay(50);
  lcd.setCursor(0, 1);
  lcd.print(a);
  lcd.print(" cm");
  delay(500);
}        