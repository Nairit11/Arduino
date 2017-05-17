int num;
void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i,dig;
Serial.println("Please input an integer");
while(Serial.available()==0){}
num=Serial.parseInt();
for(i=3;i<=6;i++)
{
  dig=num%2;
  num=num/2;
  if(dig==1)
  digitalWrite(i,HIGH);
  else digitalWrite(i,LOW);
  
}


}
