                #include<Servo.h>
Servo myServo;
void setup() {
myServo.attach(2);
}
void loop() {
  int pos;
  for(int i=0;i<=180;i++)
  {
    myServo.write(i);
    delay(1500);
  }
  for(int i=180;i>0;i--)
  {
    myServo.write(i);
    delay(1500); 
  }
}
