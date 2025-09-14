#define ledPin 7
#define buttonApin 9
#define buttonBpin 8

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonApin) == LOW){
    digitalWrite(ledPin, HIGH);
  }

  if (digitalRead(buttonBpin) == LOW){
    digitalWrite(ledPin, LOW);
  }

}
