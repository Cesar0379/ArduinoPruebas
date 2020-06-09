int trig = 10;
int eco = 9;
int rele = 3;
int distancia;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode (eco, INPUT);
  pinMode (rele, OUTPUT);
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
    digitalWrite(rele, !digitalRead(rele));
    }
}
