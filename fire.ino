int sensorPin = A0; 
int sensorValue = 0; 
int led = 13; 

void setup() {

pinMode(led, OUTPUT);
Serial.begin(9600);
}
void loop()
{

sensorValue = analogRead(sensorPin);
Serial.println(sensorValue);
if (sensorValue < 100)
{
Serial.println("Fire Detected");
Serial.println("LED on");
digitalWrite(led,HIGH);
delay(1000);
}
digitalWrite(led,LOW);
delay(sensorValue);
}
