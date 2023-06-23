# PercentageBar Library

The PercentageBar library provides a simple and customizable way to generate percentage bars for visual representation of progress or levels.

## Installation

1. Download the latest release from the [GitHub repository](https://github.com/JoJoaky/Percentage-Bar-Lib).
2. Make sure that there are no subfolders called Percentage Bar

## Usage

1. Include the `PercentageBar` library in your Arduino sketch:
   ```cpp
   #include <PercentageBar.h>

    Create an instance of the PercentageBar class, specifying the desired length and optional styling:

    cpp

PercentageBar bar(10);  // Length of the percentage bar

Set the percentage value using setPercentage():

cpp

bar.setPercentage(50);

Generate the percentage bar using generate():

cpp

String progressBar = bar.generate();

Access the generated percentage bar and the current percentage using getBar() and getPercentage() respectively:

cpp

    String progressBar = bar.getBar();
    float percentage = bar.getPercentage();

For more advanced usage and customization options, refer to the library documentation.
Examples

The library provides example sketches that demonstrate various use cases. You can find them in the examples folder.
Contributing

Contributions to the PercentageBar library are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request on the GitHub repository.
License

This library is licensed under the MIT License.
