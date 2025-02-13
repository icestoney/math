#include "s21_math_tests.h"

START_TEST(s21_fabs_test_1) {
  double s21_value = 10.0;
  double math_value = 10.0;
  ck_assert_ldouble_eq(s21_fabs(s21_value), fabsl(math_value));
}
END_TEST

START_TEST(s21_fabs_test_2) {
  double s21_value = -10.0;
  double math_value = -10.0;
  ck_assert_ldouble_eq(s21_fabs(s21_value), fabsl(math_value));
}
END_TEST

START_TEST(s21_fabs_test_3) {
  double s21_value = 2147483647.123123;
  double math_value = 2147483647.123123;
  ck_assert_ldouble_eq(s21_fabs(s21_value), fabsl(math_value));
}
END_TEST

START_TEST(s21_fabs_test_4) {
  double s21_value = -2147483648.123123;
  double math_value = -2147483648.123123;
  ck_assert_ldouble_eq(s21_fabs(s21_value), fabsl(math_value));
}
END_TEST

START_TEST(s21_fabs_test_5) {
  double s21_value = 4294967295.123123;
  double math_value = 4294967295.123123;
  ck_assert_ldouble_eq(s21_fabs(s21_value), fabsl(math_value));
}
END_TEST

START_TEST(s21_fabs_test_6) {
  double s21_value = 10e+1;
  double math_value = 10e+1;
  ck_assert_ldouble_eq(s21_fabs(s21_value), fabsl(math_value));
}
END_TEST

START_TEST(s21_fabs_test_7) {
  double s21_value = S21_NAN;
  double math_value = S21_NAN;
  ck_assert_int_eq(isnan(s21_fabs(s21_value)), isnan(fabsl(math_value)));
  ck_assert_int_eq(signbit(s21_fabs(s21_value)), signbit(fabsl(math_value)));
}
END_TEST

START_TEST(s21_fabs_test_8) {
  double s21_value = S21_INF_POS;
  double math_value = S21_INF_POS;
  ck_assert_int_eq(isinf(s21_fabs(s21_value)), isinf(fabsl(math_value)));
  ck_assert_int_eq(signbit(s21_fabs(s21_value)), signbit(fabsl(math_value)));
}
END_TEST

START_TEST(s21_fabs_test_9) {
  double s21_value = S21_INF_NEG;
  double math_value = S21_INF_NEG;
  ck_assert_int_eq(isinf(s21_fabs(s21_value)), isinf(fabsl(math_value)));
  ck_assert_int_eq(signbit(s21_fabs(s21_value)), signbit(fabsl(math_value)));
}
END_TEST

START_TEST(s21_fabs_test_10) {
  double s21_value = -(S21_NAN);
  double math_value = -(S21_NAN);

  ck_assert_int_eq(isnan(s21_fabs(s21_value)), isnan(fabsl(math_value)));
  ck_assert_int_eq(signbit(s21_fabs(s21_value)), signbit(fabsl(math_value)));
}
END_TEST

START_TEST(s21_fabs_test_11) {
  double s21_value = S21_DBL_MIN;
  double math_value = S21_DBL_MIN;
  ck_assert_ldouble_eq(s21_fabs(s21_value), fabsl(math_value));
}
END_TEST

Suite *s21_fabs_tests(void) {
  Suite *suite = suite_create("s21_fabs_tests_suite");
  TCase *tcase = tcase_create("s21_fabs_tests_tcase");

  tcase_add_test(tcase, s21_fabs_test_1);
  tcase_add_test(tcase, s21_fabs_test_2);
  tcase_add_test(tcase, s21_fabs_test_3);
  tcase_add_test(tcase, s21_fabs_test_4);
  tcase_add_test(tcase, s21_fabs_test_5);
  tcase_add_test(tcase, s21_fabs_test_6);
  tcase_add_test(tcase, s21_fabs_test_7);
  tcase_add_test(tcase, s21_fabs_test_8);
  tcase_add_test(tcase, s21_fabs_test_9);
  tcase_add_test(tcase, s21_fabs_test_10);
  tcase_add_test(tcase, s21_fabs_test_11);

  suite_add_tcase(suite, tcase);
  return suite;
}