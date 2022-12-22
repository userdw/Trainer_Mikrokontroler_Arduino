#include <Wire.h>
#include <Arduino.h>
#include "EcadioIRremote.h"

#define RECV_PIN 2

IRrecv IR(RECV_PIN);

void setup(){
  Serial.begin(9600);
  IR.enableIRIn();
}

void loop(){
  if (IR.decode()){
    if (IR.isReleased()){
      Serial.print("Kode Tombol : ");
      Serial.println(IR.keycode, DEC);
      Serial.println("*************");      
    }
    IR.resume();
  }
}
