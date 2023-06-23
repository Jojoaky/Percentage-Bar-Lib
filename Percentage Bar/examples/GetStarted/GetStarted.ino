#include <PercentageBar.h>

PercentageBar bar(10);  // Length of the percentage bar
// percentage bar will look like this (with 50%):
// [=====     ]

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    // Wait until the Serial monitor is available
    // This is necessary for boards with native USB support like the Arduino Leonardo
  }
  Serial.println();
  Serial.println("Percentage bar:");

  // Set the percentage of the bar to 50%
  bar.setPercentage(50);

  // Generate the percentage bar
  bar.generate();

  // Print the generated bar to the serial monitor
  Serial.println(bar.getBar());
}

void loop() {
  // Do nothing
}
