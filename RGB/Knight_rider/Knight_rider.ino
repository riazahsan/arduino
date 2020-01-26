
int red_1 = 9;
int red_2 = 10;
int red_3 = 11;
int red_4 = 12;

void setup() {
  // put your setup code here, to run once:

pinMode(red_1, OUTPUT);
pinMode(red_2, OUTPUT);
pinMode(red_3, OUTPUT);
pinMode(red_4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(red_1, HIGH);
delay(100);
digitalWrite(red_2, HIGH);
delay(100);
digitalWrite(red_3, HIGH);
delay(100);
digitalWrite(red_4, HIGH);
delay(100);
digitalWrite(red_1, LOW);
delay(100);
digitalWrite(red_2, LOW);
delay(100);
digitalWrite(red_3, LOW);
delay(100);
digitalWrite(red_4, HIGH);
delay(100);
digitalWrite(red_3, HIGH);
delay(100);
digitalWrite(red_2, HIGH);
delay(100);
digitalWrite(red_1, HIGH);
delay(100);
digitalWrite(red_4, LOW);
delay(100);
digitalWrite(red_3, LOW);
delay(100);
digitalWrite(red_2, LOW);
delay(100);
digitalWrite(red_1, HIGH);
delay(100);
}
