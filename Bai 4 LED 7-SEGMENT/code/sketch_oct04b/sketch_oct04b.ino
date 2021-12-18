
int f = 13;
int g = 12;
int e = 11;
int d = 10;
int c = 9;
int b = 6;
int a = 7;  


int hoan = 500; 

void setup() {

  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);

}

void loop() 
{
  // 0
 digitalWrite(a,0); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,0);  
 digitalWrite(g,1);   
  delay(hoan);  
  
 digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);  
  delay(hoan);
  
 digitalWrite(a,0); 
 digitalWrite(b,0);  
 digitalWrite(c,1);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,1);  
 digitalWrite(g,0);   
 delay(hoan);
 
 digitalWrite(a,0); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,0);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,0);  
  delay(hoan); 
 
  digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,0);  
 digitalWrite(g,0);   
  delay(hoan);   

 digitalWrite(a,0); 
 digitalWrite(b,1);  
 digitalWrite(c,0);  
 digitalWrite(d,0);  
 digitalWrite(e,1);  
 digitalWrite(f,0);  
 digitalWrite(g,0);  
  delay(hoan);  
  
   digitalWrite(a,0); 
 digitalWrite(b,1);  
 digitalWrite(c,0);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,0);  
 digitalWrite(g,0);   
  delay(hoan); 
 
  digitalWrite(a,0); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   
  delay(hoan);  
 
 digitalWrite(a,0); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,0);  
 digitalWrite(g,0);   
  delay(hoan);  
 
  digitalWrite(a,0); 
 digitalWrite(b,0);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,0);  
 digitalWrite(g,0);  
  delay(hoan);   
             
}
