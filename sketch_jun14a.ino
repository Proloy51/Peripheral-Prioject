const int test = 9;
void setup()
{
  pinMode(test,OUTPUT);
  digitalWrite(test,LOW);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available())
  {
    String i = Serial.readString();
    i.trim();
    Serial.println(i);

  if(i=="on")
  {
    digitalWrite(test,LOW);
  }

  else if(i=="off")
  {
    digitalWrite(test,HIGH);
  }
  }
}