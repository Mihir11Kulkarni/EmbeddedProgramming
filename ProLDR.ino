void setup() {
  pinMode (2,INPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600); 
}
void loop() {
  int x=digitalRead(2);
  Serial.println(x);
  if(x==HIGH){
    digitalWrite(3,LOW);  
  }
  else{
    digitalWrite(3,HIGH);
  } 
}
