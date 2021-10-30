int in = 0;
void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  in = analogRead(A0);
  float mv = (in/1024.0)*5000;
  float celcius = mv/10;
  float farenheit = (celcius*9)/5 + 32;
  Serial.print("Celcius: ");
  Serial.print(celcius);
  Serial.print(", Farenheit: ");
  Serial.println(farenheit);
  delay(2000);
}
