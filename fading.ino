void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int i;
  for(i=0; i<=255; i++){
    analogWrite(9, i);
    delay(5);
  }
  for(i=255; i>=0; i--){
    analogWrite(9, i);
    delay(5);
  }
}
