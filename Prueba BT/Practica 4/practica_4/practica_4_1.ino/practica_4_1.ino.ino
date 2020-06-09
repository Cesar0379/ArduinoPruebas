int LED = 3;
int BRILLO;
int POT =0;

void setup() {
  pinMode (LED, OUTPUT);
  //lAS ENTRADAS ANALOGICAS NO REQUIEREN INICIALIZACIÓN
}

void loop() {
  BRILLO= analogRead(POT)/4;
  analogWrite(LED, BRILLO);
}
