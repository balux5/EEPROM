#include<EEPROM.h>
bool led_state = false;
#define LED 7
#define BUTTON 8
void setup() {
  EEPROM.begin();
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  byte val = EEPROM.read(0);
  led_state = bool(val);
}

void loop() {
  int state = !digitalRead(BUTTON);
  if (state) {
    led_state = !led_state;
    EEPROM.write(0, led_state);
  }
  if (led_state) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
  delay(150);
}
