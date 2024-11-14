int in1 = 2;
int in2 = 3;
int in3 = 4;
int in4 = 5;
const int dl = 5;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  digitalWrite(in1, LOW); //A/
  digitalWrite(in2, LOW); //B/
  digitalWrite(in3, HIGH); //A
  digitalWrite(in4, HIGH); //B
  delay(dl);

  digitalWrite(in1, LOW); //A/
  digitalWrite(in2, LOW); //B/
  digitalWrite(in3, LOW); //A
  digitalWrite(in4, HIGH); //B
  delay(dl);

  digitalWrite(in1, LOW); //A/
  digitalWrite(in2, HIGH); //B/
  digitalWrite(in3, HIGH); //A
  digitalWrite(in4, LOW); //B
  delay(dl);

  digitalWrite(in1, LOW); //A/
  digitalWrite(in2, HIGH); //B/
  digitalWrite(in3, LOW); //A
  digitalWrite(in4, LOW); //B
  delay(dl);

  digitalWrite(in1, LOW); //A/
  digitalWrite(in2, HIGH); //B/
  digitalWrite(in3, LOW); //A
  digitalWrite(in4, LOW); //B
  delay(dl);

  digitalWrite(in1, HIGH); //A/
  digitalWrite(in2, LOW); //B/
  digitalWrite(in3, LOW); //A
  digitalWrite(in4, LOW); //B
  delay(dl);

  digitalWrite(in1, HIGH); //A/
  digitalWrite(in2, LOW); //B/
  digitalWrite(in3, LOW); //A
  digitalWrite(in4, HIGH); //B
  delay(dl); 
  
  digitalWrite(in1, LOW); //A/
  digitalWrite(in2, LOW); //B/
  digitalWrite(in3, LOW); //A
  digitalWrite(in4, HIGH); //B
  delay(dl); 
}
