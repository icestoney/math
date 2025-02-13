#include "s21_math_tests.h"

START_TEST(s21_abs_test_1) {
  int s21_value = 10;
  int math_value = 10;
  ck_assert_int_eq(s21_abs(s21_value), abs(math_value));
}
END_TEST

START_TEST(s21_abs_test_2) {
  int s21_value = -10;
  int math_value = -10;
  ck_assert_int_eq(s21_abs(s21_value), abs(math_value));
}
END_TEST

START_TEST(s21_abs_test_3) {
  int s21_value = S21_INT_MAX;
  int math_value = S21_INT_MAX;
  ck_assert_int_eq(s21_abs(s21_value), abs(math_value));
}
END_TEST

START_TEST(s21_abs_test_4) {
  int s21_value = S21_INT_MIN;
  int math_value = S21_INT_MIN;
  ck_assert_int_eq(s21_abs(s21_value), abs(math_value));
}
END_TEST

START_TEST(s21_abs_test_5) {
  int s21_value = S21_UINT_MAX;
  int math_value = S21_UINT_MAX;
  ck_assert_int_eq(s21_abs(s21_value), abs(math_value));
}
END_TEST

START_TEST(s21_abs_test_6) {
  int s21_value = 10.5;
  int math_value = 10.5;
  ck_assert_int_eq(s21_abs(s21_value), abs(math_value));
}
END_TEST

START_TEST(s21_abs_test_7) {
  int s21_value = -10.5;
  int math_value = -10.5;
  ck_assert_int_eq(s21_abs(s21_value), abs(math_value));
}
END_TEST

START_TEST(s21_abs_test_8) {
  int s21_value = 10e+1;
  int math_value = 10e+1;
  ck_assert_int_eq(s21_abs(s21_value), abs(math_value));
}
END_TEST

Suite *s21_abs_tests(void) {
  Suite *suite = suite_create("s21_abs_tests_suite");
  TCase *tcase = tcase_create("s21_abs_tests_tcase");

  tcase_add_test(tcase, s21_abs_test_1);
  tcase_add_test(tcase, s21_abs_test_2);
  tcase_add_test(tcase, s21_abs_test_3);
  tcase_add_test(tcase, s21_abs_test_4);
  tcase_add_test(tcase, s21_abs_test_5);
  tcase_add_test(tcase, s21_abs_test_6);
  tcase_add_test(tcase, s21_abs_test_7);
  tcase_add_test(tcase, s21_abs_test_8);

  suite_add_tcase(suite, tcase);
  return suite;
}