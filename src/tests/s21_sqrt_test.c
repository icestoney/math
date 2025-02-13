#include "s21_math_tests.h"

START_TEST(s21_sqrt_test_1) {
  double test_value = 100000000.0;
  for (double i = 1; i != S21_TOLERANCE; i /= 10)
    ck_assert_ldouble_eq_tol(s21_sqrt(test_value * i), sqrtl(test_value * i),
                             S21_PRECISION);
}
END_TEST

START_TEST(s21_sqrt_test_2) {
  double test_value = -100000000000000000000000000000000.0;
  ck_assert_int_eq(isnan(s21_sqrt(test_value)), isnan(sqrtl(test_value)));
  ck_assert_int_eq(signbit(s21_sqrt(test_value)), signbit(sqrtl(test_value)));
}
END_TEST

Suite *s21_sqrt_tests(void) {
  Suite *suite = suite_create("s21_sqrt_tests_suite");
  TCase *tcase = tcase_create("s21_sqrt_tests_tcase");

  tcase_add_test(tcase, s21_sqrt_test_1);
  tcase_add_test(tcase, s21_sqrt_test_2);

  suite_add_tcase(suite, tcase);
  return suite;
}