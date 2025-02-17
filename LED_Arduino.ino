#define ledRed1 2
#define ledGreen 3
#define ledBlue 4
#include <LiquidCrystal_I2C.h>

const int col = 16;
const int row = 2;
LiquidCrystal_I2C lcd(0x27, col, row);

int position = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledRed1, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(7, 1);
  lcd.print("Active");
  lcd.setCursor(9, 2);
  lcd.print("<3");
  delay(1000);
  lcd.clear();
}
void loop() {

  // put your main code here, to run repeatedly:
  lcd.clear();
  //lcd comand
  delay(10);

  lcd.setCursor(position, 1);
  lcd.print("Hai");
  lcd.setCursor(position, 2);
  lcd.print("<3");  
  position +=1;
  if ( position < 0 || position >= col) {
    position = 0;
  }
  delay (1000);
}
