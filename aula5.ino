#include <Servo.h>
const int servoPin = 6;
const int lightSensorPin = A0;
int lightValue = 0;

Servo s;
int position;

void setup()
{
  s.attach(servoPin)
  Serial.begin(9600)
  s.write(0)
}

void loop()
{
  lightValue = analogRead(lightSensorPin);
  if(lightValue<500){
    s.write(45);
    delay(500);
    s.write(0);
  }
}
