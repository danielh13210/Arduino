/**
 * I connected my Snap Rover(Snap Circuits Toy) to Arduino.
**/
int M1 = 2;
int M2 = 3;
int M3 = 4;
int M4 = 5;
int red = 6;
int yello1 = 7;
int yello2 = 8;
int green = 9;
int redState = 0;
int yello1State = 0;
int yello2State = 0;
int greenState = 0;
void setup() {
  pinMode (M1, OUTPUT);
  pinMode (M2, OUTPUT);
  pinMode (M3, OUTPUT);
  pinMode (M4, OUTPUT);
  pinMode (red, INPUT);
  pinMode (yello1, INPUT);
  pinMode (yello2, INPUT);
  pinMode (green, INPUT);
}

void loop() {
  redState = digitalRead(red);
  yello1State = digitalRead(yello1);
  yello2State = digitalRead(yello2);
  greenState = digitalRead(green);
  
  if (redState == HIGH && yello2State == HIGH) {
    digitalWrite (M1, HIGH);
    digitalWrite (M2, LOW);
    digitalWrite (M3, HIGH);
    digitalWrite (M4, LOW);
  } else if (yello1State == HIGH && greenState == HIGH) {
    digitalWrite (M1, LOW);
    digitalWrite (M2, HIGH);
    digitalWrite (M3, LOW);
    digitalWrite (M4, HIGH);
  } else if (yello1 == HIGH && yello2State == HIGH) {
    digitalWrite (M1, LOW);
    digitalWrite (M2, HIGH);
    digitalWrite (M3, HIGH);
    digitalWrite (M4, LOW);
  } else if (redState == HIGH && greenState == HIGH) {
    digitalWrite (M1, HIGH);
    digitalWrite (M2, LOW);
    digitalWrite (M3, LOW);
    digitalWrite (M4, HIGH);
  } else {
    pause();
  }
  delay(100);
}
void pause() {
  digitalWrite (M1, LOW);
  digitalWrite (M2, LOW);
  digitalWrite (M3, LOW);
  digitalWrite (M4, LOW);
}
