# Joystick Read

```cpp
int buttonPin = 7;
int xPin = A0;
int yPin = A1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonStatus = digitalRead(buttonPin);
  int xVal = analogRead(xPin);
  int yVal = analogRead(yPin);

  char buffer[50];  // Allocate enough space
  sprintf(buffer, "X = %04d Y = %04d SW = %04d", xVal, yVal, buttonStatus);
  Serial.println(buffer);
}
```
