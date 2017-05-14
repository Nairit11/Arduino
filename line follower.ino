
#define LS 3      // left sensor
#define RS 2      // right sensor

#define LM1 10      // left motor
#define LM2 6      // left motor
#define RM1 9       // right motor
#define RM2 7       // right motor
void setup()
{
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
}
void loop()
{
  if(digitalRead(LS) && digitalRead(RS))     // Move Forward
  {
    analogWrite(LM1,250 );
    analogWrite(LM2, 0);
    analogWrite(RM1, 250);
    analogWrite(RM2, 0);
  }
  
  if(!(digitalRead(LS)) && digitalRead(RS))     // Turn right
  {
    analogWrite(LM1, 0);
    analogWrite(LM2, 0);
    analogWrite(RM1, 250);
    analogWrite(RM2, 0);
  }
  
  if(digitalRead(LS) && !(digitalRead(RS)))     // turn left
  {
    analogWrite(LM1, 250);
    analogWrite(LM2, 0);
    analogWrite(RM1, 0);
    analogWrite(RM2, 0);
  }
  
  if(!(digitalRead(LS)) && !(digitalRead(RS)))    // stop 
  {
    analogWrite(LM1, 0);
    analogWrite(LM2, 0);
    analogWrite(RM1, 0);
    analogWrite(RM2, 0);
  }
}
