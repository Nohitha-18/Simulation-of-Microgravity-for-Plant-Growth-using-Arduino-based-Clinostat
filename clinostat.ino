
#include <Servo.h>

Servo myservo; // create servo object to control a servo

int pot;    // variable for potentiometer analog reading, 0-123
int speed;  // variable for servo speed, 0-180.
            // servo is STOPPED at speed = 90
            // full speed in either direction at 0 or 180. 
            // this is NOT the servo's angular position

void setup() {
  // setup code that only runs once
  myservo.attach(8); // use pin 8 to control the servo
}

void loop() {
  // code that loops repeatedly
  pot = analogRead(A0);                // read analog voltage from potentiometer
  speed = map(pot, 0, 1023, 0, 180);   // convert analog reading 0-1023 to speed 0-180
  myservo.write(speed);                // send control signal to servo
}
