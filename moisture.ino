#include<Servo.h>
Servo s;

void setup(){
  s.attach(10);
  Serial.begin(9600);
  //pinMode(10,OUTPUT);
}

void loop(){
  int sensorVal = analogRead(A0);
 
  int pos;
  if(sensorVal > 500){
     Serial.println(sensorVal);
    for(pos=0; pos<=180; pos++){
      s.write(pos);
      delay(15);
    }
    for(pos=180; pos>=0; pos--){
      s.write(pos);
      delay(15);
    }
  }
  delay(1000);
}
