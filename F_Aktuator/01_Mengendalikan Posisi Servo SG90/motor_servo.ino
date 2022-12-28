#include <Servo.h>

Servo myservo; 

void setup() {
  myservo.attach(5);
}

void loop() {
  int sudut = 90;
  myservo.write(sudut); 
}
