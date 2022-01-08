void setup() {
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (8,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  digitalWrite (6,HIGH);
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  Serial.print("Red is Light On !");
  delay (500);
  digitalWrite (6,LOW);
  digitalWrite (7,HIGH);
  digitalWrite (8,LOW);
  Serial.print("Yellow Light is On");
  delay (500);
  digitalWrite (6,LOW);
  digitalWrite (7,LOW);
  digitalWrite (8,HIGH);
  Serial.print("Green Light is On");
  delay (500);
  

}
