#define BUZZER 2
#include <LiquidCrystal_I2C.h>

const int col = 16;
const int row = 2;
LiquidCrystal_I2C lcd(0x27, col, row);


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A5, INPUT);
pinMode(LED_BUILTIN, OUTPUT);
pinMode(BUZZER, OUTPUT);


}

//untuk kedip led
  void ledBlink (int speed){
  digitalWrite(LED_BUILTIN, LOW);
}

//suara 
void soundAlert(int speed, int freq) {
  tone (BUZZER, freq);
  delay(speed);
  noTone(BUZZER);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensor_value = analogRead(A5);
  Serial.println(sensor_value);
  delay(1000);
  ledBlink(500);
  



  if(sensor_value < 20){
    ledBlink(500);
    soundAlert(500, 200);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);

  }

}
