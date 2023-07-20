// C++ code
//
char x ;
void setup()
{
  Serial.begin(9600);
  pinMode(4,OUTPUT);
   pinMode(5,OUTPUT);
   pinMode(6,OUTPUT);
   pinMode(7,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
}

void loop()
{ if(Serial.available()>0){
  x=Serial.read();

  
  switch(x){
    case 'f' : digitalWrite(4,1);
               digitalWrite(5,0);
                digitalWrite(6,1);
                 digitalWrite(7,0);
                   analogWrite(9,144);
                     analogWrite(10,144);
                break ;
    case 'b' :   
                digitalWrite(4,0);
               digitalWrite(5,1);
                digitalWrite(6,0);
                 digitalWrite(7,1);
                 analogWrite(9,144);
                     analogWrite(10,144);
                 break ;
      case 'r' :   
                digitalWrite(4,0);
               digitalWrite(5,0);
                digitalWrite(6,1);
                 digitalWrite(7,0);
                 analogWrite(9,144);
                     analogWrite(10,144);
                 break ;
         case 'l' :   
                digitalWrite(4,1);
               digitalWrite(5,0);
                digitalWrite(6,0);
                 digitalWrite(7,0);
                 analogWrite(9,144);
                     analogWrite(10,144);
                 break ;
    
    
    
    
  }
}    
    
 
}