
void setup() {
 
  pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  digitalWrite(6, HIGH);   
   digitalWrite(7, LOW);
    digitalWrite(8, LOW); 
    Serial.print("red liggt is om"); 
    delay(1000);     
    digitalWrite(6,LOW );   
   digitalWrite(7,HIGH);
    digitalWrite(8, LOW);  
    delay(1000); 
    digitalWrite(6,LOW );   
   digitalWrite(7,LOW);
    digitalWrite(8,HIGH);  
    delay(1000);                  
    
                         
}
