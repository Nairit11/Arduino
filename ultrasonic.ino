 #include <Ultrasonic.h>
 #define LED1 7
 #define LED2 8
 #define TRIGGER_PIN 12
 #define ECHO_PIN 13


 int x;

 Ultrasonic ultrasonic(TRIGGER_PIN,ECHO_PIN);
 void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
float cmMsec,inMsec;
 long microsec=ultrasonic.Timing();

cmMsec=ultrasonic.Convert(microsec,Ultrasonic::CM);
inMsec=ultrasonic.Convert(microsec,Ultrasonic::IN);
Serial.print("MS.");
Serial.print(microsec);
Serial.print("; CM; ");
Serial.print(cmMsec);
Serial.print("; IN: ");
Serial.print(inMsec);
if(cmMsec>=30)
  digitalWrite(LED2,HIGH);
if(cmMSec<30){
  digitalWrite(LED2,LOW);

  digitalWrite(LED1,HIGH);
  do{
    long microsec=ultrasonic.Timing();
    cmMsec=ultrasonic.Convert(microsec,Ultrasonic::CM);
    inMsec=ultrasonic.Convert(microsec,Ultrasonic::IN);
    x=map(cmMsec,30,0,0,500);
  }while(cmMsec<=30);
  digitalWrite(LED1,LOW);
}
  

}
