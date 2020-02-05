# LUCES 2

> ## ARDUINO PROJECT BASIC

In this folder review the next objetives

## OBJECTIVES

 * Understand the function Random
 * Understand the conditionals
 * Define the block structures.


## CIRCUIT

<p align="center"><img src="luces2.PNG" width="700"></p>

## OUTPUT

* Use the PIN 4 to PIN 11 as output.
* Use resistor of 220 ohms of 1/4 W in each LED(Light Emisor Diode)
* The circuit the circuit is powered by 5 volts. The Red wire is the positive and Black wire is Ground
* 5V for HIGH y 0V for LOW

### RANDOM

```
random(max)
random(min, max)
```

The random function returns an integer random number from a range of values specified between the min and max values. 

```
valor = random(100, 200); // assigns to the variable 'value' a random number between 100-200
```

In this code it turns on one led at a time and randomly with a 300 ms delay