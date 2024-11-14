const int RED_1 = 2;
const int YELLOW_1 = 3;
const int BLUE_1 = 4;
const int RED_2 = 5;
const int YELLOW_2 = 6;
const int BLUE_2 = 7;
const int DELAY_TIME = 500;

void setup() {
  pinMode(RED_1, OUTPUT);
  pinMode(YELLOW_1, OUTPUT);
  pinMode(BLUE_1, OUTPUT);
  pinMode(RED_2, OUTPUT);
  pinMode(YELLOW_2, OUTPUT);
  pinMode(BLUE_2, OUTPUT);
}

void loop() {
  digitalWrite(RED_1, HIGH);
  delay(DELAY_TIME);

  digitalWrite(RED_1, LOW);
  digitalWrite(YELLOW_1, HIGH);
  delay(DELAY_TIME);

  digitalWrite(YELLOW_1, LOW);
  digitalWrite(BLUE_1, HIGH);
  delay(DELAY_TIME);

  digitalWrite(BLUE_1, LOW);
  digitalWrite(RED_2, HIGH);
  delay(DELAY_TIME);

  digitalWrite(RED_2, LOW);
  digitalWrite(YELLOW_2, HIGH);
  delay(DELAY_TIME);

  digitalWrite(YELLOW_2, LOW);
  digitalWrite(BLUE_2, HIGH);
  delay(DELAY_TIME);

  digitalWrite(BLUE_2, LOW);

}
