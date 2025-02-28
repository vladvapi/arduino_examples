# LED Array

```cpp
int ledPins[] = {12, 11, 10, 9, 8, 7};

int size = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < size; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int j = 0; j < size - 1; j++){
    digitalWrite(ledPins[j], HIGH);
    delay(300);

    digitalWrite(ledPins[j], LOW);
    delay(300);
  }

  for(int j = size - 1; j > 0; j--){
    digitalWrite(ledPins[j], HIGH);
    delay(300);

    digitalWrite(ledPins[j], LOW);
    delay(300);
  }
}
```
