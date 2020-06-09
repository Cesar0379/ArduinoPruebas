int A=6, B=7, C=10, D=9, E=8, F=5, G=4;
int i, j;


void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void mostrarDisplay(int c){
  for(i=4; i<=10; i++)
    digitalWrite(i, HIGH);
    switch(c){
      case 0: digitalWrite(A, LOW);
              digitalWrite(B, LOW);
              digitalWrite(C, LOW);
              digitalWrite(D, LOW);
              digitalWrite(E, LOW);
              digitalWrite(F, LOW);
      break;
      case 1: digitalWrite(B, LOW);
              digitalWrite(C, LOW);
      break;
      case 2: digitalWrite(A, LOW);
              digitalWrite(B, LOW);
              digitalWrite(G, LOW);
              digitalWrite(E, LOW);
              digitalWrite(D, LOW);
      break;
      case 3: digitalWrite(A, LOW);
              digitalWrite(B, LOW);
              digitalWrite(C, LOW);
              digitalWrite(D, LOW);
              digitalWrite(G, LOW);
      break;
      case 4: digitalWrite(B, LOW);
              digitalWrite(C, LOW);
              digitalWrite(F, LOW);
              digitalWrite(G, LOW);
      break;
      case 5: digitalWrite(A, LOW);
              digitalWrite(C, LOW);
              digitalWrite(D, LOW);
              digitalWrite(F, LOW);
              digitalWrite(G, LOW);
      break;
      case 6: digitalWrite(A, LOW);
              digitalWrite(C, LOW);
              digitalWrite(D, LOW);
              digitalWrite(E, LOW);
              digitalWrite(F, LOW);
              digitalWrite(G, LOW);
      break;
      case 7: digitalWrite(A, LOW);
              digitalWrite(B, LOW);
              digitalWrite(C, LOW);
      break;
      case 8: digitalWrite(A, LOW);
              digitalWrite(B, LOW);
              digitalWrite(C, LOW);
              digitalWrite(D, LOW);
              digitalWrite(E, LOW);
              digitalWrite(F, LOW);
              digitalWrite(G, LOW);
      break;
      case 9: digitalWrite(A, LOW);
              digitalWrite(B, LOW);
              digitalWrite(C, LOW);
              digitalWrite(D, LOW);
              digitalWrite(F, LOW);
              digitalWrite(G, LOW);
      break;
      default:
      break;
    }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for (j=0; j<=9; j++){
    mostrarDisplay(j);
    delay (1000);
  }

}
