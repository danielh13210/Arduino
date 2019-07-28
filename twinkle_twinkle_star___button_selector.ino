int speaker = 5;
int C = 262;
int D = 294;
int E = 330;
int F = 349;
int G = 392;
int A = 440;
int Bbase = 247;
int Gbase = 196;
int i;
int delay1 = 500;
int delay2 = 1000;
int delay2a = 250;
int BUT1 = 6;
int BUT2 = 7;
int BUT1STATE, BUT2STATE;
void setup() {
  pinMode(speaker, OUTPUT);
  Serial.begin(9600);
  pinMode(BUT1, INPUT);
  pinMode(BUT2, INPUT);
}
void paragraph1() {
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, G);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, G);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, A);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, A);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, G);
  digitalWrite(speaker, HIGH);
  delay(delay2);
  tone(speaker, F);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, F);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, E);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, E);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, D);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, D);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay2);
}
void paragraph2() {
  for (i = 0; i < 2; i++) {
    tone(speaker, G);
    digitalWrite(speaker, HIGH);
    delay(delay1);
    tone(speaker, G);
    digitalWrite(speaker, HIGH);
    delay(delay1);
    tone(speaker, F);
    digitalWrite(speaker, HIGH);
    delay(delay1);
    tone(speaker, F);
    digitalWrite(speaker, HIGH);
    delay(delay1);
    tone(speaker, E);
    digitalWrite(speaker, HIGH);
    delay(delay1);
    tone(speaker, E);
    digitalWrite(speaker, HIGH);
    delay(delay1);
    tone(speaker, D);
    digitalWrite(speaker, HIGH);
    delay(delay2);
  }
}
void paragraph1a() {
  tone(speaker, Gbase);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay2a);
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay2a);
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, E);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, G);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, E);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay1);
}
void paragraph2a() {
  tone(speaker, D);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, Bbase);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, Gbase);
  digitalWrite(speaker, HIGH);
  delay(delay2);
  tone(speaker, E);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, Gbase);
  digitalWrite(speaker, HIGH);
  delay(delay2);
}
void paragraph3a() {
  tone(speaker, D);
  digitalWrite(speaker, HIGH);
  delay(delay2);
  tone(speaker, Gbase);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, Gbase);
  digitalWrite(speaker, HIGH);
  delay(delay1);
  tone(speaker, C);
  digitalWrite(speaker, HIGH);
  delay(delay2);
}
void twinkle() {
  paragraph1();
  paragraph2();
  paragraph1();
  delay(1);
  noTone(speaker);
  delay(delay2);
}
void Wheels_On_The_Bus() {
  paragraph1a();
  paragraph2a();
  paragraph1a();
  paragraph3a();
  delay(1);
  noTone(speaker);
  delay(delay2);
}
void loop() {
  BUT1STATE = digitalRead(BUT1);
  BUT2STATE = digitalRead(BUT2);
  if (BUT1STATE == HIGH) {
    twinkle();
  }
  else {
    noTone(speaker);
  }
  if (BUT2STATE == HIGH) {
    Wheels_On_The_Bus();
  }
  else {
    noTone(speaker);
  }
}
