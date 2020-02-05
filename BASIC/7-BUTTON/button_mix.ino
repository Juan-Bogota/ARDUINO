int estado = 0;
int estadoAnterior = 0;
int num = 1;
int numAnt = 0;
int tiempo = 0;
int salida = 0;
int i = 0;
const int button = 2;

void setup() {
	for( i = 22; i < 30; i++)
	{
		pinMode(i, OUTPUT);
		digitalWrite(i, LOW);
	}
	attachInterrupt(digitalPinToInterrupt(2), next, RISING);
}


void loop() {

	count(num);
}

void next()
{
	num += 1;
	if(num <= 4)
		num = 1;
	delay(200);
}

void count(int num)
{
	switch(num)
  	{
		case 1:
      		     case1();
      		     break;
     		case 2:
      		     case2();
      		     break;
     		case 3:
      		     case3();
      		     break;
     		case 4:
      		     case4();
	}
}



void case1()
{

	for( i = 22; i < 30; i++)
	{
		digitalWrite(i, HIGH); // turn On LED
		delay(tiempo); // Wait for 200 millisecond(s)
		digitalWrite(i, LOW);  // turn Off LED
		delay(tiempo); // Wait for 200 millisecond(s)
	}
	i = 28;
	while( i > 22)
	{
		digitalWrite(i, HIGH);  // turn On LED
		delay(tiempo); // Wait for 200 millisecond(s)
		digitalWrite(i, LOW);  // turn Off LED
		delay(tiempo); // Wait for 200 millisecond(s)
		i--;
	}
	if(tiempo > 0)
		tiempo -= 50; // decrease the time in 50 miliseconds
	else
		tiempo = 300;
}

void case2()
{
	num = random(22, 30); // ramdom() is a function that return a random value
  	if (num != numAnt)  // compare two values and prevents the same LED lighting 2 or more times in a row
  	{
		digitalWrite(num,HIGH);
    		delay(300);
    		digitalWrite(num,LOW);
    		delay(300);
  	}
  	numAnt = num; // save the previous number
}

void case3()
{
	for( i = 0; i < 8; ++i)
  	{
		num = random(22,30);
    		if (num != numAnt)
    		{
			digitalWrite(num,HIGH);
      			delay(200);
      		}
    		numAnt = num;
  	}

  	for( i = 0; i < 8; i++)
  	{
		num = random(22,30);
    		if (num != numAnt)
    		{
			digitalWrite(num,LOW);
      			delay(200);
		}
      		numAnt = num;
  	}
}

void case4()
{
	for( i = 22; i < 30; ++i)
  	{
		num = random(40,500);  //RANDOM TIME BETWEEN 40 ms TO 500 ms
    		digitalWrite(i,HIGH);
    		delay(num);    //RANDOM DELAY
    		digitalWrite(i,LOW);
    		delay(num);    //RANDOM DELAY
  	}
}
