#include <dht.h>
#define dht_apin A0

dht DHT;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(500);
  Serial.println("Booting up the thermometer...");
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  DHT.read11(dht_apin);

  Serial.print("Current humidity = ");
  Serial.print(DHT.humidity);
  Serial.print("%, and the temperature = ");
  Serial.print(DHT.temperature);
  Serial.println("degrees Celcius");

  delay(3000);
  

}
