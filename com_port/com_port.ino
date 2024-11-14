void setup() {
  Serial.begin(9600);
  Serial.println("Hello pop!");
  Serial.println("Hello pup!");
}

void loop() {
  if (Serial.available() > 0) {
    int in_data = Serial.parseInt();
    Serial.println(in_data);
  }
}
