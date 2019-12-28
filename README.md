# Paper Puppets

*A lab report by Bo Fang*

## In this Report

To submit your lab, clone [this repository](https://github.com/FAR-Lab/IDD-Fa18-Lab4). You'll need to describe your design, include a video of your paper display in operation, and upload any code you wrote to make it move.

## Part A. Actuating DC motors

[**Link to a video of your virbation motor**](https://youtu.be/c4qnFVGGE-g)

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?**

Red wire connect to power, brown wire connect to ground and yellow one connect to signal.

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?**

Pin 9

```
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}
```

**b. What aspects of the Servo code control angle or speed?**

```
void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
```
The range of "pos" controls the angle, such as from 0-180.
Step of "pos" and delay in loop controls the speed.

## Part C. Integrating input and output

[**Include a photo/movie of your raw circuit in action.**](https://youtu.be/sxKhsv7RtPM)

## Part D. Paper puppet

**a. Make a video of your proto puppet.**

[Big sweep from 25 to 115 then small sweep from 45 to 95](https://youtu.be/nF0K6g4acR4)

## Part E. Make it your own

**a. Make a video of your final design.**
 
