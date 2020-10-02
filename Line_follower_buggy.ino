int leftir=0,rightir=1;        
int a1=32,a2=34,b1=26,b2=28;    
int inputleft=0,inputright=0;    
void setup() {
pinMode(leftir,INPUT);
pinMode(rightir,INPUT);
pinMode(a1,OUTPUT);
pinMode(a2,OUTPUT);
pinMode(b1,OUTPUT);
pinMode(b2,OUTPUT);
}
void loop() {
 inputleft=analogRead(leftir);        
  inputright=analogRead(rightir);    
    digitalWrite(a1,LOW);    
    digitalWrite(a2,LOW);
    digitalWrite(b1,LOW);
    digitalWrite(b2,LOW);
    if(inputleft>200 && inputright>200)//if both the IR are above white portion
    {
      digitalWrite(a1,HIGH);    
      digitalWrite(a2,LOW);
      digitalWrite(b1,HIGH );
      digitalWrite(b2,LOW);    
    }
    if(inputleft<200)        
   {
      digitalWrite(a1,LOW);
      digitalWrite(a2,LOW);        
      digitalWrite(b1,HIGH);    
      digitalWrite(b2,LOW); 
    }
   if(inputright<200)          
 {   
      digitalWrite(b1,LOW);
      digitalWrite(b2,LOW);    
      digitalWrite(a1,HIGH);
      digitalWrite(a2,LOW);    
   }
