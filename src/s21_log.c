#include "s21_math.h"

long double s21_log(double x) {
  long double result = 0;
  if (x == S21_INF_POS)
    result = S21_INF_POS;
  else if (x == S21_INF_NEG || x < 0)
    result = -(S21_NAN);
  else if (x == 0)
    result = S21_INF_NEG;
  else if (S21_IS_NAN(x))
    result = x;
  else {
    int e_pow = 0;
    while (x >= S21_LDBL_EXP) {
      x /= S21_LDBL_EXP;
      e_pow++;
    }
    for (long double i = 1; i < S21_DBL_MAX; i += i) {
      long double prev = 0;
      prev = result;
      result = prev + 2 * (x - s21_exp(prev)) / (x + s21_exp(prev));
    }
    result += e_pow;
  }
  return result;
}