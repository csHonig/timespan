//
// TODO Created by XXX on YYY.
//

#pragma once
#include <iostream>
using namespace std;

class TimeSpan {
  friend ostream &operator<<(ostream& output, const TimeSpan& timespan);

public:
  // explicit TimeSpan(int hour = 0, int minute = 0, int second = 0);
  explicit TimeSpan(double hour = 0, double minute = 0, double second = 0);
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
