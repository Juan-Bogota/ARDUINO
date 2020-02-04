int num;
int i;
int numAnt = 0;
void setup()
{
  for( i = 8; i < 14; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  
}

void loop()
{
  num = random(8,13);
  if (num != numAnt)
  {
  digitalWrite(num,HIGH);
  delay(300);
  digitalWrite(num,LOW);
  delay(300);
  }
  numAnt = num;
}
