#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double result = 0;
  if (!s21_pow_errcheck(base, exp, &result)) {
    if (s21_is_int(exp)) {
      result = s21_pow_int(base, exp);
    } else {
      result = s21_pow_float(base, exp);
    }
  }
  return result;
}

int s21_is_int(double x) { return (x - s21_dtoi(x) == 0) ? 1 : 0; }

long double s21_pow_int(double base, double exp) {
  long double l_exp = exp;
  long double l_base = base;
  long double result = 1.0;
  if (l_exp > 0) {
    while (l_exp-- >= 1 && !(S21_IS_INF(result))) {
      result *= l_base;
    }
  } else {
    while (l_exp++ <= -1) {
      result /= l_base;
    }
  }
  if (S21_IS_INF(result)) {
    result = S21_INF_POS;
  }
  return result;
}

long double s21_pow_float(double base, double exp) {
  return s21_exp(exp * s21_log(s21_fabs(base)));
}

int s21_pow_errcheck(double base, double exp, long double *result) {
  int error_found = 0;
  int b_is_nan = S21_IS_NAN(base);
  int b_is_fin = S21_IS_FIN(base);
  int e_is_nan = S21_IS_NAN(exp);
  int e_is_fin = S21_IS_FIN(exp);
  int e_scope = s21_fabs(exp - s21_floor(exp)) <= S21_TOLERANCE;

  // 0, exp: отрицательное нечётное целое число
  if (b_is_fin && base == 0.0 && base <= S21_TOLERANCE && e_scope &&
      s21_dtoi(exp) < 0 && s21_fmod(s21_dtoi(exp), 2)) {
    *result = S21_INF_POS;
    error_found = 1;
  }

  //-0, exp: отрицательное нечётное целое число
  if (b_is_fin && base == -0.0 && base <= S21_TOLERANCE && e_scope &&
      s21_dtoi(exp) < 0 && s21_fmod(s21_dtoi(exp), 2)) {
    *result = S21_INF_NEG;
    error_found = 1;
  }

  // 0, exp: отрицательное, конечное, чётное целое или нецелое число
  if (b_is_fin && s21_fabs(base) < S21_TOLERANCE && e_is_fin &&
      ((e_scope && !(s21_fmod(s21_dtoi(exp), 2))) || !e_scope)) {
    if (base == 0) {
      if (exp == 0) {
        *result = 1;
      } else if (exp > 0) {
        *result = 0;
      } else {
        *result = S21_INF_POS;
      }
    }
    error_found = 1;
  }

  // 0, -inf
  if (b_is_fin && s21_fabs(base) < S21_TOLERANCE && !e_is_nan && !e_is_fin &&
      exp < 0) {
    *result = S21_INF_POS;
    error_found = 1;
  }

  // 0, exp: положительное нечётное целое число
  if (b_is_fin && base > 0 && base <= S21_TOLERANCE && e_scope &&
      s21_fmod(s21_dtoi(exp), 2)) {
    *result = +0.0L;
    error_found = 1;
  }

  //-0, exp: положительное нечётное целое число
  if (b_is_fin && base < 0 && base >= -S21_TOLERANCE && e_scope &&
      s21_fmod(s21_dtoi(exp), 2)) {
    *result = -0.0L;
    error_found = 1;
  }

  // 0, exp: положительное нецелое число или чётное число
  if (exp > 0 && b_is_fin && s21_fabs(base) < S21_TOLERANCE &&
      ((!e_scope && s21_fabs(exp) > S21_TOLERANCE) ||
       (e_scope && !(s21_fmod(s21_dtoi(exp), 2))))) {
    *result = +0.0L;
    error_found = 1;
  }

  //-1, inf
  if (b_is_fin && s21_fabs(base + 1) < S21_TOLERANCE && !e_is_fin &&
      !e_is_nan) {
    *result = 1;
    error_found = 1;
  }

  //+1, exp
  if (b_is_fin && s21_fabs(base - 1) < S21_TOLERANCE) {
    *result = 1;
    error_found = 1;
  }

  // base, 0
  if (s21_fabs(exp) < S21_TOLERANCE && s21_fabs(base) > S21_TOLERANCE) {
    *result = 1;
    error_found = 1;
  }

  // base: 0+0 or 0-0, exp: 0+0 or 0-0
  if (s21_fabs(exp) < S21_TOLERANCE && s21_fabs(base) < S21_TOLERANCE &&
      base != 0) {
    *result = 1;
    error_found = 1;
  }

  // base: конечное и отрицательное число, exp: конечное, нецелое число
  if (!error_found && b_is_fin && base < -S21_TOLERANCE && e_is_fin &&
      !e_scope) {
    *result = S21_NAN;
    error_found = 1;
  }

  // base, -inf: |base|<1
  if (!error_found && s21_fabs(base) - 1 < S21_TOLERANCE && !e_is_nan &&
      !e_is_fin && exp < 0) {
    *result = S21_INF_POS;
    error_found = 1;
  }

  // base, -inf: |base|>1
  if (!error_found && s21_fabs(base) - 1 > S21_TOLERANCE && !e_is_nan &&
      !e_is_fin && exp < 0) {
    *result = +0.0L;
    error_found = 1;
  }

  // base, inf: |base|<1
  if (!error_found && s21_fabs(base) - 1 < S21_TOLERANCE && !e_is_nan &&
      !e_is_fin && exp > 0) {
    *result = +0.0L;
    error_found = 1;
  }

  // base, inf: |base|>1
  if (!error_found && s21_fabs(base) - 1 > S21_TOLERANCE && !e_is_nan &&
      !e_is_fin && exp > 0) {
    *result = S21_INF_POS;
    error_found = 1;
  }

  //-inf, exp: целое отрицательное нечётное число
  if (!b_is_nan && !b_is_fin && base < 0 && e_scope && exp < 0 &&
      s21_fmod(s21_dtoi(exp), 2) && !error_found) {
    *result = -0.0L;
    error_found = 1;
  }

  //-inf, exp: отрицательное число
  if (!b_is_nan && !b_is_fin && base < 0 &&
      ((!e_scope && exp < 0) ||
       (e_scope && exp < 0 && !(s21_fmod(s21_dtoi(exp), 2))))) {
    *result = +0.0L;
    error_found = 1;
  }

  //-inf, exp: целое нечётное число
  if (!b_is_nan && !b_is_fin && base < 0 &&
      (e_scope && exp > 0 && s21_fmod(s21_dtoi(exp), 2))) {
    *result = S21_INF_NEG;
    error_found = 1;
  }

  //-inf, exp: положительное число
  if (!b_is_nan && !b_is_fin && base < 0 &&
      ((!e_scope && exp > 0) ||
       (e_scope && exp > 0 && !(s21_fmod(s21_dtoi(exp), 2))))) {
    *result = S21_INF_POS;
    error_found = 1;
  }

  // inf, exp: отрицательное число
  if (!b_is_nan && !b_is_fin && base > 0 && exp < -S21_TOLERANCE) {
    *result = +0.0L;
    error_found = 1;
  }

  // inf, exp: положительное число
  if (!b_is_nan && !b_is_fin && base > 0 && exp > S21_TOLERANCE) {
    *result = S21_INF_POS;
    error_found = 1;
  }

  // nan
  if (((b_is_nan && exp) || (base != 1 && e_is_nan) ||
       (base < 0 && exp != s21_dtoi(exp) && e_is_fin))) {
    *result = S21_NAN;
    if (b_is_nan) {
      if (exp < 0)
        *result = -base;
      else if (exp > 0)
        *result = base;
    }
    if (base == 0 && e_is_nan) *result = -exp;
    error_found = 1;
  }

  return error_found;
}
