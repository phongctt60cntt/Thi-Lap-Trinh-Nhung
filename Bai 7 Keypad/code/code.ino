#include <LiquidCrystal.h>
#include "Keypad.h"
// LCD Setup
const int rs=13, en=12,d4=11,d5=10, d6=A5, d7=A4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// Keypad Setup
const byte ROWS = 4; // Four Rows
const byte COLS = 4; // Four Columns
char keys[ROWS][COLS] = {
  {'7','8','9','A'},
  {'4','5','6','B'},
  {'1','2','3','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {2,3,4,5 }; // Arduino pins connected to the row pins of the keypad
byte colPins[COLS] = {6,7,8,9}; // Arduino pins connected to the column pins of the keypad
Keypad keypad_key = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );  // Keypad Library definition

void setup(void) {  
  // Hiển thị trên LCD
  lcd.begin(16, 4); //LCD columns and rows
  lcd.setCursor(0,1);
  lcd.print(" Xin chao, ");
  lcd.print("Hay nhap vao");
  delay(2000);

}
void loop(){
char keypressed = keypad_key.getKey();  // nhận gt được nhấn trên keypad
  if (keypressed != NO_KEY){  // check

  lcd.clear();
  lcd.setCursor(1, 1);
  lcd.print(" nut duoc nhan la : ");
  lcd.print(keypressed);

   }
}
