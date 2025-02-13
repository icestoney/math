#include "s21_math.h"

long double s21_asin(double x) {
  long double s = x;
  if (x < -1. || x > 1.) {
    s = -(S21_NAN);
  } else if (-1. < x && x < 1.) {
    s = s21_atan(x / s21_sqrt(1 - x * x));
  } else if (x == 1.) {
    s = S21_PI / 2;
  } else if (x == -1.) {
    s = -S21_PI / 2;
  }

  return s;
}
