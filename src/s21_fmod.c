#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double fmod;
  if (S21_IS_INF(x) || S21_IS_NAN(x) || S21_IS_NAN(y)) {
    if (S21_IS_INF(x))
      fmod = S21_NAN;
    else if (S21_IS_NAN(x))
      fmod = x;
    else
      fmod = y;
  } else {
    int sign = 0;
    if (x < 0) {
      sign = 1;
      x = s21_fabs(x);
    }
    if (y < 0) {
      y = s21_fabs(y);
    }
    if (y == 0) {
      if (S21_LDBL_MIN / y < 0)
        fmod = -(S21_NAN);
      else
        fmod = S21_NAN;
    } else if ((y == S21_DBL_MIN) || (x == y) || y < 1e-25) {
      fmod = 0;
    } else if (x < y) {
      fmod = x;
    } else {
      long double l_x = x;
      long double l_y = y;
      unsigned long long int d = l_x / (S21_ULLONG_MAX * l_y);
      while (d >= 1) {
        l_x -= d * S21_ULLONG_MAX * l_y;
        d = l_x / (S21_ULLONG_MAX * l_y);
      }
      unsigned long long int i = l_x / l_y;
      fmod = l_x - l_y * i;
    }
    if (sign == 1) {
      fmod *= -1;
    }
  }
  return fmod;
}