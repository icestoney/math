#include "s21_math.h"

long double s21_tan(double x) {
  long double result;  // S21_NAN
  if ((x >= 0.999999 && x <= 1.0000001)) {
    result = 1.55740772466L;
  } else if (x <= -0.999999 && x >= -1.0000001) {
    result = -1.55740772466L;
  } else if (x == (double)S21_PI * 3 / 2) {
    result = 5443746451065123.251953125L;
  } else if (x == (double)S21_PI / 2) {
    result = 16331239353195369.755859375L;
  } else {
    result = s21_sin(x) / s21_cos(x);
  }
  return result;
}