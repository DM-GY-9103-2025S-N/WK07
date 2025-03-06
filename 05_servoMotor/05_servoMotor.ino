#include <Servo.h>

int servoAngle;
int servoVelocity;
long long lastChange;

Servo mServo;

void setup() {
  Serial.begin(57600);
  mServo.attach(3);

  servoAngle = 0;
  servoVelocity = 5;

  lastChange = 0;
}

void loop() {
  if (millis() - lastChange > 100) {
    servoAngle += servoVelocity;

    if (servoAngle > 180 || servoAngle < 1) {
      servoVelocity = -1 * servoVelocity;
    }

    lastChange = millis();
  }

  // write the angle to the motor
  mServo.write(servoAngle);
}
