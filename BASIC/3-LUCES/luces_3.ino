//Function that turns leds on and off randomly with 200 ms delay

int num;
int i;
int numAnt = 0;


void setup()
{
	for( i = 4; i < 12; i++)
	{
		pinMode(i, OUTPUT);
		digitalWrite(i, LOW);
	}
}

void loop()
{
	for( i = 0; i < 8; ++i)
	{
		num = random(4,12);
		if (num != numAnt)
		{
			digitalWrite(num,HIGH);
			delay(200);
  		}
		numAnt = num;
	}

	for( i = 0; i < 8; i++)
	{
		num = random(4,12);
		if (num != numAnt)
		{
			digitalWrite(num,LOW);
			delay(200);
  		}
   		numAnt = num;
	}
}
