int s1 = 3;
int s2 = 5;
int led1 = 7;
int led2 = 8;
int led3 = 9;
int led4 = 10;
int a;
int b;
int cont = 0;

void setup() {
pinMode(s1, INPUT);  // put your setup code here, to run once:
pinMode(s2,INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}

void loop() {
  a = digitalRead(s1);
  b = digitalRead(s2);

if (a == HIGH){
  
  
  digitalWrite(led1, HIGH);
  delay (3000);
  digitalWrite(led1, LOW);
  delay (300);
    digitalWrite(led1, HIGH);
  delay (3000);
  digitalWrite(led1, LOW);
  delay (700);
    digitalWrite(led1, HIGH);
  delay (3000);
  digitalWrite(led1, LOW);
  delay (700);
 digitalWrite(led1, HIGH);
  delay (3000);
  digitalWrite(led1, LOW);
  delay (700);
      digitalWrite(led1, HIGH);
  delay (3000);
  digitalWrite(led1, LOW);
  delay (700);
      digitalWrite(led1, HIGH);
  delay (3000);
  digitalWrite(led1, LOW);
  delay (700);

     digitalWrite(led1, HIGH);
  delay (700);
  digitalWrite(led1, LOW);
  delay (700);
      digitalWrite(led1, HIGH);
  delay (700);
  digitalWrite(led1, LOW);
  delay (700);
      digitalWrite(led1, HIGH);
  delay (700);
  
  digitalWrite(led1, LOW);
  delay (700);



  
 
  
 
    
    digitalWrite(led2, HIGH);
  delay (700);
  digitalWrite(led2, LOW);
  delay (700);
   digitalWrite(led1, HIGH);
  delay (700);
  digitalWrite(led1, LOW);
  delay (700);
 
  
 
}

}
