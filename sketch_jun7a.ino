#include <Keyboard.h>

// use this option for OSX:
char CTRL = KEY_LEFT_GUI;
// use this option for Windows and Linux:
//  char ctrlKey = KEY_LEFT_CTRL;

void setup()
{
  Keyboard.begin(); //Init keyboard emulation

  // We need 6 pins so we are using pins 2-7
  for (int i = 2; i <= 7; ++i) {
    pinMode(i, INPUT);  // Set the button as an input
    digitalWrite(i, HIGH);  // Pull the button high
  }

}

void loop()
{


  /* Impl for macro pad
  * Wire map
  * | 2 | 3 | 4 |
  * | 5 | 6 | 7 |
  *
  * Key map
  * | Copy  | Up   | Paste  |
  * | Left  | Down | Right  |
  *
  */

  // Key press
  if (digitalRead(2) == 0) {
    Keyboard.press(CTRL);
    Keyboard.press('c');
  }
  if (digitalRead(3) == 0) {
    Keyboard.press(KEY_UP_ARROW);
  }
  if (digitalRead(4) == 0) {
    Keyboard.press(CTRL);
    Keyboard.press('v');
  }
  if (digitalRead(5) == 0) {
    Keyboard.press(KEY_LEFT_ARROW);
  }
  if (digitalRead(6) == 0) {
    Keyboard.press(KEY_DOWN_ARROW);
  }
  if (digitalRead(7) == 0) {
    Keyboard.press(KEY_RIGHT_ARROW);
  }

  // Key release
  if (digitalRead(2) == 1) {
    Keyboard.release(CTRL);
    Keyboard.release('c');
  }
  if (digitalRead(3) == 1) {
    Keyboard.release(KEY_UP_ARROW);
  }
  if (digitalRead(4) == 1) {
    Keyboard.release(CTRL);
    Keyboard.release('v');
  }
  if (digitalRead(5) == 1) {
    Keyboard.release(KEY_LEFT_ARROW);
  }
  if (digitalRead(6) == 1) {
    Keyboard.release(KEY_DOWN_ARROW);
  }
  if (digitalRead(7) == 1) {
    Keyboard.release(KEY_RIGHT_ARROW);
  }     

  // delay(100); // Delay between loop iterations for stability
}
