
int sensorPin = 0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int pot = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // read the value from the sensor:
  pot = analogRead(sensorPin);
  // turn the ledPin on
  if (pot >= 0 && pot < 350)
  {
  digitalWrite(ledPin, HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  // stop the program for <sensorValue> milliseconds:
  delay(300);
  }
  else if (pot >= 350 && pot < 750)  
  // turn the ledPin off:
  {
      digitalWrite(ledPin, LOW);
      digitalWrite(12,HIGH);
      digitalWrite(11,LOW);
      delay(300);
  }
  else
    {
    digitalWrite(ledPin, LOW);
    digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
    // stop the program for for <sensorValue> milliseconds:
  delay(300);
  }
 }
