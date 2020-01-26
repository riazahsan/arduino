
int y = 50;           

void setup() {
  for (int rLED = 2; rLED < 10; rLED++) {
    pinMode(rLED, OUTPUT);
  }
}

void loop() {
  
  for (int rLED = 2; rLED < 10; rLED++) {
    digitalWrite(rLED, HIGH);
    delay(y);
    digitalWrite(rLED, LOW);
  }
  
  for (int rLED = 9; rLED >= 2; rLED--) {
    digitalWrite(rLED, HIGH);
    delay(y);
    digitalWrite(rLED, LOW);
  }
}
