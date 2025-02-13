#include "s21_math.h"

long double s21_fabs(double x) {
  if (S21_IS_NAN(x))
    x = -(S21_NAN);
  else if (x < 0)
    x = -(x);
  return (long double)x;
}