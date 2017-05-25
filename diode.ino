float value1,value2;
void setup() {
  // put your setup code here, to run once:
pinMode(12,OUTPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);
  value1=analogRead(A1);
  value1=(value1/1024)*5;
  Serial.print("Voltage before diode ");
  Serial.println(value1);
  
  value2=analogRead(A2);
  value2=(value2/1024)*5;
  Serial.print("Voltage after diode ");
  Serial.println(value2);
  delay(2500);
}
