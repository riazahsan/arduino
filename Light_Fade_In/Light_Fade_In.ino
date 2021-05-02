int LED = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); // a Pulse Width Modultion pin
}

void loop() {
  // put your main code here, to run repeatedly:
for (int i=0;i<256;i++){
  analogWrite(3, i);
  delay(10);

}//end for loop

for (int i=255;i>0;i--){
  analogWrite(3, i);
  delay(10); 
}

}
