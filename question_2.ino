const byte startPin = 0;
const byte endPin = 7;
void setup() {
for (byte i = startPin; i<= endPin; i++) {
pinMode(i, OUTPUT);
}
}
void loop()
{
byte i;
byte lightPin = startPin;

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
