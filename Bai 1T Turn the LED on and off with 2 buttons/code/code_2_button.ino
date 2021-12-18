#define ON 3
#define OFF 2
#define led 13
// cấu hình chân
void setup() {
  pinMode(ON, INPUT_PULLUP);
  pinMode(OFF, INPUT_PULLUP);
  pinMode(led,OUTPUT);
}

void loop()
{
  if(digitalRead(ON)==0){digitalWrite(led,1);}
  if(digitalRead(OFF)==0){digitalWrite(led,0);}
}

