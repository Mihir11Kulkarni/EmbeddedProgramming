
void setup() {
 
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  digitalWrite(6, HIGH);   
                       
  digitalWrite(6, LOW);    
                         
}
