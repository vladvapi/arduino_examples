# App Inventor mobile app

```cpp
#include <Servo.h>

Servo myservo;

const int servoPin = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    int pos = Serial.read();

    myservo.write(pos);
  }
}
```
