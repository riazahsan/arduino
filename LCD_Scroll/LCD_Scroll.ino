#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
char * message = "Scroll me";

void setup()
{
 lcd.begin (16,2);
 lcd.setCursor(3,0);
 lcd.print("Stay Still");
}

void loop()
{
 for (int printStart = 15; printStart >= 0; printStart--)  //scroll on from right
 {
   showLetters(printStart, 0);
 }

 for (int letter = 1; letter <= strlen(message); letter++)  //scroll off to left
 {
   showLetters(0, letter);
 }
}

void showLetters(int printStart, int startLetter)
{
 lcd.setCursor(printStart,1);
 for (int currentLetter = startLetter; currentLetter < strlen(message); currentLetter++)
 {
   lcd.print(message[currentLetter]);
 }
 lcd.print(" ");
 delay(250);
}
