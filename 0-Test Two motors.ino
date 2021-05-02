/*
 ELE8392 RObotics and Control
 Written by Salim EL Atache
This code will first turn both motors forward for 1 second then turn the motors backward for 1 second and repeat
 */

#define MOTOR1_FORWARD  23
#define MOTOR1_BACKWARD  25
#define MOTOR2_FORWARD  27
#define MOTOR2_BACKWARD  29
#define MOTOR1_ENABLE_PWM 2
#define MOTOR2_ENABLE_PWM 3

#define PWM_ON_VALUE    127  //The adrunio function analogueWrite writes a PWM signal with 255 representing 100% duty cycle, this number is between 0 to 255
#define MOTOR_DELAY      1000

void setup() {
  // put your setup code here, to run once:
 // initialize digital pin LED_BUILTIN as an output.
  pinMode(MOTOR1_FORWARD, OUTPUT);
  pinMode(MOTOR1_BACKWARD, OUTPUT);
  pinMode(MOTOR2_FORWARD, OUTPUT);
  pinMode(MOTOR2_BACKWARD, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //First Turn both motors forward for the set delay time 
  //Motor 1
   analogWrite(MOTOR1_ENABLE_PWM, PWM_ON_VALUE );
   digitalWrite(MOTOR1_FORWARD, HIGH); 
   digitalWrite(MOTOR1_BACKWARD, LOW); 
    //Motor 2
   analogWrite(MOTOR2_ENABLE_PWM, PWM_ON_VALUE );
   digitalWrite(MOTOR2_FORWARD, HIGH); 
   digitalWrite(MOTOR2_BACKWARD, LOW); 
   //Wait the required delay 
   delay(MOTOR_DELAY );       

   //Second Turn both motors backward for the set delay time 
  //Motor 1
   analogWrite(MOTOR1_ENABLE_PWM, PWM_ON_VALUE );
   digitalWrite(MOTOR1_FORWARD, LOW); 
   digitalWrite(MOTOR1_BACKWARD, HIGH); 
    //Motor 2
   analogWrite(MOTOR2_ENABLE_PWM, PWM_ON_VALUE );
   digitalWrite(MOTOR2_FORWARD, LOW); 
   digitalWrite(MOTOR2_BACKWARD, HIGH); 
   //Wait the required delay 
   delay(MOTOR_DELAY );       
}
