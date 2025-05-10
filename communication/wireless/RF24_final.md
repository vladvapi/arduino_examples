# Transmitter

```cpp
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);  // CE, CSN

int data = 0;

const byte address[6] = "00001";

void setup() {
  Serial.begin(115200);
  // initialize the transceiver on the SPI bus
  if (!radio.begin()) {
    Serial.println(F("radio hardware is not responding!!"));
    while (1) {}  // hold in infinite loop
  }

  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_LOW);
  radio.stopListening();

  Serial.println(F("radio hardware is good!!"));
}

void loop() {
  const char text[] = "Hello";
  if (!radio.write(&data, sizeof(data))) {
    Serial.println(F("Write successful"));
  } else {
    Serial.println(F("Write failed"));
  }
  data++;
  delay(1000);
}
```

# Receiver

```cpp
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8);  // CE, CSN

const byte address[6] = "00001";

void setup() {
  Serial.begin(115200);
  if (!radio.begin()) {
    Serial.println(F("radio hardware is not responding!!"));
    while (1) {}  // hold in infinite loop
  }

  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_LOW);
  radio.startListening();
  Serial.println(F("radio receiver is good!!"));
}

void loop() {
  if (radio.available()) {
    int data = 0;
    radio.read(&data, sizeof(data));
    Serial.println(data);
  }
}
```
