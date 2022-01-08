void setup() {
  pinMode (A3,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  int a= analogRead(A3);
  Serial.print(a);
  if(a>=30)
  {
    digitalWrite(3,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
  }
}
  
