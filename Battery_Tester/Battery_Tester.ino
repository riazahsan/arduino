//Single cell battery tester


#define newLED 2 // green LED 'new'
#define okLED 4 // yellow LED 'ok'
#define oldLED 6 // red LED 'old'


int analogValue = 0;
float voltage = 0;
int Delay = 5000;


void setup()
{
  pinMode(newLED, OUTPUT);
  pinMode(okLED, OUTPUT);
  pinMode(oldLED, OUTPUT);
}

void loop()
{
  analogValue = analogRead(0);
  voltage = 0.0048*analogValue;
  if (voltage >= 1.6)
  {
    digitalWrite(newLED, HIGH);
    delay(2000);
    digitalWrite(newLED, LOW);
  }
  else if (voltage < 1.6 && voltage > 1.4)
   {
    digitalWrite(okLED, HIGH);
    delay(2000);
    digitalWrite(okLED, LOW);
  }
  else if (voltage <= 1.4)
    {
    digitalWrite(oldLED, HIGH);
    delay(2000);
    digitalWrite(oldLED, LOW);
  }
}
