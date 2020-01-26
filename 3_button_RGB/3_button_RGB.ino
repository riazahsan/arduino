


int Button1 = 9;
int Button2 = 10;
int Button3 = 11;
int Red = 3;
int Blue = 5;
int Green = 6;


void setup(){
pinMode(Button1, INPUT);
pinMode(Button2, INPUT);
pinMode(Button3, INPUT);
pinMode(Red, OUTPUT);
pinMode(Blue, OUTPUT);
pinMode(Green, OUTPUT);

}

void loop(){

if(digitalRead(Button1) == HIGH {
  digitalWrite(Blue, 1);
}
else {
  digitalWrite(Blue, 0);
}

if(digitalRead(Button2) == HIGH {
  digitalWrite(Red, 1);
}
else {
  digitalWrite(Red, 0);
}

if(digitalRead(Button3) == HIGH {
  digitalWrite(Green, 1);
}
else {
  digitalWrite(Green, 0);
}

}
