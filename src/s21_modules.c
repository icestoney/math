#include "s21_math.h"

long double floor_ceil(double x) {
  double result;
  if (S21_IS_INF(x) || S21_IS_NAN(x) || x == S21_DBL_MAX)
    result = x;
  else {
    result = s21_dtoi(x);
    if (result > x && x > 0) {
      result--;
    } else if (result < x && x < 0) {
      result++;
    }
  }
  return (long double)result;
}

double s21_dtoi(double x) {
  double result;
  char buffer_number[S21_BUFFER_SIZE] = {0};
  sprintf(buffer_number, "%.0lf", x);
  sscanf(buffer_number, "%lf", &result);
  return result;
}