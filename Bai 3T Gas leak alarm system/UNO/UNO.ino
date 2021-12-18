#include<LiquidCrystal.h>

LiquidCrystal lcd(12 , 11 , 5 ,4 ,3 ,2);
int Gas = 9;
int redLed = 10;
int YLed = 8;

void setup() {

pinMode(Gas , INPUT);
  
}

void loop() {

  if(digitalRead(Gas) == HIGH){
    lcd.setCursor(0,0);
    lcd.print(" GAS RO RI ");
    digitalWrite(10, HIGH);
    digitalWrite(8, LOW);
  }
else{
  lcd.setCursor(0,0);
  lcd.print(" AN TOAN ");
  digitalWrite(8, HIGH);
  digitalWrite(10 ,LOW);
}
delay(500);
lcd.clear();
}
