#define BLUE 3
#define GREEN 5
#define RED 6

#define delayTime 10

void setup() {
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

int redValue;
int greenValue;
int blueValue;

void loop() {
  
  redValue = 255;
  greenValue = 0;
  blueValue = 0;


  for (int i = 0; i < 255; i++){
    redValue --;
    greenValue ++;

    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    delay(delayTime);
  }


  redValue = 0;
  greenValue = 255;
  blueValue = 0;


  for (int i = 0; i < 255; i++){
    greenValue --;
    blueValue ++;

    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }

  redValue = 0;
  greenValue = 0;
  blueValue = 255;


  for (int i = 0; i < 255; i++){
    blueValue --;
    redValue ++;

    analogWrite(BLUE, blueValue);
    analogWrite(RED, redValue);
    delay(delayTime);
  }
}
