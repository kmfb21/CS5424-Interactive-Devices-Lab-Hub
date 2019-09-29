# Data Logger (and using cool sensors!)

*A lab report by Bo Fang.*

## In The Report

Include your responses to the bold questions on your own fork of [this lab report template](https://github.com/FAR-Lab/IDD-Fa18-Lab2). Include snippets of code that explain what you did. Deliverables are due next Tuesday. Post your lab reports as README.md pages on your GitHub, and post a link to that on your main class hub page.

For this lab, we will be experimenting with a variety of sensors, sending the data to the Arduino serial monitor, writing data to the EEPROM of the Arduino, and then playing the data back.

## Part A.  Writing to the Serial Monitor
 
**a. Based on the readings from the serial monitor, what is the range of the analog values being read?**

From 0 to 1023.

**b. How many bits of resolution does the analog to digital converter (ADC) on the Arduino have?**

0 to 1023 is 1024 numbers, which is 10 bits.

## Part B. RGB LED

**How might you use this with only the parts in your kit? Show us your solution.**

We connect all three pings with resistors and 3 pings on the board.
![Part-B.png](Part-B.png)

## Part C. Voltage Varying Sensors 
 
### 1. FSR, Flex Sensor, Photo cell, Softpot

**a. What voltage values do you see from your force sensor?**

I saw analog value from 0 - 1013

**b. What kind of relationship does the voltage have as a function of the force applied? (e.g., linear?)**

As the force applied, the voltage goes higher, it is more like a linear increasing.

**c. Can you change the LED fading code values so that you get the full range of output voltages from the LED when using your FSR?**

Old version LED fading:

```
void loop() {
  analogWrite(11, i--);
  delay(5);
  if (i <= 0) i = 255;
}
```
Since we know the analog range is 0-1013 (approx 1000)
and analogWrite range is 0-255 (approx 250)
we map 0-1000 to 0-250 by divide by 4
New version using analogRead(A0):

```
void loop() {
  analogWrite(11, analogRead(A0) / 4);
}
```

**d. What resistance do you need to have in series to get a reasonable range of voltages from each sensor?**

For the FSR it should be 27k, I used 3 10k-Ohm resistors to make it has 30k Ohm

**e. What kind of relationship does the resistance have as a function of stimulus? (e.g., linear?)**

Linear

### 2. Accelerometer
 
**a. Include your accelerometer read-out code in your write-up.**


## Optional. Graphic Display

**Take a picture of your screen working insert it here!**

## Part D. Logging values to the EEPROM and reading them back
 
### 1. Reading and writing values to the Arduino EEPROM

**a. Does it matter what actions are assigned to which state? Why?**

**b. Why is the code here all in the setup() functions and not in the loop() functions?**

**c. How many byte-sized data samples can you store on the Atmega328?**

**d. How would you get analog data from the Arduino analog pins to be byte-sized? How about analog data from the I2C devices?**

**e. Alternately, how would we store the data if it were bigger than a byte? (hint: take a look at the [EEPROMPut](https://www.arduino.cc/en/Reference/EEPROMPut) example)**

**Upload your modified code that takes in analog values from your sensors and prints them back out to the Arduino Serial Monitor.**

### 2. Design your logger
 
**a. Insert here a copy of your final state diagram.**

### 3. Create your data logger!
 
**a. Record and upload a short demo video of your logger in action.**
