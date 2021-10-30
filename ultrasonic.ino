const int trig = 2;
const int echo = 4;
void setup(){
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  int duration = pulseIn(echo, HIGH);
  float inches = duration/74/2;
  float cm = duration/29/2;
  Serial.println(cm);
  Serial.println(inches);
  delay(2000);
}
