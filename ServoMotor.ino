#include "ServoMotor.h"

#define SERVO_PIN 4

Servo servo;

void setup()
{
    servo.attach(SERVO_PIN);
}

void loop()
{
    servo.write(0);
    delay(1000);
    servo.write(180);
    delay(1000);
}