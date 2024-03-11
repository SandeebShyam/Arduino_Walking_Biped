#include <Servo.h>
#include "constants.h"

Servo hipL;
Servo hipR;
Servo kneeL;
Servo kneeR;
Servo ankleL;
Servo ankleR;

void setup() {
  //setup code
  hipL.attach(11);
  hipR.attach(10);
  kneeL.attach(9);
  kneeR.attach(6);
  ankleL.attach(5);
  ankleR.attach(3);

  hipL.write(hipLOffset);
  kneeL.write(kneeLOffset);
  ankleL.write(ankleLOffset);
  
  hipR.write(hipROffset);
  kneeR.write(kneeROffset);
  ankleR.write(ankleROffset);

  delay(5000);
}

void loop() {
  //main code
}
