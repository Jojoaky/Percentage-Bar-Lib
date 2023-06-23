# PercentageBar Library

The Percentage Bar library provides a simple way to generate percentage bars in ascii from for arduino projects.

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
   // Arguments: length
   PercentageBar bar2(10, "-{", "#", " ", "}-");
   // Arguments: length, start, filled, empty, end

3. Set the percentage value using **setPercentage()**:
   ```cpp
      bar.setPercentage(50);
4. Generate the percentage bar using **generate()**:
     ```cpp
      bar.generate();
      String progressBar = bar.generate();
5. Access the generated percentage bar and the current percentage using **getBar()** and **getPercentage()** respectively:
     ```cpp
      String progressBar = bar.getBar();
      float percentage = bar.getPercentage();

## Examples
   The library provides example sketches that demonstrate various use cases.  
   You can find them in the `examples` folder or by clicking ***"File"*** -> ***"Examples"*** -> ***"Percentage Bar"***
   There you can find:
   
   -  **GetStarted:** Basic use of the library
   -  **AllFeatues:** Explains all the featues of the library
   -  **AnalogRead:** Example on how to use the library with a potentiometre
   -  **LcDisplay:** Example on how to use the library with a lcd


## Contributing
   Contributions to the PercentageBar library are welcome!  
   If you find any issues or have suggestions for improvements, please open an issue or submit a pull request on the GitHub repository.
