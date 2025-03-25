Servo arm with potentiometers

```cpp
#include <Servo.h>

Servo myservo9;
Servo myservo8;
Servo myservo7;
Servo myservo6;

int potpin9 = A0;
int potpin8 = A1;
int potpin7 = A2;
int potpin6 = A3;
int val0, val1, val2, val3;

void setup() {
  myservo9.attach(9);
  myservo8.attach(8);
  myservo7.attach(7);
  myservo6.attach(6);
  Serial.begin(9600);
}

void loop() {
  val0 = analogRead(potpin9);
  val1 = analogRead(potpin8);
  val2 = analogRead(potpin7);
  val3 = analogRead(potpin6);

  val0 = map(val0, 1023, 0, 0, 180);
  val1 = map(val1, 1023, 0, 0, 180);
  val2 = map(val2, 0, 1023, 0, 180);
  val3 = map(val3, 0, 1023, 0, 180);

  myservo9.write(val0);
  myservo8.write(val1);
  myservo7.write(val2);
  myservo6.write(val3);

  delay(15);
}
```
