int sensor=2, laser=3;
 
void setup() {
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  pinMode(laser, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(sensor)){
    digitalWrite(laser, !digitalRead(laser));
    }
   Serial.print(analogRead(1));
   Serial.print("\n");
   delay(500);
  // put your main code here, to run repeatedly:

}
