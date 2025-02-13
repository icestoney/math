#include "s21_math.h"

long double s21_ceil(double x) {
  long double result = floor_ceil(x);
  return result + (x > 0 && x != result);
}