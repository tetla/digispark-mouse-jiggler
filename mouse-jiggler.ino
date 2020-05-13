#include <DigiMouse.h>
// The central LED in Digispark
#define LEDPIN 1

const int MOVEMENT_DISTANCE = 5; // pixel
const long WAITING_TIME = 60000; // ms

void setup() {

  pinMode(LEDPIN, OUTPUT);
  DigiMouse.begin();

}

void loop() {

  // Jiggle mouse
  DigiMouse.moveX(MOVEMENT_DISTANCE);
  DigiMouse.delay(10);
  DigiMouse.moveX(-MOVEMENT_DISTANCE);

  // LED notification
  notify(100);

  // Wait
  DigiMouse.delay(WAITING_TIME);

}

void notify(int notifyingTime) {

  // LED ON
  digitalWrite(LEDPIN, HIGH);
  // Wait
  DigiMouse.delay(notifyingTime);
  // LED OFF
  digitalWrite(LEDPIN, LOW);

}
