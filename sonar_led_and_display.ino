#include<LiquidCrystal.h>
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
// int trig = A0;
// int echo = A1;
// float dura;
// float dist;
// int led = 7;

void setup() {
  // pinMode(trig,OUTPUT);
  // pinMode(echo,INPUT);
  // pinMode(led,OUTPUT);
  // Serial.begin(9600);
  lcd.begin(16,2);
}

void loop() {
  // digitalWrite(trig,LOW);
  // delay(2);
  // digitalWrite(trig,HIGH);
  // delayMicroseconds(10);
  // digitalWrite(trig,LOW);
  // dura = pulseIn(echo,HIGH);
  // dist = (dura*0.034)/2;
  // Serial.print("Distance : ");
  // Serial.print(dist);
  // Serial.println(" cm");

  // lcd.setCursor(0, 0);
  // lcd.print("Distance : ");
  // lcd.print(dist);
  // lcd.print(" cm");
  // lcd.setCursor(0,1);

  // if(dist<10)
  // digitalWrite(led,HIGH);
  // else if(dist>=10)
  // digitalWrite(led,LOW);
  // delay(500);

  
}

