int m5=5;
int m6=6;
int m7=7;
int m8=8;
 
long duration;
int cm;
 
int trigpin=13;
int echopin=12;
 
void setup()
 {
  Serial.begin(9600);
 pinMode(echopin,INPUT);
 pinMode(m5,OUTPUT);
 pinMode(m6,OUTPUT);
 pinMode(m7,OUTPUT);
 pinMode(m8,OUTPUT);
 pinMode(trigpin,OUTPUT);
 
 
 
}
 
void loop()
 {
  digitalWrite(m5,HIGH);
 digitalWrite(m6,LOW);
 digitalWrite(m7,LOW);
 digitalWrite(m8,HIGH);
  digitalWrite(trigpin,LOW);
 
  delay(5);
 
  digitalWrite(trigpin,HIGH);
  delay(10);
  digitalWrite(trigpin,LOW);
  pinMode(echopin,INPUT);
  duration=pulseIn(echopin,HIGH);
  cm=(duration*0.034)/2;
  Serial.print(cm);
 if(cm>=10)
 {
 digitalWrite(m5,HIGH);
 digitalWrite(m6,LOW);
 digitalWrite(m7,LOW);
 digitalWrite(m8,HIGH);
 }
 else if(cm<10)
 {
  digitalWrite(m5,LOW);
  digitalWrite(m6,HIGH);
  digitalWrite(m7,LOW);  
  digitalWrite(m8,LOW);// RIGHT TURN
 
  delay(1250);
 
   digitalWrite(m5,HIGH);
 digitalWrite(m6,LOW);
 digitalWrite(m7,LOW);
 digitalWrite(m8,HIGH);
 
 delay(750);
   
 digitalWrite(m5,HIGH);
 digitalWrite(m6,LOW);
 digitalWrite(m7,LOW);
 digitalWrite(m8,LOW);//LEFT turn
 
 delay(1250);         
  
 
  digitalWrite(m5,HIGH);
 digitalWrite(m6,LOW);
 digitalWrite(m7,LOW);
 digitalWrite(m8,HIGH);
 }
}
