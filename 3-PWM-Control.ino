/*
  ELE8392 RObotics and Control
  Written by Salim El Atache
  This code will allow the pwm of the motors to be changed by a potentiometer
*/
//defining the pins
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



const int analogPin = A0; //the analog input pin attach to analog pin A0
int inputValue = 0; //variable to store the value coming from sensor
int PWM_ON_VALUE = 0; //variable to store the output value


#define MOTOR_DELAY      3000

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin for the motors and potentiometer as an output.
  pinMode(MOTOR1_FORWARD, OUTPUT);
  pinMode(MOTOR1_BACKWARD, OUTPUT);
  pinMode(MOTOR2_FORWARD, OUTPUT);
  pinMode(MOTOR2_BACKWARD, OUTPUT);
  pinMode(MOTOR3_FORWARD, OUTPUT);
  pinMode(MOTOR3_BACKWARD, OUTPUT);
  pinMode(MOTOR4_FORWARD, OUTPUT);
  pinMode(MOTOR4_BACKWARD, OUTPUT);
  pinMode(analogPin, INPUT);

}

void loop() {



  //read the value from the Potentiometer
  inputValue = analogRead(analogPin);
  //Convert from 0-1023 proportional to the numbers  from 0 to 255.
  PWM_ON_VALUE = map(inputValue, 0, 1023, 0, 255);



  //turn all the motors foward for no limeted time
  //pwm_on_value will be changing depending on potentiometer value
  //Motor 1
  analogWrite(MOTOR1_ENABLE_PWM, PWM_ON_VALUE );
  digitalWrite(MOTOR1_FORWARD, HIGH);
  digitalWrite(MOTOR1_BACKWARD, LOW);
  //Motor 2
  analogWrite(MOTOR2_ENABLE_PWM, PWM_ON_VALUE );
  digitalWrite(MOTOR2_FORWARD, HIGH);
  digitalWrite(MOTOR2_BACKWARD, LOW);
  //Motor 3
  analogWrite(MOTOR3_ENABLE_PWM, PWM_ON_VALUE );
  digitalWrite(MOTOR3_FORWARD, HIGH);
  digitalWrite(MOTOR3_BACKWARD, LOW);
  //Motor 4
  analogWrite(MOTOR4_ENABLE_PWM, PWM_ON_VALUE );
  digitalWrite(MOTOR4_FORWARD, HIGH);
  digitalWrite(MOTOR4_BACKWARD, LOW);


}
