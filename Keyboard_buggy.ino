void setup() 

{
Serial.begin(9600);   
pinMode(5, OUTPUT);   
pinMode(6, OUTPUT);   
pinMode(7, OUTPUT);   
pinMode(8, OUTPUT);   
}

void forward()                                                  //the buggy moves in forward direction

{
digitalWrite(5,HIGH);   
digitalWrite(6,LOW);    
digitalWrite(7,LOW);    
digitalWrite(8,HIGH);   
}

void Backward()                                                //the buggy moves backward direction

{
digitalWrite(5,LOW);  
digitalWrite(6,HIGH);   
digitalWrite(7,HIGH);   
digitalWrite(8,LOW);   
}

voidAnti_Rotation()                                            //the buggy moves in left direction

{
digitalWrite(5,HIGH);   
digitalWrite(6,LOW);   
digitalWrite(7,HIGH);  
digitalWrite(8,LOW);   
}

voidClock_Rotation()                                           //the buggy moves in right direction

{
digitalWrite(5,LOW);  
digitalWrite(6,HIGH); 
digitalWrite(7,LOW);  
digitalWrite(8,HIGH); 
}

void stops()                                                     //the buggy stops

{
digitalWrite(5,LOW);   
digitalWrite(6,LOW);   
digitalWrite(7,LOW);   
digitalWrite(8,LOW);   
}

void loop()
{
char s=' ';
if(Serial.available()>0) 
  {
    s=Serial.read();
if(s=='F')
forward();
else if(s=='B')
  {
Backward();
  }
else if(s=='R')
  {
Clock_Rotation();
  }
else if(s=='L')
  {
Anti_Rotation();
  }
  s=' ';
}}
