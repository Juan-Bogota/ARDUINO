int estado = 0; // validate the status of the Button
int salida = 0; // its a variable that allow the button	behaves like a switch.
int anteriorestado = 0; // validate the previous status
const int button = 8;


void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);  // PIN 8 is the input of the button
  pinMode(4, OUTPUT);

}


// EXAMPLE 2

void loop() {

        estado = digitalRead(button);

        if(estado == HIGH && estadoAnterior == LOW)
     	{
		salida = 1 - salida;
		delay(20);    // delay anti-bouncing
       	}
	estadoAnterior = estado;
	if(salida == 1)
  		digitalWrite(4, HIGH);
	else
		digitalWrite(4, LOW);
}
