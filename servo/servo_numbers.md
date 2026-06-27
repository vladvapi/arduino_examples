```cpp
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define s0min 590
#define s0max 1530

#define s1min 610
#define s1max 1500

#define s2min 590
#define s2max 1430

#define s3min 620
#define s3max 1530

#define s4min 670
#define s4max 1600

#define s5min 600
#define s5max 1450

#define s6min 770
#define s6max 1710

#define s7min 820
#define s7max 2280

#define freq 50



int servonum = 7;

int beatrice[8][2] = {
  {s0min, s0max},
  {s1min, s1max},
  {s2min, s2max},
  {s3min, s3max},
  {s4min, s4max},
  {s5min, s5max},
  {s6min, s6max},
  {s7min, s7max}
};

void setup() {
  Serial.begin(9600);
  pwm.begin();

   pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(freq);

  delay(10);

  for(int i = 0; i <= 6; i++){
    pwm.writeMicroseconds(i, beatrice[i][1]);
    delay(500);
  }
}

void loop() {
  // for (int microsec = s7min; microsec < s7max; microsec++) {
  //   pwm.writeMicroseconds(servonum, microsec);
  // }

  // delay(500);

  // for (int microsec = s7max; microsec > s7min; microsec--) {
  //   pwm.writeMicroseconds(servonum, microsec);
  // }

  // delay(500);
}
```
