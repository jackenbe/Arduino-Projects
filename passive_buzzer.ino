//www.elegoo.com
//2016.12.08

#include "pitches.h"
#define buttonApin 4
 
// notes in the melody:
int melody[] = {
  NOTE_C2, NOTE_D2, NOTE_E2, NOTE_F2, NOTE_G2, NOTE_A2, NOTE_B2, NOTE_C3};
int duration = 500;  // 500 miliseconds
 
void setup() {
  pinMode(buttonApin, INPUT_PULLUP);
  digitalWrite(buttonApin, HIGH);
}

int on = false;

void loop() {
  if (digitalRead(buttonApin) == LOW){
    for (int thisNote = 0; thisNote < 8; thisNote++) {
      // pin8 output the voice, every scale is 0.5 sencond
      tone(8, melody[thisNote], duration);
      
      // Output the voice after several minutes
      delay(1000);
    }
  }
  
}
