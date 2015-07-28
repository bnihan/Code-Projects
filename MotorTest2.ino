// Sketch to drive a simple DC motor
//
// Motor connected to Motor output A on Arduino Motor Shield R3
// This example uses the output A.  If you want to use output B or a 2nd motor
// just change DIR_A for DIR_B, SPEED_A for SPEED_B, BREAK_A for BREAK_B
//
// NKC Electronics 2012

// Motor A definitions
int DIR_A = 12;
int SPEED_A = 3;
int BREAK_A = 9;

// Motor B definitions
int DIR_B = 13;
int SPEED_B = 11;
int BREAK_B = 8;

void setup()
{
  pinMode(SPEED_A, OUTPUT);
  pinMode(DIR_A, OUTPUT);
  pinMode(BREAK_A, OUTPUT);
  pinMode(SPEED_B, OUTPUT);
  pinMode(DIR_B, OUTPUT);
  pinMode(BREAK_B, OUTPUT);
 
  // release break
  digitalWrite(BREAK_A, LOW);
  digitalWrite(BREAK_B, LOW);
}

void loop()
{
  // Turn in Circle
  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, LOW);
  analogWrite(SPEED_A, 250);
  analogWrite(SPEED_B, 250);
  // wait 5 seconds
  delay(5000);
 
  // break the motor
  digitalWrite(BREAK_A, HIGH);
  digitalWrite(BREAK_B, HIGH);
  delay(100);
  // release break.  If BREAK_A continues to be HIGH, the motor will not move
  digitalWrite(BREAK_A, LOW);
  digitalWrite(BREAK_B, LOW);
 
  // Turn the Other Way
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, HIGH);
  analogWrite(SPEED_A, 250);
  analogWrite(SPEED_B, 250);
  // wait 5 seconds
  delay(5000);
 
  // break the motor
  digitalWrite(BREAK_A, HIGH);
  digitalWrite(BREAK_B, HIGH);
  delay(100);
  // release break.  If BREAK_A continues to be HIGH, the motor will not move
  digitalWrite(BREAK_A, LOW);
  digitalWrite(BREAK_B, LOW);
  
}
