#include <Wire.h>
#include <Arduino.h>
#include "EcadioIRremote.h"

#define RECV_PIN 2
#define LEDMerah 7
#define LEDKuning 6
#define LEDHijau 5

IRrecv IR(RECV_PIN);

void setup(){
  Serial.begin(9600);
  IR.enableIRIn();
  pinMode(LEDMerah, OUTPUT);
  pinMode(LEDKuning, OUTPUT);
  pinMode(LEDHijau, OUTPUT);
  digitalWrite(LEDMerah, LOW);
  digitalWrite(LEDKuning, LOW);
  digitalWrite(LEDHijau, LOW);
}

void loop(){
  if (IR.decode()){
    if (IR.isReleased()){
      Serial.print("Kode Tombol : ");
      Serial.println(IR.keycode, DEC);
      Serial.println("*************");  
      if(IR.keycode == 69){
        digitalWrite(LEDMerah, HIGH);    
      }
      else if(IR.keycode == 70){
        digitalWrite(LEDKuning, HIGH);
      }
      else if(IR.keycode == 71){
        digitalWrite(LEDHijau, HIGH);
      }
      else if(IR.keycode == 68){
        digitalWrite(LEDMerah, LOW);
      }
      else if(IR.keycode == 64){
        digitalWrite(LEDKuning, LOW);
      }
      else if(IR.keycode == 67){
        digitalWrite(LEDHijau, LOW);
      }
    }
    IR.resume();
  }
}
