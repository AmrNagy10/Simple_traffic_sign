void setup() {
  pinMode(9 , OUTPUT);
  pinMode(10 , OUTPUT);
  pinMode(11 , OUTPUT);

}

void loop() {
  digitalWrite(9 , HIGH);
  delay(1000);
  digitalWrite(9 , LOW);
  delay(100);
  digitalWrite(10 , HIGH);
  delay(400);
  digitalWrite(10 , LOW);
  delay(400);
  digitalWrite(10 , HIGH);
  delay(400);
  digitalWrite(10 , LOW);
  delay(100);
  digitalWrite(11 , HIGH);
  delay(600);
  digitalWrite(11 , LOW);
}
