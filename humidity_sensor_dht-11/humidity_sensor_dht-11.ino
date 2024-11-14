#include <stDHT.h>
DHT sens(DHT11);

void setup() {
  Serial.begin(57600);
  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
}

void loop() {
  int t = sens.readTemperature(2);
  int h = sens.readHumidity(2);
  delay(2000);

  Serial.print("Hum: ");
  Serial.print(h);
  Serial.print(" %. ");
  Serial.print("Temp: ");
  Serial.print(t);
  Serial.println(" C. ");
}
