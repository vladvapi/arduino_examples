# Digit Matrix on SA56

```cpp
const int ledPins[][10] = {
  {2, 3, 4, 5, 6, 7, 14},
  {3, 4, 14, 14, 14, 14, 14},
  {2, 3, 8, 6, 5, 14, 14, 14},
  {2, 3, 8, 4, 5, 14, 14},
  {3, 4, 8, 7, 14, 14, 14},
  {2, 4, 5, 7, 8, 14, 14},
  {2, 4, 5, 6, 7, 8, 14},
  {2, 3, 4, 14, 14, 14, 14},
  {2, 3, 4, 5, 6, 7, 8},
  {2, 3, 4, 5, 7, 8, 14},
};

const int size = 7;

void clear(){
  for(int j = 2; j < 9; j++){
    digitalWrite(j, HIGH);
  }
}

void setup() {
  // put your setup code here, to run once:
  for(int i = 2; i < 9; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < size; j++){
      digitalWrite(ledPins[i][j], LOW);
    }
    delay(300);

    clear();
  }
}
```
