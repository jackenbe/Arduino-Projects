#define ledPin 13


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
}

void loop() {
  int digitalVal = digitalRead(2);
  if (digitalVal == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
