#include "DHT.h"
#include<Wire.h>
#define DHTPIN A0
#define DHTTYPE DHT11
DHT dht(A0,DHT11);
float t,h;
void setup() {  
  Serial.begin(9600);
  dht.begin();
}

void getReading() {
 h=dth.readHumidity();
 t=dht.readTemperature();
 if(isnan(t)||isnan(h))
 {
  Serial.println("Failed to read");
 }
 else
 {
  Serial.println("Humidity");
  Serial.print(h);
  Serial.println(t);
 }
 void loop(){
 {
  getReading();
  delay(1000);
 }
}
