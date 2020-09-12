int analogPin = A3; 

int val = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);

  if(val < 70)
  {
    Serial.print("It must be sunny out! The light reading is: ");
  }

  if(val > 900)
  {
    Serial.print("It's dark in there! The light reading is: ");
  }

  if(70 < val && val < 900)
  {
    Serial.print("Is it cloudy or are you indoors? The light reading is: ");
  }

  
  Serial.println(val);
  delay(500);
}
