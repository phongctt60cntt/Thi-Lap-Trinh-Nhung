int x = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  // đọc cổng 2
x = digitalRead(2);
// bật LED nào
if (x == HIGH) {
digitalWrite(13, HIGH);  
} else {
  //Tắt LED :)
  digitalWrite(13, LOW);
}
  delay(1000); //đợi 1000 mili giây để bật tắt
}
