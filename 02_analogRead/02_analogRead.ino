void setup() {
  Serial.begin(9600);
}

void loop() {
  int a1 = analogRead(A1);
  Serial.println(a1);
}
