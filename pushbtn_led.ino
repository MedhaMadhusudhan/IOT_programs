void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int in = digitalRead(2);
  int count = 0;
  if(in == LOW){
    digitalWrite(13, LOW);
    delay(1000);
  }
  else{
    digitalWrite(13, HIGH);
    delay(1000);
    count++; 
    Serial.println(count); 
  }
}
