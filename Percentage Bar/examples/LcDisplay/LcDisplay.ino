#include <PercentageBar.h>

#define I2C false  // Set to true if you use the I2C version of the display, that uses only 4 wires

//initialice the display with or without I2C
#if I2C
  #include <Wire.h>
  #include <LiquidCrystal_I2C.h>
  // Set the LCD address to 0x27 for a 16 chars and 2 line display
  LiquidCrystal_I2C lcd(0x27, 16, 2);
#else
  #include <LiquidCrystal.h>
  // Pins the lcd is connected to
  const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
#endif


PercentageBar bar(16);  // Length of the percentage bar
// The percentage bar will look like this (with 50%):
// [==========          ]

void setup() {
//initialice the display with or without I2C
#if I2C
  lcd.begin();
  lcd.backlight();
#else
  //16 chars and 2 line display
  lcd.begin(16, 2);
#endif
}

void loop() {
  //Loop percentage from 0 to 100
  for (int percentage = 0; percentage <= 100; percentage++) {
    //set the percentage of the bar
    bar.setPercentage(percentage);

    // Generate the percentage bar
    bar.generate();

    // Print Percentage to the first row:
    lcd.setCursor(0, 0);
    lcd.print(bar.getPercentage());
    lcd.print("%   "); // Space to clear the old text every time

    // Print bar to the second row:
    lcd.setCursor(0, 1);
    lcd.print(bar.getBar());

    // Don't use lcd.clear() to reduce flickering when updating the display a lot
    // We don't need it because we always override everything we printed before

    delay(100);
  }
}
