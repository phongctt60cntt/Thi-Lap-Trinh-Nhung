#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

#define FlamePin A0
#define buzzer 1

void setup() {
   lcd.begin(16, 2);
   pinMode(FlamePin, INPUT_PULLUP);
   pinMode(buzzer, OUTPUT);    
}

void loop() {

int Flame = digitalRead(FlamePin);

if(Flame==HIGH)
{
  digitalWrite(buzzer, HIGH);
  lcd.setCursor(5, 0);
  lcd.print("Lua");
   lcd.setCursor(3, 1);
  lcd.print("Chay");
  delay(200);
  lcd.clear();
  delay(200);
  
}
else
{
 digitalWrite(buzzer, LOW); 
 lcd.setCursor(5, 0);
    lcd.print("An");
    lcd.setCursor(3, 1);
    lcd.print("Toan");
    delay(1000);
    lcd.clear();
}
}
