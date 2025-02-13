#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 1.L;
  if (S21_IS_NAN(x))
    result = -(S21_NAN);
  else if (x == S21_INF_POS)
    result = S21_INF_POS;
  else if (x == S21_INF_NEG)
    result = 0;
  else {
    int sign = 0;
    if (x < 0) {
      sign = 1;
      x *= -1;
    }
    long double arg = (long double)x;
    long double next = 1.L;
    long double i = 1.L;
    int exit = 0;
    while (s21_fabs(next) > S21_LDBL_MIN && exit == 0) {
      next *= arg / i;
      i++;
      result += next;
      if (result > S21_LDBL_MAX) {
        result = S21_INF_POS;
        exit = 1;
      }
    }
    if (sign) {
      result = 1.L / result;
    }
  }
  return result;
}
