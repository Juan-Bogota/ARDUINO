# BUTTON

> ## ARDUINO PROJECT BASIC

In this folder review the next objetives

## OBJECTIVES

 * Understand Input / Output
 * Function digitalRead()
 * How to connect an input circuit


## CIRCUIT

<p align="center"><img src="button.PNG" width="700"></p>

## OUTPUT

* Use the PIN 4 as output and PIN 8 as Input.
* Use resistor of 220 ohms of 1/4 W in each LED(Light Emisor Diode)
* USe resisitor of 10 Kohms of 1/4 Watt in the connection of Button(this resistor is connected to Ground.
* The circuit the circuit is powered by 5 volts. The Red wire is the positive and Black wire is Ground
* 5V for HIGH y 0V for LOW

### INPUT

```
pinMode(pin, Mode)
```

This instruction is used in the configuration part of the setup ( ) and serves to configure
the working mode of a PIN can be ```INPUT or OUTPUT.```
```
pinMode(pin, OUTPUT); // sets 'pin' as output
pinMode(pin, INPUT); // sets 'pin' as input
```


## Button 1

### READING THE BUTTONS
Button 1 is a program that makes the LED light up when the button is pressed and
goes off when we let go. To do this we will ask Arduino to set up digital pin 4 (D10)
as output to operate the LED, and digital pin 8 as input to read the button.

## Button 2

### BUTTON IS A SWITCH

This program want the button to act as a switch, which when
press it once it turns on, and next time it turns off.

## Button 3

This program the button to act a witch but it gets better when we press the button and prevents anti-rebound in the button

<p align="center"><img src="switch_antirebote.png" width="700"></p>
