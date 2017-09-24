/* Funduino Nano Shield (Funduino-NANO-006_V3) [B026] : http://rdiot.tistory.com/35 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004

void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");

  delay(1000);

  lcd.clear();
}

void loop()
{
 
  lcd.setCursor(0,0);
  lcd.print("B026:Nano Shield");

  lcd.setCursor(0,1);
  lcd.print("SCL/SDA Test");

}
