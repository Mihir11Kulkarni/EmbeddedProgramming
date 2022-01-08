void setup() {
pinMode(A4,INPUT);
Serial.begin(9600);  
}
void loop() 
{
  int a=analogRead(A4);
  Serial.println(a);
  if(a<50)
  {
    Serial.println("NOT MOISTURED");
  }
  else 
  {
    Serial.println("MOISTURED");
  }
}
