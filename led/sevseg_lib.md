# Using SevSeg - Example:

```cpp
#include "SevSeg.h"
SevSeg sevseg;

void setup() {
  // put your setup code here, to run once:
  byte hardwareConfig = COMMON_ANODE; 
  byte numDigits = 3;
  byte digitPins[] = {12, 11, 10};
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8};
  bool resistorsOnSegments = true;

  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  sevseg.setNumber(421);
  sevseg.refreshDisplay();
}
```
