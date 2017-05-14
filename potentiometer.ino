int inputPin=A0;
int outputPin=6;
float value;
void setup() {
  // put your setup code here, to run once:
pinMode(inputPin,INPUT);
pinMode(outputPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
value=analogRead(inputPin);
value=(value/1023)*5;
Serial.println(value);
value=value*51;
analogWrite(outputPin,value);


}
