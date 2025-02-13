#include "s21_math.h"

long double s21_sqrt(double x) {
  long double res = S21_NAN;
  if (x >= 0) res = s21_pow(x, 0.5);
  return res;
}