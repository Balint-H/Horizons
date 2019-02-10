#include <Encoder.h>

// connect motor controller pins to Arduino digital pins
// motor one
int enA = 10; //speed
int in1 = 9;  //on-off and direction
int in2 = 8; //on-off and direction

Encoder myEnc(2, 3);
long timeStart=0;
long oldPosition  = -999;
void setup()
{
  // set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

}
void demoOne()
{
  // turn on motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  // set speed to 200 out of possible range 0~255
  analogWrite(enA, 200);
  runFor(2000);

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

  runFor(2000);
  
  // now change motor directions
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);  
  
  runFor(2000);
  // now turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);  

  runFor(2000);
}

void loop()
{
  demoOne();
}

void driveMotor(int enablePin, int in1, int in2, Encoder encIn, String mode, long dur)
{
  if(mode.equals("deg")
  {
    curDeg=encIn.read();
    while
  }
  
}

