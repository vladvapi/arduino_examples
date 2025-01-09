const int led = 9;
const int pot = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);

  int value = map(sensorValue, 0, 1023, 50, 3000);

  digitalWrite(led, HIGH);
  delay(value);
  digitalWrite(led, LOW);
  delay(value);
}
