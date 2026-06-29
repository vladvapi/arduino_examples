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

int k = 0;

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

int digits[10][7]= {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

// sol mea:

void display_digit(int d){
  for(int servo = 0; servo < 7; servo++){
    pwm.writeMicroseconds(servo, beatrice[servo][digits[d][servo]]);
    delay(20);
  }
}

// sol tata:

void display_digit2(int d){
  int* digit = digits[d];

  for(int servo = 0; servo < 7; servo++){
    int position = digit[servo]; // 0 or 1
    int value = beatrice[servo][position]; // min or max
    pwm.writeMicroseconds(servo, value);
    delay(20);
  }
}

void setup() {
  Serial.begin(9600);
  pwm.begin();
 
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(freq);

  delay(10); 
}

void loop() {
  display_digit2(k);

  k++;

  if(k > 9) k = 0;

  delay(1000);
}
```
