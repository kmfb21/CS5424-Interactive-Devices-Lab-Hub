# Digital Timer
 
Include your responses to the bold questions below. Include snippets of code that explain what you did. Deliverables are due next Tuesday. Post your lab reports as README.md pages on your GitHub, and post a link to that on your main class hub page.

## Part A. Solder your LCD panel

![Part-A-1.png](Part-A-1.png)
![Part-A.png](Part-A.png)

## Part B. Writing to the LCD
 
**a. What voltage level do you need to power your display?**

5V

**b. What voltage level do you need to power the display backlight?**

3V
   
**c. What was one mistake you made when wiring up the display? How did you fix it?**

I forgot to connect to the grand. Then found it and fixed.

**d. What line of code do you need to change to make it flash your name instead of "Hello World"?**

Replace "Hello World" here:

```
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  // lcd.print("hello, world!");
  lcd.print("hello, Bo!"); 
}
```
 
**e. Include a copy of your Lowly Multimeter code in your lab write-up.**

```
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Lab2 - Bo");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);

  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  lcd.setCursor(8, 1);
  // print the number of seconds since reset:
  lcd.print(sensorValue);
}
```

## Part C. Using a time-based digital sensor

**Upload a video of your working rotary encoder here.**
[link to your video here](https://youtu.be/SEM1Jiqs35E)

## Part D. Make your Arduino sing!

**a. How would you change the code to make the song play twice as fast?**

Make noteDuration only be half:

```
// int noteDuration = 1000 / noteDurations[thisNote];
int noteDuration = 500 / noteDurations[thisNote];
```

**b. What song is playing?**
Starwars

## Part E. Make your own timer

**a. Make a short video showing how your timer works, and what happens when time is up!**

**b. Post a link to the completed lab report your class hub GitHub repo.**
