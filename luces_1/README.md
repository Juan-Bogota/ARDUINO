# LUCES 1

> ## ARDUINO PROJECT BASIC

In this folder review the next objetives

## OBJECTIVES

 * Set some basic ideas about programming (C++).
 * Understand the structure of an Arduino program (Sketch)
 * Define the block structures.
 * The first instructions

## CIRCUIT

<p align="center"><img src="luces_1/luces_1.png" width="700"></p>

## OUTPUT  

* Use the PIN 4 to PIN 11 as output.
* Use resistor of 220 ohms of 1/4 W in each LED(Light Emisor Diode)
* The circuit the circuit is powered by 5 volts. The Red wire is the positive and Black wire is Ground
* 5V for HIGH y 0V for LOW

To indicate to the system that we want to use pin 13 as a digital output we use the instruction:
```
pinMode( 13, OUTPUT ) ;
```
The first parameter indicates the pin to use and "OUTPUT" is to use it as an output, and the value "INPUT" to indicate that we are going to read from this pin.
These definitions will be made only once at the beginning, in the setup() function. Ours will remain, with a single instruction that declares that we are going to use pin 13 as a digital output:
```
void setup() { // initialize the digital pin as an output
  pinMode( 13, OUTPUT) ;
}
```
To turn on the LED we will use the instruction:
```
digitalWrite( 13 , HIGH) ;
````
And another similar instruction that commands you to turn it off:
```
digitalWrite( 13 , LOW) ;
```

To make this delay of, say, a second, we'll use.
```
delay(1000) ;      //  delay(n) “freezer” Arduino n miliseconds
```
