int estado = 0;
int estadoAnterior = 0;
int num = 0;
int numAnt = 0;
int tiempo = 0;
int salida = 0;
int i = 0;
const int button = 2;

void setup() {
for( i = 4; i < 12; i++)
	{
		pinMode(i, OUTPUT);
		digitalWrite(i, LOW);
	}
  pinMode(button,INPUT);
}


void loop() {

estado = digitalRead(button);

if(estado == HIGH && estadoAnterior == LOW)
  {
    num += 1;
    if(num > 4)
      num = 1;
    delay(20);
  }
estadoAnterior = estado;

count(num);
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
  if(tiempo > 0)
    tiempo -= 50; // decrease the time in 50 miliseconds
  else
    tiempo = 300;
}

void case2()
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

void case3()
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

void case4()
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
