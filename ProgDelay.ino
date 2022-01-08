void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
  
  

}

void loop() {
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(4,HIGH);
  delay(2000);
  digitalWrite(5,HIGH);
  delay(2000);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW  );
}
