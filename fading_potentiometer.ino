void setup() {
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int inputVal = analogRead(A0);
  int mapVal = map(inputVal, 0, 1023, 0, 255);
  analogWrite(9, mapVal);
  Serial.println(inputVal);
  Serial.println(mapVal);
}
