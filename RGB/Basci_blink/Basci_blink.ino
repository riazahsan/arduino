
int Blue_LED = 9;

void setup() {  
  // put your setup code here, to run once:
pinMode(Blue_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(Blue_LED, HIGH);
delay(500);
digitalWrite(Blue_LED, LOW);
delay(500);

}
