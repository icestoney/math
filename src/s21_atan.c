#include "s21_math.h"

long double s21_atan(double x) {
  long double result;
  if ((x >= 0.999999 && x <= 1.000001)) {
    result = S21_PI / 4;
  } else if (x <= -0.999999 && x >= -1.000001) {
    result = -S21_PI / 4;
  } else if (x < 1.0 && x > -1.0) {
    result = cal_atan(x);
  } else if (x > 1.) {
    result = S21_PI / 2 - cal_atan(1 / x);
  } else {  // (x < -1.)
    result = -S21_PI / 2 - cal_atan(1 / x);
  }

  return result;
}

long double cal_atan(double x) {
  long double result = x;
  int n = 1;
  long double a = x;
  while (s21_fabs(a) > S21_EPS) {
    a = s21_pow(-1, n) * s21_pow(x, n * 2 + 1) / (n * 2 + 1);
    n += 1;
    result += a;
  }
  return result;
}
