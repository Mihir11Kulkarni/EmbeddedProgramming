void setup() 
{
  pinMode(A6,INPUT);
  Serial.begin(9600);
}
void loop() 
{
int a=analogRead(A6);
Serial.println(a);
if(a<50)
{
  Serial.println("Empty");
  
}
else if (a<50 && a<500)
{
  Serial.println("medium");
}
else 
{
  Serial.println("full");
}
}
