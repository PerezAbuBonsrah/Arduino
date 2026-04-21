int  red = 8;
int  yellow = 9;
int  green = 4;
void setup() {
 pinMode(red,OUTPUT);
 pinMode(yellow,OUTPUT);
 pinMode(green,OUTPUT);
}

void loop() {
 digitalWrite(red,HIGH);
 digitalWrite(yellow,LOW);
 digitalWrite(green,LOW);
 delay(16000);
 digitalWrite(red,LOW);
 digitalWrite(yellow,HIGH);
 digitalWrite(green,LOW);
  delay(1000);m
 digitalWrite(red,LOW);
 digitalWrite(yellow,LOW);
 digitalWrite(green,HIGH);
  delay(16000);
}
