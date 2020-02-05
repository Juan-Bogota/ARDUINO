int num;
int i;
int numAnt = 0;

void setup()
{
	for( i = 4; i < 12; i++)
	{
		pinMode(i, OUTPUT); // Declare Pin as OUTPUT
		digitalWrite(i, LOW); //Start the LED turn OFf
	}
}

void loop()
{
	num = random(4, 12); // ramdom() is a function that return a random value
	if (num != numAnt)  // compare two values and prevents the same LED lighting 2 or more times in a row
	{
		digitalWrite(num,HIGH);
		delay(300);
		digitalWrite(num,LOW);
		delay(300);
	}
	numAnt = num; // save the previous number
}
