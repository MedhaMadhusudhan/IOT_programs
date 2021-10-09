int rpin = 7;
int ypin = 11;
int gpin = 13;

void setup() {
  pinMode(rpin, OUTPUT);
  pinMode(ypin, OUTPUT);
  pinMode(gpin, OUTPUT);
}

void loop() {
  digitalWrite(rpin, HIGH);
  delay(2000);
  digitalWrite(rpin, LOW);

  digitalWrite(ypin, HIGH);
  delay(2000);
  digitalWrite(ypin, LOW);

  digitalWrite(gpin, HIGH);
  delay(2000);
  digitalWrite(gpin, LOW);
}
