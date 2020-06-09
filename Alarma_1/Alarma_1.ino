#define TOUCH 2
#define LASER 3
#define ZUMBADOR 4

bool encendido;

void setup() {
  pinMode(LASER, OUTPUT);
  pinMode(ZUMBADOR, OUTPUT);
  digitalWrite(LASER, LOW);
  digitalWrite(ZUMBADOR, HIGH);//es contrario en este zumbador, es apagado
  encendido=false;
}

void loop() {

  if(digitalRead(TOUCH)==HIGH){
    encendido=!encendido;
    if (!encendido)
      digitalWrite(ZUMBADOR, HIGH);//es contrario en este zumbador es apagado
    digitalWrite(LASER,!digitalRead(LASER));
    delay(500);
  }
  if (encendido){
    if(analogRead(1)<400)
      digitalWrite(ZUMBADOR,HIGH);//es contrario en este zumbador es apagado
    else
      digitalWrite(ZUMBADOR,LOW);//es contrario en este zumbador es encendido
  }
}
