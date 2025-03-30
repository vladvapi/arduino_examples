# Infrareds sensor buttons turns on led

```cpp
#include <IRremote.hpp>
#define IR_RECEIVE_PIN 7

#define redPin 10
#define greenPin 11

void setup() {
  Serial.begin(9600);                                     // // Establish serial communication
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);  // Start the receiver
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  if (IrReceiver.decode()) {
    uint32_t data = IrReceiver.decodedIRData.decodedRawData;
    Serial.println(data);  // Print "old" raw data

    if (data == 3910598400) {
      digitalWrite(redPin, HIGH);
      delay(2000);
      digitalWrite(redPin, LOW);
    }

    if (data == 3860463360) {
      digitalWrite(greenPin, HIGH);
      delay(2000);
      digitalWrite(greenPin, LOW);
    }

    IrReceiver.resume();  // Enable receiving of the next value
  }
}

// 1: E916FF00, 3910598400
// 2: E619FF00, 3860463360
```
