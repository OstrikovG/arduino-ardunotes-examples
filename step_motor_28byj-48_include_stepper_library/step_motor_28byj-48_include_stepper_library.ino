#include <Stepper.h>

const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;

const int stepsPerRevolution = 320;
Stepper myStepper(stepsPerRevolution, IN1, IN2, IN3, IN4);
void setup() {
  myStepper.setSpeed(50);
}

void loop() {
  myStepper.step(stepsPerRevolution);
  delay(500);
}
