#include <Arduino.h>

int current_state = LOW;

void change_state(int);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, current_state);
  delay(1000);
  current_state = !current_state;
}

// put function definitions here:
void change_state(int port) {
}