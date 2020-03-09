
int x = 1000;
int pin_1 = 1;
int pin_2 = 2;
int pin_4 = 4;
int pin_5 = 5;
int pin_6 = 6;
int pin_7 = 7;
int pin_9 = 9;
int pin_10 = 10;

  
  void setup() {
  // put your setup code here, to run once:

pinMode(pin_1, OUTPUT);
pinMode(pin_2, OUTPUT);
pinMode(pin_4, OUTPUT);
pinMode(pin_5, OUTPUT);
pinMode(pin_6, OUTPUT);
pinMode(pin_7, OUTPUT);
pinMode(pin_9, OUTPUT);
pinMode(pin_10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(pin_4, HIGH);
  digitalWrite(pin_6, HIGH);
  delay(x);
  
  digitalWrite(pin_1, HIGH);
  digitalWrite(pin_2, HIGH);
  digitalWrite(pin_4, LOW);
  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_10, HIGH);
  delay(x);
  
  digitalWrite(pin_1, LOW);
  digitalWrite(pin_4, HIGH);
  delay(x); 

  digitalWrite(pin_7, LOW);
  digitalWrite(pin_2, LOW); 
  digitalWrite(pin_9, HIGH);  
  delay(x); 

  digitalWrite(pin_6, LOW);
  digitalWrite(pin_7, HIGH);
  digitalWrite(pin_2, HIGH);
  delay(x);

  digitalWrite(pin_1, HIGH);
  delay(x);

  digitalWrite(pin_6, HIGH);
  digitalWrite(pin_2, LOW);
  digitalWrite(pin_1, LOW);
  digitalWrite(pin_10, LOW);
  digitalWrite(pin_9, LOW);
  delay(x);

  digitalWrite(pin_9, HIGH);
  digitalWrite(pin_10, HIGH);
  digitalWrite(pin_1, HIGH);
  digitalWrite(pin_2, HIGH);
  delay(x);

  digitalWrite(pin_1, LOW);
  delay(x);

  digitalWrite(pin_9, LOW);
  digitalWrite(pin_7, LOW);
  digitalWrite(pin_10, LOW);
  digitalWrite(pin_2, LOW);
  delay(x);

}
