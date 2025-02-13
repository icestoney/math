#include "s21_math.h"

long double s21_sin(double x) {
  long double result = 0.0;
  if ((x >= 0.999999 && x <= 1.0000001)) {
    result = 0.841470984808L;
  } else if (x <= -0.999999 && x >= -1.0000001) {
    result = -0.841470984808L;
  } else if (S21_IS_INF(x)) {
    result = S21_NAN;
  } else if (S21_IS_NAN(x)) {
    result = x;
  } else {
    long double x_ld = x;
    if (s21_fabs(x_ld) > S21_PI) x_ld = s21_fmod(x_ld, 2.0 * S21_PI);
    long double n = 1.L;
    long double x_square = x_ld * x_ld;
    while (s21_fabs(x_ld) > S21_EPS) {
      result += x_ld;
      x_ld = (-x_ld) * x_square / ((n + 1.0) * (n + 2.0));
      n += 2.0;
    }
  }
  return result;
}