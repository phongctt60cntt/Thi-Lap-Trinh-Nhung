#include <LiquidCrystal.h>
int THERMISTORPIN = 0,  BCOEFFICIENT = 3380 ;
float THERMISTORNOMINAL = 10000 , TEMPERATURENOMINAL = 25 , SERIESRESISTOR = 10000    ;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sample[5];

void setup() {
 Serial.begin(9600);
 lcd.begin(16, 2);

}
void loop() {
  int i;
  float average;
 
  // lấy N mẫu liên tiếp
  for (i=0; i< 5; i++) {
   sample[i] = analogRead(THERMISTORPIN);
   delay(10);
  }
  average = 0;
  
  for (i=0; i< 5; i++) {
     average += sample[i];
     
  }
  average /= 5;
   // chuyển đổi giá trị qua điện trở
  average = 1023 / average - 1;
  average = SERIESRESISTOR / average;
 
 
  float steinhart;
  steinhart = average / THERMISTORNOMINAL;     
  steinhart = log(steinhart);                  
  steinhart /= BCOEFFICIENT;                   
  steinhart += 1.0 / (TEMPERATURENOMINAL + 273.15); 
  steinhart = 1.0 / steinhart;                 
  steinhart -= 273.15;                         // chuyển đổi sang độ C

  lcd.print("Temp  = ");
  lcd.print((int)steinhart);   
  lcd.print(" C"); 

  delay(500);            
  lcd.clear();
}
