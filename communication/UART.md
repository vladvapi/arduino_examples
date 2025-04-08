# UART communication

```cpp
const int buttonPin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {
    char data_rcvd = Serial.read();

    if(data_rcvd == '1'){
      digitalWrite(LED_BUILTIN, HIGH);
    }

    if(data_rcvd == '0'){
      digitalWrite(LED_BUILTIN, LOW);
    }
  }

  int buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH) {
    Serial.write('0');
    // digitalWrite(LED_BUILTIN, LOW);
  }

  if(buttonState == LOW) {
    Serial.write('1');
    // digitalWrite(LED_BUILTIN, HIGH);
  }
}
```
