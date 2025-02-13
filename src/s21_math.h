#ifndef S21_MATH_H
#define S21_MATH_H

#include <stdio.h>

#define S21_PI \
  ((long double)3.1415926535897932384626433832795028841971693993751058209749445923L)
#define S21_NAN 0.0f / 0.0f
#define S21_INF_POS +1.0f / 0.0f
#define S21_INF_NEG -1.0f / 0.0f
#define S21_INT_MAX 2147483647
#define S21_INT_MIN (-S21_INT_MAX - 1)
#define S21_UINT_MAX (S21_INT_MAX * 2U + 1U)
#define S21_LLONG_MAX 0x7fffffffffffffffLL
#define S21_ULLONG_MAX (S21_LLONG_MAX * 2ULL + 1ULL)
#define S21_DBL_MAX ((double)1.79769313486231570814527423731704357e+308L)
#define S21_DBL_MIN ((double)2.22507385850720138309023271733240406e-308L)
#define S21_LDBL_MAX ((long double)1.18973149535723176502126385303097021e+4932L)
#define S21_LDBL_MIN ((long double)3.36210314311209350626267781732175260e-4932L)
#define S21_EPS 1.19209289550781250000000000000000000e-7F
#define S21_TOLERANCE 1e-17
#define S21_INT_TOL 17
#define S21_PRECISION 1e-6
#define S21_LOG_10 2.302585092994045684017991454684364208L
#define S21_LOG_2 0.693147180559945309417232121458176568L
#define S21_LDBL_EXP 2.718281828459045235360287471352662498L
#define S21_BUFFER_SIZE 400

#define S21_IS_NAN(x) (x != x)
#define S21_IS_INF(x) (x == S21_INF_NEG || x == S21_INF_POS)
#define S21_IS_FIN(x) __builtin_isfinite(x)

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);

// pow additudes
int s21_is_int(double x);
long double s21_pow_int(double base, double exp);
long double s21_pow_float(double base, double exp);
int s21_pow_errcheck(double base, double exp, long double *result);

// atan additudes
long double cal_atan(double x);

// roundings
long double floor_ceil(double x);

// trim fractional part of double
double s21_dtoi(double x);

#endif