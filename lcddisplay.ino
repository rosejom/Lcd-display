#include <LiquidCrystal.h> 
int Contrast=10;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 void setup()
 {
    analogWrite(6,Contrast);
     
  } 
     void loop()
 { 
  
     lcd.begin(16, 2);
     lcd.print("Hello  World!!!");
    
 }