#include <DebugLogger.h>

bool isLogging = true;
DebugLogger debug = DebugLogger(isLogging);

const int DELAY_TIME = 5000;
unsigned long tsLast = 0;

void setup() {
  debug.begin(115200); // starts Serial with baud rate of 115200
}

void loop() {
/* use the same as you would Serial.print & Serial.println */
  debug.print("[DEBUG]: ");
  debug.println("Testing debug values");
  delay(1000);
}

