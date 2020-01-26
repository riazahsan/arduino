
int button = 9;
int red = 3;


void setup() {
  // put your setup code here, to run once:

pinMode(button, INPUT);
pinMode(red, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

if (digitalRead(button) == HIGH){
  digitalWrite(red, 1);
}
else{
  digitalWrite(red, 0);
}

}
