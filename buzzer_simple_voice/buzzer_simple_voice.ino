int p = 9;

void setup() {
 pinMode(p, OUTPUT);
}

void loop() {
  tone(p, 500);
  delay(2000);

  tone(p, 1000);
  delay(500);
}
