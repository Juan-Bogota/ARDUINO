// This code  turn on and turn off a LED with a Button

int estado = 0;
const int button = 8;
void setup() {
     // put your setup code here, to run once:
     pinMode(button, INPUT);
     pinMode(4, OUTPUT);

}

//EXAMPLE 1

void loop() {

     estado = digitalRead(button);
     if(estado == HIGH)
     	       	digitalWrite(4, HIGH);
     else
		digitalWrite(4, LOW);
}
