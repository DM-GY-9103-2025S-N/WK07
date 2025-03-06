int ledState;
long long lastChange;

void setup() {
  // declare output pin
  pinMode(3, OUTPUT);

  ledState = 0;
  lastChange = millis();
}

void loop() {
  // change output value every X seconds
  analogWrite(3, ledState);

  if (millis() - lastChange > 10) {
    ledState += 1;

    if(ledState > 255) {
      ledState = 0;
    }

    lastChange = millis();
  }
}
