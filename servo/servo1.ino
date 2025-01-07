#include <Servo.h>

Servo myservo;

const int MAX_SIZE = 10;
int positions[MAX_SIZE];
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);
  add_position(0);
  add_position(20);
  add_position(40);
  add_position(60);
  add_position(20);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < counter; i++){
    myservo.write(positions[i]);
    delay(700);
  }
}

void add_position(int pos) {
  positions[counter] = pos;
  counter++;
}
