#ifndef PERCENTAGEBAR_H
#define PERCENTAGEBAR_H
#endif

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class PercentageBar {
public:
  PercentageBar(int length, String start = "[", String filled = "=", String empty = " ", String end = "]");

  void setPercentage(float percentage);
  void setStyle(String start = "[", String filled = "=", String empty = " ", String end = "]");
  void setLength(int length);
  String getBar();
  String generate();
  float getPercentage();

private:
  String bar;
  int barLength;
  String fillString;
  String emptyString;
  String startString;
  String endString;
  float currentPercentage;
};


PercentageBar::PercentageBar(int length, String start, String filled, String empty, String end) {
  currentPercentage = 0;
  bar = "";

  barLength = length;
  fillString = filled;
  emptyString = empty;
  startString = start;
  endString = end;
}

void PercentageBar::setPercentage(float percentage) {
  currentPercentage = constrain(percentage, 0, 100);
}

void PercentageBar::setStyle(String start, String filled, String empty, String end) {
  fillString = filled;
  emptyString = empty;
  startString = start;
  endString = end;
}

void PercentageBar::setLength(int length) {
  barLength = max(length, 0);
}

String PercentageBar::getBar() {
  return bar;
}

String PercentageBar::generate() {
  bar = startString;

  int l;
  int percentageLength = constrain(map(currentPercentage, 0.0, 100.0, 0.0, barLength), 0.0, barLength);

  for (l = 0; l < percentageLength; l++) {
    bar += fillString;
  }

  for (l; l < barLength; l++) {
    bar += emptyString;
  }

  bar += endString;

  return bar;
}

float PercentageBar::getPercentage() {
  return currentPercentage;
}