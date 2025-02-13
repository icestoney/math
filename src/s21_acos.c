#include "s21_math.h"

long double s21_acos(double x) {
  long double s = -(S21_NAN);  // (x > 1. || x < -1.) / nan
  if (0. < x && x < 1.) {
    s = s21_atan(s21_sqrt(1 - x * x) / x);
  } else if (-1. < x && x < 0.) {
    s = S21_PI + s21_atan(s21_sqrt(1 - x * x) / x);
  } else if (x == 0.) {
    s = S21_PI / 2;
  } else if (x == 1.) {
    s = 0.;
  } else if (x == -1.) {
    s = S21_PI;
  }

  return s;
}
