#include <SoftwareSerial.h>

SoftwareSerial miBT (10, 11);
char DATO = 0;
int LEDAZUL = 2;
int LEDAMARILLO = 3;
int BRILLO = 0;

void setup() {
  miBT.begin(38400);
  pinMode (LEDAZUL, OUTPUT);
  pinMode (LEDAMARILLO, OUTPUT);
}

void loop() {
  if (miBT.available()){
    DATO = miBT.read();
    if (DATO == '1')
     digitalWrite(LEDAZUL, !digitalRead(LEDAZUL));
     
    if (DATO == '2'){
        BRILLO = BRILLO + 10;
        if (BRILLO > 255)
          BRILLO = 255;
          analogWrite(LEDAMARILLO, BRILLO);
    }
    if (DATO == '3'){
      BRILLO = BRILLO - 10;
      if (BRILLO < 0)
        BRILLO = 0;
        analogWrite(LEDAMARILLO, BRILLO);
    }
  }
    
}
