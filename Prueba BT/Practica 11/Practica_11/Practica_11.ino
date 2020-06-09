int PIR = 2;
int LED = 3;
int ESTADO = 0;

void setup() {
  pinMode(PIR, INPUT);
  pinMode (LED, OUTPUT);
  delay (20000);
}

void loop() {
  ESTADO = digitalRead (PIR);
  if (ESTADO == HIGH){
    digitalWrite(LED, LOW);
    delay(4000);
  }
  else{
    digitalWrite(LED, HIGH);
  }
  // put your main code here, to run repeatedly:

}
