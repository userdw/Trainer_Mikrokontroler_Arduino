#include <Servo.h>

Servo myservo; 

void setup() {
  myservo.attach(5);
  myservo.write(0);
  delay(1000);
}

void loop() {
  for(int pos = 0; pos <= 180; pos++){
    myservo.write(pos);
    delay(20);
  }
  for(int pos = 180; pos >= 0; pos--){
    myservo.write(pos);
    delay(20);
  }
}
