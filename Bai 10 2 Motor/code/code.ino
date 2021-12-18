int A = 9;
int B = 3;

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(3, OUTPUT);
   digitalWrite(11, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
}

void di()
{
analogWrite(A, 255);
analogWrite(B, 255);
  digitalWrite(11, HIGH);
  digitalWrite(6, HIGH);
   digitalWrite(10, LOW);
  digitalWrite(5, LOW);
  delay(2000); 
  
  digitalWrite(11, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(5, HIGH);
  delay(2000); 
   digitalWrite(11, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);
  digitalWrite(5, LOW);
}
// speed control motor A

void sc()
{
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  for (int i=0;i<256;i++)
  {
   analogWrite(A,i);
    delay(20);
  }
   for (int i=255;i>=0;--i)
  {
   analogWrite(A,i);
    delay(20);
  }
    digitalWrite(11, LOW);
  digitalWrite(10, LOW);
}

  
void loop()
{
  di();
  delay(1000);
  sc();
  delay(1000);

}
