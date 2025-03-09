# Example (with button):
```cpp
int buttonPin = 7;
int buzzerPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin);

  switch(buttonState){
    case LOW: 
      digitalWrite(buzzerPin, HIGH);
      break;
    case HIGH:
      digitalWrite(buzzerPin, LOW);
      break;
  }
}
```
