//Function that turns the leds on and off with a random time

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
	for( i = 4; i < 12; ++i)
	{
		num = random(40,500);  //RANDOM TIME BETWEEN 40 ms TO 500 ms
		digitalWrite(i,HIGH);
		delay(num);    //RANDOM DELAY
		digitalWrite(i,LOW);
		delay(num);    //RANDOM DELAY
	}
}
