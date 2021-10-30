int in = 0;
int threshold = 100;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  in = analogRead(A0);
  Serial.println(in);
  if(in < threshold){
    digitalWrite(13, HIGH);
    delay(1000);  
  }
  else{
    digitalWrite(13, LOW);
    delay(1000);
  }
}
