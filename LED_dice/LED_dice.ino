void setup()
{
  // put your setup code here, to run once:

  randomSeed(analogRead(0));    //seeds the random number generator
  for (int z = 1 ; z < 7 ; z++) // LEDs on pins 1-6 are input
  {
    pinMode(z, OUTPUT);
  }
}

void randomLED(int del)
{

  int r;
  r = random(1, 7);      //get a random number from 1-6
  digitalWrite(r, HIGH); //output to the matching LED on pins 1-6
  if (del > 0)
  {
    delay(del);          //hold the LED on for the delay recieved
  }
  else if (del == 0)
  {
    do                   // the delay entered was a zero, hold the LED on Forever
    {}
    while (1);
  }
  digitalWrite(r, LOW); //turn off the LED
}

void loop()
{
  // put your main code here, to run repeatedly:

  int a;                  //cycle the LEDs around for effect
  for ( a = 0 ; a < 100 ; a++ )
  {
    randomLED(50);
  }
  //slow down
  for ( a = 1 ; a <= 10 ; a++ )
  {
    randomLED(a * 100);
  }
  // and stop at the final random number and LED
  randomLED(0);

}
