// Define motor control pins

#define MOTOR_A_FORWARD  32  // Motor A forward pin

#define MOTOR_A_BACKWARD 33  // Motor A backward pin

#define MOTOR_B_FORWARD  25  // Motor B forward pin

#define MOTOR_B_BACKWARD 26  // Motor B backward pin

 

void setup() {

  // Set motor control pins as outputs

  pinMode(MOTOR_A_FORWARD, OUTPUT);

  pinMode(MOTOR_A_BACKWARD, OUTPUT);

  pinMode(MOTOR_B_FORWARD, OUTPUT);

  pinMode(MOTOR_B_BACKWARD, OUTPUT);

}

 

void loop() {

  // Move forward

  moveForward();

  delay(1500); // Move forward for 1.5 seconds

 

  // Stop

  stopMotors();

  delay(1500); // Stop for 1.5 seconds

 

  // Move forward again

  moveForward();

  delay(1500); // Move forward for 1.5 seconds

 

  // Stop

  stopMotors();

  delay(1000); // Stop for 1 second

 

  // Turn left

  turnLeft();

  delay(1000); // Turn left for 1 second

 

  // Stop

  stopMotors();

  delay(1000); // Stop for 1 second

 

  // Turn right

  turnRight();

  delay(1000); // Turn right for 1 second

 

  // Stop

  stopMotors();

  delay(1000); // Stop for 1 second

}

 

void moveForward() {

  digitalWrite(MOTOR_A_FORWARD, HIGH);

  digitalWrite(MOTOR_A_BACKWARD, LOW);

  digitalWrite(MOTOR_B_FORWARD, HIGH);

  digitalWrite(MOTOR_B_BACKWARD, LOW);

}

 

void turnLeft() {

  digitalWrite(MOTOR_A_FORWARD, LOW);

  digitalWrite(MOTOR_A_BACKWARD, LOW);

  digitalWrite(MOTOR_B_FORWARD, HIGH);

  digitalWrite(MOTOR_B_BACKWARD, LOW);

}

 

void turnRight() {

  digitalWrite(MOTOR_A_FORWARD, HIGH);

  digitalWrite(MOTOR_A_BACKWARD, LOW);

  digitalWrite(MOTOR_B_FORWARD, LOW);

  digitalWrite(MOTOR_B_BACKWARD, LOW);

}

 

void stopMotors() {

  digitalWrite(MOTOR_A_FORWARD, LOW);

  digitalWrite(MOTOR_A_BACKWARD, LOW);

  digitalWrite(MOTOR_B_FORWARD, LOW);

  digitalWrite(MOTOR_B_BACKWARD, LOW);

}