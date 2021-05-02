/*
 ELE8392 RObotics and Control
 Written by Ala' Qadi
 Lab 3 Part 2.1
This code will first turn one motor forward for 1 second then turn the motors backward for 1 second and repeat
 */

#define MOTOR1_FORWARD  23
#define MOTOR1_BACKWARD  25
#define MOTOR1_ENABLE_PWM 2


#define PWM_ON_VALUE    127  //The adrunio function analogueWrite writes a PWM signal with 255 representing 100% duty cycle, this number is between 0 to 255
#define MOTOR_DELAY      1000

void setup() {
  // put your setup code here, to run once:
 // initialize digital pin LED_BUILTIN as an output.
  pinMode(MOTOR1_FORWARD, OUTPUT);
  pinMode(MOTOR1_BACKWARD, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  //First Turn motor forward for the set delay time 
  //Motor 1
   analogWrite(MOTOR1_ENABLE_PWM, PWM_ON_VALUE );
   digitalWrite(MOTOR1_FORWARD, HIGH); 
   digitalWrite(MOTOR1_BACKWARD, LOW); 
  //Wait the for the length of the interval we want the motor to go forward
   delay(MOTOR_DELAY );   

   //Second Turn motor backward for the set delay time 
  //Motor 1
   analogWrite(MOTOR1_ENABLE_PWM, PWM_ON_VALUE );
   digitalWrite(MOTOR1_FORWARD, LOW); 
   digitalWrite(MOTOR1_BACKWARD, HIGH); 
    //Wait the for the length of the interval we want the motor to go backward
   delay(MOTOR_DELAY );       
}
