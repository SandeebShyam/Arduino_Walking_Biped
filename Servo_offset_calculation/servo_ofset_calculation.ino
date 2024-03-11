// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin1 = 11;
int servoPin2 = 10;
int servoPin3 = 9;
int servoPin4 = 6;
int servoPin5 = 5;
int servoPin6 = 3;
 
// Create a servo object 
Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;
Servo Servo6;

void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin1);
   Servo2.attach(servoPin2);
   Servo3.attach(servoPin3);
   Servo4.attach(servoPin4);
   Servo5.attach(servoPin5);
   Servo6.attach(servoPin6);
   
}
void loop(){ 
   // Make servo go to 90 degrees 
   Servo1.write(90);
    delay(2000);
   Servo2.write(90);
    delay(2000);
   Servo3.write(90);
    delay(2000);
   Servo4.write(90);
    delay(2000);
   Servo5.write(90);
    delay(2000);
   Servo6.write(90);
   delay(2000); 
   
    
}
