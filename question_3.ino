const byte startPin = 0;
const byte endPin = 7;
const byte sw=8;
void setup() {
for (byte i = startPin; i<= endPin; i++) {
pinMode(i, OUTPUT);
}
pinMode(sw,INPUT);
digitalWrite(sw,HIGH);
}
void loop()
{
byte i;
byte lightPin = startPin;
boolean val=digitalRead(8);
if(val==0){
  
 for(byte j=1;j<=2;j++)
{    
for (i=startPin; i<= endPin; i++) {
  digitalWrite(i,HIGH);}
 delay(500);
for (i=startPin; i<= endPin; i++) {
  digitalWrite(i,LOW);} 
 delay(500);
 }  
for (i=startPin; i<= endPin; i++) {
  digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
}
  for(byte j=1;j<=2;j++)
{    
for (i=startPin; i<= endPin; i++) {
  digitalWrite(i,HIGH);}
 delay(500);
for (i=startPin; i<= endPin; i++) {
  digitalWrite(i,LOW);} 
 delay(500);
 }  
for (i=endPin; i> startPin; i--) {
  digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
} 
  
  }
else {
for (i=startPin; i<= endPin; i++) {
  digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
}

for (i=endPin; i> startPin; i--) {
  digitalWrite(i,HIGH);
  delay(100);
  digitalWrite(i,LOW);
}
  
  
  
  }
