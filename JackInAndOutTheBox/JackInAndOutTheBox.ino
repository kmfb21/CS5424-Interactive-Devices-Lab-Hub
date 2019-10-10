#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

int sp = 0;
int ep = 90;

void loop() {
  if(digitalRead(3) == HIGH) {
    jackin();
  } else {
    jackout();
  }
}

void jackout() {
  myservo.write(ep);
}

void jackin() {
  myservo.write(sp);
}
