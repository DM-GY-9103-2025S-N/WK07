int ledState;
long long lastChange;

void setup() {
  // declare output pin
  pinMode(3, OUTPUT);

  ledState = LOW;
  lastChange = millis();
}

void loop() {
  // change output value every X seconds
  digitalWrite(3, ledState);

  if (millis() - lastChange > 500) {
    ledState = !ledState;
    lastChange = millis();
  }
}
