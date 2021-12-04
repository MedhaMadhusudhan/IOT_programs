const int calibrationTime = 30;
int lowIn;
const int pause = 5000;
boolean lockLow = true;
boolean lowTime;
int pirpin = 3;
int ledpin = 13;
void setup(){
    Serial.begin(9600);
    pinMode(ledpin, OUTPUT);
    pinMode(pirpin, INPUT);

    digitalWrite(pirpin, LOW);
    Serial.println("calibrating sensor");
    for(int i=0; i<calibrationTime; i++){
      Serial.println(".");
      delay(1000);
    }
    Serial.println("sensor is now active");
    delay(50);
}

void loop(){
  if(digitalRead(pirpin) == HIGH){
    digitalWrite(ledpin, HIGH);
    if(lockLow){
      lockLow = false;
      Serial.print("motion detected at:");
      Serial.print(millis()/1000);
      Serial.println("seconds");
      delay(50);
    }
    lowTime = true;
  }
  else{
    digitalWrite(ledpin, LOW);
    if(lowTime){
      lowIn = millis();
      lowTime = false;
    }
    if(!lockLow && millis()-lowIn > 5000){
      lockLow = true;
      Serial.print("motion ended at: ");
      Serial.print((millis() - 5000)/1000);
      Serial.println("seconds");
      delay(50);
    }
  }
}
