void setup() {
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  delay(1000);
  //for clock and anticlockwise
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  delay(1000);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  delay(1000);
}
