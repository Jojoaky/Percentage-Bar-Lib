#include <PercentageBar.h>

const int analogPin = A0;

PercentageBar bar(20);  // Length of the percentage bar
// The percentage bar will look like this (with 50%):
// [==========          ]

int value;
int lastValue;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    // Wait until the Serial monitor is available
    // This is necessary for boards with native USB support like the Arduino Leonardo
  }
  Serial.println();
  Serial.println("AnalogRead to percentage bar:");
}

void loop() {
  // Set the value to be the analogValue as a percentage
  value = map(analogRead(analogPin), 0, 1023, 0, 100);

  // Calculate the difference between the current value and the last value
  int difference = value - lastValue;
  difference = abs(difference);

  if (difference > 5) {
    // 5 is the accuracy of our percentage bar (100 divided by the length of our bar)
    
    // Set the percentage of our bar to the current value
    bar.setPercentage(value);

    // Generate the percentage bar
    bar.generate();

    // Print the generated bar to the serial monitor
    Serial.println(bar.getBar());

    // Update the last value with the current value for the next iteration
    lastValue = value;

    // Wait 0.1 seconds
    delay(100);
  }
}
