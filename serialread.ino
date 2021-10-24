int in = 0;
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    in = Serial.read();
    if(in == 'A'){
      digitalWrite(13, HIGH); 
      delay(1000); 
    }
    else if(in == 'B'){
      digitalWrite(13, LOW); 
      delay(1000);
    }
  }
}
