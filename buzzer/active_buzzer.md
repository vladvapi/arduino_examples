# Example:
```cpp
int buzzerPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(buzzerPin, 440); //A4
  delay(500);

  tone(buzzerPin, 494);
  delay(500);

  tone(buzzerPin, 523);
  delay(500);

  tone(buzzerPin, 587);
  delay(500);

  tone(buzzerPin, 659);
  delay(500);

  tone(buzzerPin, 698);
  delay(500);

  tone(buzzerPin, 784);
  delay(500);

  noTone(buzzerPin);
  delay(1000);
}
```
