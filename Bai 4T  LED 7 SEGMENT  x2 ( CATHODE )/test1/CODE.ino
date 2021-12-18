int f = 7 ;
int g = 8 ;
int e = 9 ;
int d = 10 ;
int c = 11 ;
int b = 12 ;
int a = 13 ;  
int hoan = 500 ;
void  setup () {
  pinMode (f, OUTPUT);
  pinMode (g, OUTPUT);
  pinMode (e, OUTPUT);
  pinMode (d, OUTPUT);
  pinMode (c, OUTPUT);
  pinMode (b, OUTPUT);
  pinMode (a, OUTPUT);
}

void  loop ()
{
  // 0
 digitalWrite (a, 0 );
 digitalWrite (b, 0 );  
 digitalWrite (c, 0 );  
 digitalWrite (d, 0 );  
 digitalWrite (e, 0 );  
 digitalWrite (f, 1 );  
 digitalWrite (g, 0 );   
  delay (hoan);  
  //1
 digitalWrite (a, 1 );
 digitalWrite (b, 0 );  
 digitalWrite (c, 0 );  
 digitalWrite (d, 1 );  
 digitalWrite (e, 1 );  
 digitalWrite (f, 1 );  
 digitalWrite (g, 1 );  
  delay (hoan);
  //2
 digitalWrite (a, 0 );
 digitalWrite (b, 0 );  
 digitalWrite (c, 1 );  
 digitalWrite (d, 0 );  
 digitalWrite (e, 0 );  
 digitalWrite (f, 0 );  
 digitalWrite (g, 1 );   
 delay (hoan);
 //3
 digitalWrite (a, 0 );
 digitalWrite (b, 0 );  
 digitalWrite (c, 0 );  
 digitalWrite (d, 0 );  
 digitalWrite (e, 1 );  
 digitalWrite (f, 0 );  
 digitalWrite (g, 1 );  
  delay (hoan);
 //4
  digitalWrite (a, 1 );
 digitalWrite (b, 0 );  
 digitalWrite (c, 0 );  
 digitalWrite (d, 1 );  
 digitalWrite (e, 1 );  
 digitalWrite (f, 0 );  
 digitalWrite (g, 0 );   
  delay (hoan);   
//5
 digitalWrite (a, 0 );
 digitalWrite (b, 1 );  
 digitalWrite (c, 0 );  
 digitalWrite (d, 0 );  
 digitalWrite (e, 1 );  
 digitalWrite (f, 0 );  
 digitalWrite (g, 0 );  
  delay (hoan);  
  //6
   digitalWrite (a, 0 );
 digitalWrite (b, 1 );  
 digitalWrite (c, 0 );  
 digitalWrite (d, 0 );  
 digitalWrite (e, 0 );  
 digitalWrite (f, 0 );  
 digitalWrite (g, 0 );   
  delay (hoan);
 //7
  digitalWrite (a, 0 );
 digitalWrite (b, 0 );  
 digitalWrite (c, 0 );  
 digitalWrite (d, 1 );  
 digitalWrite (e, 1 );  
 digitalWrite (f, 1 );  
 digitalWrite (g, 1 );   
  delay (hoan);  
 //8
 digitalWrite (a, 0 );
 digitalWrite (b, 0 );  
 digitalWrite (c, 0 );  
 digitalWrite (d, 0 );  
 digitalWrite (e, 0 );  
 digitalWrite (f, 0 );  
 digitalWrite (g, 0 );   
  delay (hoan);  
 //9
  digitalWrite (a, 0 );
 digitalWrite (b, 0 );  
 digitalWrite (c, 0 );  
 digitalWrite (d, 0 );  
 digitalWrite (e, 1 );  
 digitalWrite (f, 0 );  
 digitalWrite (g, 0 );  
  delay (hoan);                
}
