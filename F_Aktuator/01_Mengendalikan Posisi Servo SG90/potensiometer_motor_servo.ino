#include <Servo.h>

Servo myservo; 

#define pinPotensiometer A0

void setup() {
  myservo.attach(5);
}

void loop() {
  int bacaAnalog = analogRead(pinPotensiometer)
  int sudut = map(bacaAnalog, 0, 1023, 0, 180);
  myservo.write(sudut);
  delay(10);
}
