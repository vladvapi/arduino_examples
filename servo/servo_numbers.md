```cpp
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define s0min 600
#define s0max 1530

#define s1min 600
#define s1max 1530

#define s2min 600
#define s2max 1490

#define s3min 590
#define s3max 1470

#define s4min 610
#define s4max 1510

#define s5min 660
#define s5max 1580

#define s6min 770
#define s6max 1700

#define s7min 820
#define s7max 2280

#define freq 50

uint8_t servonum = 7;

void setup() {
  Serial.begin(9600);
  pwm.begin();

   pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(freq);

  delay(10);
}

void loop() {
  for (uint16_t microsec = s7min; microsec < s7max; microsec++) {
    pwm.writeMicroseconds(servonum, microsec);
  }
  // pwm.writeMicroseconds(servonum, s0min);

  delay(500);

  for (uint16_t microsec = s7max; microsec > s7min; microsec--) {
    pwm.writeMicroseconds(servonum, microsec);
  }
  // pwm.writeMicroseconds(servonum, s0max);

  delay(500);
}

```
