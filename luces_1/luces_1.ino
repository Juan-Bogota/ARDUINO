int i;
int tiempo = 300;

void setup()
{
  for( i = 8; i < 14; i -= -1)
    pinMode(i, OUTPUT);
  
}

void loop()
{
   for( i = 8; i < 14; i++)
  {
        digitalWrite(i, HIGH);
      delay(tiempo); // Wait for 200 millisecond(s)
    digitalWrite(i, LOW);
      delay(tiempo); // Wait for 200 millisecond(s)
  }
  i = 12;
  while( i > 8)
  {
      digitalWrite(i, HIGH);
      delay(tiempo); // Wait for 200 millisecond(s)
    digitalWrite(i, LOW);
      delay(tiempo); // Wait for 200 millisecond(s) 
      i--; 
  }
 time();  
  
}

void time()
{
  if(tiempo > 0)
    tiempo -= 50; 
  else
    tiempo = 300;
}
