unsigned long last_time;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (millis() - last_time > 5000) {
    last_time = millis();
    Serial.println("bibabu");
  }
}

