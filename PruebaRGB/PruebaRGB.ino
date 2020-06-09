#include <SoftwareSerial.h>

SoftwareSerial miBT(2, 3); // RX, TX
char dato;
int releBco = 4;
int releRed= 5;
int releGreen=6;
int releBlue=7;
int eco = 9;
int trig = 10;

int distancia;

void setup() {
  // put your setup code here, to run once:
  miBT.begin(38400);
  pinMode(trig, OUTPUT);
  pinMode (eco, INPUT);
  pinMode (releBco, OUTPUT);
  pinMode (releRed, OUTPUT);
  pinMode (releGreen, OUTPUT);
  pinMode (releBlue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delay (500);
  digitalWrite(trig, LOW);
    
  //pulseIn devuelve la duración del pulso
  //determinamos la distancia del pulso(duracion/58,2)
  distancia=pulseIn(eco, HIGH)/58.2;
  
  if (distancia<=5 && distancia >0){
    digitalWrite(releBco, !digitalRead(releBco));
    }
  
  if (miBT.available()){
    dato=miBT.read();
    switch(dato){
      case 'R': digitalWrite(releRed, !digitalRead(releRed));
      break;
      case 'G': digitalWrite(releGreen, !digitalRead(releGreen));
      break;
      case 'B': digitalWrite(releBlue, !digitalRead(releBlue));
      break;
      default:
      break;
    }
  }
}
