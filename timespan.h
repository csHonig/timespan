//
// TODO Created by XXX on YYY.
//

#pragma once
#include <iostream>
using namespace std;

class TimeSpan {
  friend ostream &operator<<(ostream& output, const TimeSpan& timespan);

public:
  // explicit TimeSpan(int hours = 0, int minutes = 0, int seconds = 0);
  explicit TimeSpan(double hours = 0, double minutes = 0, double seconds = 0);
  // add
  TimeSpan operator+(const TimeSpan& timespan) const;
  // subtract
  TimeSpan operator-(const TimeSpan& timespan) const;
  // check equality
  bool operator==(const TimeSpan& timespan) const;
  // check if not equal
  bool operator!=(const TimeSpan& timespan) const;
  // multiply timespan by a number
  TimeSpan operator*(int number);

private:

};
