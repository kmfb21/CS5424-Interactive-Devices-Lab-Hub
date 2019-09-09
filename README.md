# IDD-Fa19-Lab1: Blink!

**A lab report by Bo Fang**

## Part A. Set Up a Breadboard

[insert a photo of your breadboard setup here]


## Part B. Manually Blink a LED

**a. What color stripes are on a 100 Ohm resistor?**

Brown (1), Black (0), Black (0), which represents 100 Ohm
 
**b. What do you have to do to light your LED?**

Add LED and resistor to the circuit like photo below:
[inserting photo...]
When we can simply light it up by pressing the switch.

## Part C. Blink a LED using Arduino

### 1. Blink the on-board LED

Blink example code:

```
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
```

**a. What line(s) of code do you need to change to make the LED blink (like, at all)?**

This makes LED on:

```
digitalWrite(LED_BUILTIN, HIGH);
```

And this makes LED off:

```
digitalWrite(LED_BUILTIN, LOW);
```

Which are put together and make the LED blink.

**b. What line(s) of code do you need to change to change the rate of blinking?**

We need to change both delay() calls after it turns LED on and off

```
ON
delay(1000);
OFF
delay(1000);
```

**c. What circuit element would you want to add to protect the board and external LED?**

We need another resistor to protect our external LED.
 
**d. At what delay can you no longer *perceive* the LED blinking? How can you prove to yourself that it is, in fact, still blinking?**

When delay(15) or less, I can barely see it blinking. To prove, we can use a high frequence camera or test voltage between the LED and ground.

**e. Modify the code to make your LED blink your way. Save your new blink code to your lab 1 repository, with a link on the README.md.**

[Adding link]

### 2. Blink your LED

**Make a video of your LED blinking, and add it to your lab submission.**

[Link to code]

[link to your video here; feel free to upload to youtube and just paste in a link here]


## Part D. Manually fade an LED

**a. Are you able to get the LED to glow the whole turning range of the potentiometer? Why or why not?**

No. Because there is only a small range of resistance that the potentiometer can provide. If it can provide resistance large enough, we can make the LED almost off. If it can provide 0 resistance, we can make the LED bright enough.

## Part E. Fade an LED using Arduino

**a. What do you have to modify to make the code control the circuit you've built on your breadboard?**

Change the line to pin 5V to pin 11.
And then let the code output to pin 11:

```
int i = 0;
// the loop function runs over and over again forever
void loop() {
  analogWrite(11, i--);
  delay(5);
  if (i <= 0) i = 255;
}
```
[link to code]

**b. What is analogWrite()? How is that different than digitalWrite()?**

**analogWrite** allows us to set an exact value of the out put led brightness instead of choosing from HIGH and LOW. digitalWrite can only choose HIGH and LOW to turn LED on and off.

## Part F. FRANKENLIGHT!!!

### 1. Take apart your electronic device, and draw a schematic of what is inside. 

**a. Is there computation in your device? Where is it? What do you think is happening inside the "computer?"**

**b. Are there sensors on your device? How do they work? How is the sensed information conveyed to other portions of the device?**

**c. How is the device powered? Is there any transformation or regulation of the power? How is that done? What voltages are used throughout the system?**

**d. Is information stored in your device? Where? How?**

### 2. Using your schematic, figure out where a good point would be to hijack your device and implant an LED.

**Describe what you did here.**

### 3. Build your light!

**Make a video showing off your Frankenlight.**

**Include any schematics or photos in your lab write-up.**
