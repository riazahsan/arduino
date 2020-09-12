
// If you're using a METRO EXPRESS, change this value to 3.333
#define ANALOGREFVOLTAGE 5.000

// include the lcd library code:
#include <LiquidCrystal.h>

#include "dht.h"
#define dht_apin A0

dht DHT;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// TMP36 Pin 
int temperaturePin = 0;

void setup() {
  Serial.begin(9600);
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {

  Serial.println("Main loop starting");
  DHT.read11(dht_apin); 
  float temperature = 0;
  temperature = DHT.temperature;
  Serial.println(temperature);
  
  // Write temperature to the LCD
  lcd.print("Temp: ");
  lcd.setCursor(6,0);
  lcd.print(temperature);
  lcd.setCursor(11,0);
  lcd.print("*C");
  // Wait 1s
  delay(1000);
  // Refresh the LCD
  lcd.clear();
}
