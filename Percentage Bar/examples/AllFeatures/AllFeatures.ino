#include <PercentageBar.h>

PercentageBar bar(10);
PercentageBar bar2(10, "-{", "#", " ", "}-");
// Arguments: length, start, filled, empty, end
// bar will look like this (with 50%):
// bar:   [=====     ]
// bar2: -{#####     }-

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    // Wait until the Serial monitor is available
    // This is necessary for boards with native USB support like the Arduino Leonardo
  }
  Serial.println();
  Serial.println("Percentage Bars:");
  Serial.println();

  // Set the percentage of bar the 75% and of bar2 to 33%
  bar.setPercentage(75);
  bar2.setPercentage(33);

  // Generate the percentage bars
  bar.generate();
  bar2.generate();

  // Print the generated bars to the serial monitor
  Serial.print("bar: ");
  Serial.print(bar.getPercentage());
  Serial.print("% ");
  Serial.println(bar.getBar());

  Serial.print("bar2: ");
  Serial.print(bar2.getPercentage());
  Serial.print("% ");
  Serial.println(bar2.getBar());

  Serial.println();


  // Change the Length of the percentage bar
  bar.setLength(20);

  // Change the style of the percentage bar
  bar.setStyle("", "█", "-", "");
  // Arguments: start, filled, empty, end
  // bar will look like this (with 50%):
  // █████-----

  Serial.println("Modified bar: ");
  Serial.println(bar.generate());
}

void loop() {
  // Do nothing
}
