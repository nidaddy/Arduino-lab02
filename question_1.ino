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
