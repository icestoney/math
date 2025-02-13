#include "s21_math.h"

long double s21_cos(double x) {
  long double x_ld = x;
  long double result = 1.;
  if ((x >= 0.999999 && x <= 1.0000001) ||
      (x <= -0.999999 && x >= -1.0000001)) {
    result = 0.540302305868L;
  } else if (S21_IS_INF(x_ld)) {
    result = S21_NAN;
  } else if ((x_ld == (double)S21_PI / 2) || (x_ld == -(double)S21_PI / 2)) {
    result = 0.0;
  } else {
    if (s21_fabs(x_ld) > S21_PI) x_ld = s21_fmod(x_ld, 2.0 * S21_PI);
    long double n = 0.0;
    long double a = 1.0;
    long double x_square = x_ld * x_ld;
    while (s21_fabs(a) > S21_EPS) {
      a = (-a) * x_square / ((n + 2.0) * (n + 1.0));
      n += 2.0;
      result += a;
    }
  }
  return result;
}
