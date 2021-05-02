/*
  ELE8392 RObotics and Control
  Written by Salim El Atache
  lab5 part 1
  This code will follow a pattern given in the first part of lab 5.

*/
// defining the pins

#define MOTOR1_FORWARD  23
#define MOTOR1_BACKWARD  25
#define MOTOR2_FORWARD  27
#define MOTOR2_BACKWARD  29
#define MOTOR3_FORWARD  32
#define MOTOR3_BACKWARD  34
#define MOTOR4_FORWARD  36
#define MOTOR4_BACKWARD  38
#define MOTOR1_ENABLE_PWM 2
#define MOTOR2_ENABLE_PWM 3
#define MOTOR3_ENABLE_PWM 4
#define MOTOR4_ENABLE_PWM 5




void setup() {

  // put your setup code here, to run once:
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(MOTOR1_FORWARD, OUTPUT);
  pinMode(MOTOR1_BACKWARD, OUTPUT);
  pinMode(MOTOR2_FORWARD, OUTPUT);
  pinMode(MOTOR2_BACKWARD, OUTPUT);
  pinMode(MOTOR3_FORWARD, OUTPUT);
  pinMode(MOTOR3_BACKWARD, OUTPUT);
  pinMode(MOTOR4_FORWARD, OUTPUT);
  pinMode(MOTOR4_BACKWARD, OUTPUT);

  //the patern for lab 5 part 1
  // calling the functions
  //first variable will be the time and second variable will be the pwm
 
  Forward(1750,  210);
  delay (300);
  
  Right (660, 200);
  delay (300);
  
  Forward (1200, 210);
  delay (300);
  
  Right (680, 200);
  delay (300);
  
  Forward (1200, 200);
  delay(300);
  
  Backward(1200, 200);
  delay(300);


}


void loop() {


  //nothing will be here since we don't need a loop for this lab


}

//forward function

void Forward(int time, int pwm_value) {

  //Motor 1
  analogWrite(MOTOR1_ENABLE_PWM, pwm_value );
  digitalWrite(MOTOR1_FORWARD, HIGH);
  digitalWrite(MOTOR1_BACKWARD, LOW);
  //Motor 2
  analogWrite(MOTOR2_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR2_FORWARD, HIGH);
  digitalWrite(MOTOR2_BACKWARD, LOW);
  //Motor 3
  analogWrite(MOTOR3_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR3_FORWARD, HIGH);
  digitalWrite(MOTOR3_BACKWARD, LOW);
  //Motor 4
  analogWrite(MOTOR4_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR4_FORWARD, HIGH);
  digitalWrite(MOTOR4_BACKWARD, LOW);

  //run the motors for a specific time
  delay (time);

  // Stop the motors
  //Motor 1
  analogWrite(MOTOR1_ENABLE_PWM, pwm_value );
  digitalWrite(MOTOR1_FORWARD, LOW);
  digitalWrite(MOTOR1_BACKWARD, LOW);
  //Motor 2
  analogWrite(MOTOR2_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR2_FORWARD, LOW);
  digitalWrite(MOTOR2_BACKWARD, LOW);
  //Motor 3
  analogWrite(MOTOR3_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR3_FORWARD, LOW);
  digitalWrite(MOTOR3_BACKWARD, LOW);
  //Motor 4
  analogWrite(MOTOR4_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR4_FORWARD, LOW);
  digitalWrite(MOTOR4_BACKWARD, LOW);
  return;
}

// backward function
void Backward(int time, int pwm_value) {
  //Motor 1
  analogWrite(MOTOR1_ENABLE_PWM, pwm_value );
  digitalWrite(MOTOR1_FORWARD, LOW);
  digitalWrite(MOTOR1_BACKWARD, HIGH);
  //Motor 2
  analogWrite(MOTOR2_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR2_FORWARD, LOW);
  digitalWrite(MOTOR2_BACKWARD, HIGH);
  //Motor 3
  analogWrite(MOTOR3_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR3_FORWARD, LOW);
  digitalWrite(MOTOR3_BACKWARD, HIGH);
  //Motor 4
  analogWrite(MOTOR4_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR4_FORWARD, LOW);
  digitalWrite(MOTOR4_BACKWARD, HIGH);
  //run the motor for a specific time

  delay (time);

  // Stop the motors
  //Motor 1
  analogWrite(MOTOR1_ENABLE_PWM, pwm_value );
  digitalWrite(MOTOR1_FORWARD, LOW);
  digitalWrite(MOTOR1_BACKWARD, LOW);
  //Motor 2
  analogWrite(MOTOR2_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR2_FORWARD, LOW);
  digitalWrite(MOTOR2_BACKWARD, LOW);
  //Motor 3
  analogWrite(MOTOR3_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR3_FORWARD, LOW);
  digitalWrite(MOTOR3_BACKWARD, LOW);
  //Motor 4
  analogWrite(MOTOR4_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR4_FORWARD, LOW);
  digitalWrite(MOTOR4_BACKWARD, LOW);
  return;
}

// RIGHT function
void Right(int time, int pwm_value) {
  //Motor 1
  analogWrite(MOTOR1_ENABLE_PWM, pwm_value );
  digitalWrite(MOTOR1_FORWARD, HIGH);
  digitalWrite(MOTOR1_BACKWARD, LOW);
  //Motor 2
  analogWrite(MOTOR2_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR2_FORWARD, LOW);
  digitalWrite(MOTOR2_BACKWARD, HIGH);
  //Motor 3
  analogWrite(MOTOR3_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR3_FORWARD, HIGH);
  digitalWrite(MOTOR3_BACKWARD, LOW);
  //Motor 4
  analogWrite(MOTOR4_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR4_FORWARD, LOW);
  digitalWrite(MOTOR4_BACKWARD, HIGH);
  //run the motor for a specific time
  delay (time);

  // Stop the motors
  //Motor 1
  analogWrite(MOTOR1_ENABLE_PWM, pwm_value );
  digitalWrite(MOTOR1_FORWARD, LOW);
  digitalWrite(MOTOR1_BACKWARD, LOW);
  //Motor 2
  analogWrite(MOTOR2_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR2_FORWARD, LOW);
  digitalWrite(MOTOR2_BACKWARD, LOW);
  //Motor 3
  analogWrite(MOTOR3_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR3_FORWARD, LOW);
  digitalWrite(MOTOR3_BACKWARD, LOW);
  //Motor 4
  analogWrite(MOTOR4_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR4_FORWARD, LOW);
  digitalWrite(MOTOR4_BACKWARD, LOW);
  return;
}
