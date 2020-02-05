int i;
int tiempo = 300;

void setup()
{
	for( i = 4; i < 12; i++) // delay of 300 miliseconds
	pinMode(i, OUTPUT);
}

void loop()
{
	for( i = 4; i < 12; i++)
  	{
		digitalWrite(i, HIGH); // turn On LED
		delay(tiempo); // Wait for 200 millisecond(s)
		digitalWrite(i, LOW);  // turn Off LED
		delay(tiempo); // Wait for 200 millisecond(s)
	}
	i = 10;
	while( i > 4)
	{
		digitalWrite(i, HIGH);  // turn On LED
		delay(tiempo); // Wait for 200 millisecond(s)
		digitalWrite(i, LOW);  // turn Off LED
		delay(tiempo); // Wait for 200 millisecond(s)
		i--;
  	}
	time();
}

void time() //Function time: change the time of turn On and Off in the LED
{
	if(tiempo > 0)
		tiempo -= 50; // decrease the time in 50 miliseconds
	else
		tiempo = 300;
}
