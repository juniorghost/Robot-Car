/*
  Robotics and Control
  Written by Salim El Atache
  This code will allow the robot to follow the light.
*/

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

//declaring the LDR pins
int LDR1 = A2;
int LDR2 = A3;
int Time;

void setup() {
Serial.begin(9600);
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
 
  //initialize analog pins
  pinMode(LDR1, INPUT);
  pinMode(LDR2, INPUT);



}


void loop() {

  // Read the analog Values
  LDR1 = analogRead(A1);
  LDR2 = analogRead(A2);
  int Difference= LDR1-LDR2;
  
  //creating the conditions
  if ((LDR1 > 550) && (LDR2 > 550))  {
     //( pwm, time) 
    Forward (180,300);
  }
  
  if ((Difference >=100) && (Difference<= 400)) {
    //(  time, pwm) 
    Left (300,200);
  }
  
  if ((Difference >=-400) && (Difference<=-120)) {
    
    Right (300,200);
  }
  else {
    Stop (0);
  }


}

//forward function
void Forward( int pwm_value, int Time) {
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
  delay(Time);
  return;
}


//LEFT function
void Left(int Time, int pwm_value) {
  //Motor 1
  analogWrite(MOTOR1_ENABLE_PWM, pwm_value );
  digitalWrite(MOTOR1_FORWARD, LOW);
  digitalWrite(MOTOR1_BACKWARD, HIGH);
  //Motor 2
  analogWrite(MOTOR2_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR2_FORWARD, HIGH);
  digitalWrite(MOTOR2_BACKWARD, LOW);
  //Motor 3
  analogWrite(MOTOR3_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR3_FORWARD, LOW);
  digitalWrite(MOTOR3_BACKWARD, HIGH);
  //Motor 4
  analogWrite(MOTOR4_ENABLE_PWM, pwm_value);
  digitalWrite(MOTOR4_FORWARD, HIGH);
  digitalWrite(MOTOR4_BACKWARD, LOW);
 delay(Time);
}
// RIGHT function
void Right(int Time, int pwm_value) {
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
  delay(Time);
}
//stop function
void Stop (int pwm_value) {
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
