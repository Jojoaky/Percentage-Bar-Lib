# PercentageBar Library

The PercentageBar library provides a simple and customizable way to generate percentage bars for visual representation of progress or levels.

## Installation

1. Download the latest release from the [GitHub repository](https://github.com/JoJoaky/Percentage-Bar-Lib).
2. Extract the `Percentage-Bar-Lib.zip` file
3. Open Arduino IDE
4. Click *"Sketch"* -> *"Include Library"* -> *"Add .ZIP Library..."*
5. Select the `Percentage Bar.zip` in the folder you downloaded file of the library and click open

## Usage

1. Include the **PercentageBar** library in your Arduino sketch:

   ```cpp
   #include <PercentageBar.h>

2. Create an instance of the **PercentageBar** class, specifying the desired length and optional styling:
   ```cpp
   PercentageBar bar(10);
or
```cpp
   PercentageBar bar2(10, "-{", "#", " ", "}-");
   // Arguments: length, start, filled, empty, end
