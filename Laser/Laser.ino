int LASER=2;

void setup() {
  pinMode(LASER,OUTPUT);

}

void loop() {
  digitalWrite(LASER,!digitalRead(LASER));
  delay(1000);

}
