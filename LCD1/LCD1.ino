#include <LiquidCrystal.h>

LiquidCrystal lcd(7,6,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*lcd.setCursor(0,0);
  lcd.print("Hola, han pasado.");
  lcd.setCursor(0,1);
  lcd.print(millis()/1000);
  lcd.print (" seg.");*/
  
  /*lcd.setCursor(0,0);
  lcd.print("Alarma activa !");
  lcd.display();
  delay(500);
  lcd.noDisplay();
  delay (500);*/

  /*lcd.setCursor(0,0);
  lcd.print("Ingrese clave");
  lcd.setCursor(0,1);
  lcd.cursor();
  delay(500);
  lcd.noCursor();
  delay(500);*/

  lcd.setCursor(2,0);
  lcd.print("Prueba Scroll");
  lcd.scrollDisplayLeft();
  delay(1000);
  
}
