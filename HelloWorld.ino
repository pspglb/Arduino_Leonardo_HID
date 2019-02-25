#include <Keyboard.h>
#include <HID.h>

void setup() {
//put your setup code here, to run once:
  Keyboard.begin();
  delay(500);
  Keyboard.press(KEY_LEFT_GUI); 
  delay(500);
  Keyboard.press('r');
  delay(500);
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500);
  //Keyboard.press(KEY_LEFT_CTRL);
  //delay(200);
  //Keyboard.press(KEY_LEFT_SHIFT);
  //delay(200);
  //Keyboard.release(KEY_LEFT_CTRL);
  //Keyboard.release(KEY_LEFT_SHIFT);
  //delay(200);
  Keyboard.press(KEY_CAPS_LOCK);
  delay(200);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(100);
  Keyboard.println("cmd /t:0a");
  delay(200);
  Keyboard.write(0x0A);
  delay(200);
  Keyboard.println("echo Hello, Word!");
  delay(200);
  Keyboard.write(0x0A);
  delay(200);
  Keyboard.press(KEY_CAPS_LOCK);
  delay(500);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();
}

void loop() {
//put your main code here, to run repeatedly:

}