#define ENABLE 5
#define DIRA 3
#define DIRB 4

int rbutton = 10;
int lbutton = 11;


void setup() {
  // put your setup code here, to run once:

  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
  pinMode(rbutton, INPUT_PULLUP);
  pinMode(lbutton, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(rbutton) == LOW) {

    digitalWrite(ENABLE, HIGH);
    digitalWrite(DIRB, LOW);
    digitalWrite(DIRA, HIGH);

  }

  if (digitalRead(lbutton) == LOW) {

    digitalWrite(ENABLE, LOW);
    digitalWrite(DIRA, LOW);
    digitalWrite(DIRB, HIGH);

  }


}
