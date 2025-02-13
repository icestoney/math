#include "s21_math_tests.h"

START_TEST(s21_exp_test_1) {
  double s21_value = S21_DBL_MAX;
  double math_value = S21_DBL_MAX;
  ck_assert_int_eq(isinf(s21_exp(s21_value)), isinf(expl(math_value)));
  ck_assert_int_eq(signbit(s21_exp(s21_value)), signbit(expl(math_value)));
}
END_TEST

START_TEST(s21_exp_test_2) {
  double s21_value = S21_DBL_MIN;
  double math_value = S21_DBL_MIN;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_3) {
  double s21_value = S21_NAN;
  double math_value = S21_NAN;
  ck_assert_int_eq(isnan(s21_exp(s21_value)), isnan(expl(math_value)));
  ck_assert_int_eq(signbit(s21_exp(s21_value)), signbit(expl(math_value)));
}
END_TEST

START_TEST(s21_exp_test_4) {
  double s21_value = S21_INF_NEG;
  double math_value = S21_INF_NEG;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_5) {
  double s21_value = S21_INF_POS;
  double math_value = S21_INF_POS;
  ck_assert_int_eq(isinf(s21_exp(s21_value)), isinf(expl(math_value)));
  ck_assert_int_eq(signbit(s21_exp(s21_value)), signbit(expl(math_value)));
}
END_TEST

START_TEST(s21_exp_test_6) {
  double s21_value = S21_LDBL_MAX + S21_TOLERANCE;
  double math_value = S21_LDBL_MAX + S21_TOLERANCE;
  ck_assert_int_eq(isinf(s21_exp(s21_value)), isinf(expl(math_value)));
  ck_assert_int_eq(signbit(s21_exp(s21_value)), signbit(expl(math_value)));
}
END_TEST

START_TEST(s21_exp_test_7) {
  double s21_value = S21_LDBL_MIN;
  double math_value = S21_LDBL_MIN;
  ck_assert_int_eq(isinf(s21_exp(s21_value)), isinf(expl(math_value)));
  ck_assert_int_eq(signbit(s21_exp(s21_value)), signbit(expl(math_value)));
}
END_TEST

START_TEST(s21_exp_test_8) {
  double s21_value = 0;
  double math_value = 0;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_9) {
  double s21_value = -100.1564;
  double math_value = -100.1564;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_10) {
  double s21_value = 100.1564;
  double math_value = 100.1564;
  char s21_result[S21_INT_TOL], math_result[S21_INT_TOL];
  snprintf(s21_result, sizeof(s21_result), "%LF", s21_exp(s21_value));
  snprintf(math_result, sizeof(math_result), "%LF", expl(math_value));
  ck_assert_str_eq(s21_result, math_result);
}
END_TEST

START_TEST(s21_exp_test_11) {
  double s21_value = -100.9564;
  double math_value = -100.9564;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_12) {
  double s21_value = 100.9564;
  double math_value = 100.9564;
  char s21_result[S21_INT_TOL], math_result[S21_INT_TOL];
  snprintf(s21_result, sizeof(s21_result), "%LF", s21_exp(s21_value));
  snprintf(math_result, sizeof(math_result), "%LF", expl(math_value));
  ck_assert_str_eq(s21_result, math_result);
}
END_TEST

START_TEST(s21_exp_test_13) {
  double s21_value = -101.1564;
  double math_value = -101.1564;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_14) {
  double s21_value = 101.1564;
  double math_value = 101.1564;
  char s21_result[S21_INT_TOL], math_result[S21_INT_TOL];
  snprintf(s21_result, sizeof(s21_result), "%LF", s21_exp(s21_value));
  snprintf(math_result, sizeof(math_result), "%LF", expl(math_value));
  ck_assert_str_eq(s21_result, math_result);
}
END_TEST

START_TEST(s21_exp_test_15) {
  double s21_value = -109.9564;
  double math_value = -109.9564;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_16) {
  double s21_value = 109.9564;
  double math_value = 109.9564;
  char s21_result[S21_INT_TOL], math_result[S21_INT_TOL];
  snprintf(s21_result, sizeof(s21_result), "%LF", s21_exp(s21_value));
  snprintf(math_result, sizeof(math_result), "%LF", expl(math_value));
  ck_assert_str_eq(s21_result, math_result);
}
END_TEST

START_TEST(s21_exp_test_17) {
  double s21_value = -109.1564;
  double math_value = -109.1564;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_18) {
  double s21_value = 100000;
  double math_value = 100000;
  char s21_result[S21_INT_TOL], math_result[S21_INT_TOL];
  snprintf(s21_result, sizeof(s21_result), "%LF", s21_exp(s21_value));
  snprintf(math_result, sizeof(math_result), "%LF", expl(math_value));
  ck_assert_str_eq(s21_result, math_result);
}
END_TEST

START_TEST(s21_exp_test_19) {
  double s21_value = -1;
  double math_value = -1;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_20) {
  double s21_value = 1;
  double math_value = 1;
  ck_assert_ldouble_eq_tol(s21_exp(s21_value), expl(math_value), S21_PRECISION);
}
END_TEST

START_TEST(s21_exp_test_21) {
  double s21_value = -(S21_NAN);
  double math_value = -(S21_NAN);
  ck_assert_int_eq(isnan(s21_exp(s21_value)), isnan(expl(math_value)));
  ck_assert_int_eq(signbit(s21_exp(s21_value)), signbit(expl(math_value)));
}
END_TEST

Suite *s21_exp_tests(void) {
  Suite *suite = suite_create("s21_exp_tests_suite");
  TCase *tcase = tcase_create("s21_exp_tests_tcase");

  tcase_add_test(tcase, s21_exp_test_2);
  tcase_add_test(tcase, s21_exp_test_3);
  tcase_add_test(tcase, s21_exp_test_4);
  tcase_add_test(tcase, s21_exp_test_5);
  tcase_add_test(tcase, s21_exp_test_6);
  tcase_add_test(tcase, s21_exp_test_7);
  tcase_add_test(tcase, s21_exp_test_8);
  tcase_add_test(tcase, s21_exp_test_9);
  tcase_add_test(tcase, s21_exp_test_11);
  tcase_add_test(tcase, s21_exp_test_13);
  tcase_add_test(tcase, s21_exp_test_15);
  tcase_add_test(tcase, s21_exp_test_17);
  tcase_add_test(tcase, s21_exp_test_19);
  tcase_add_test(tcase, s21_exp_test_20);
  tcase_add_test(tcase, s21_exp_test_21);

  suite_add_tcase(suite, tcase);
  return suite;
}

Suite *s21_exp_tests_no_valgrind(void) {
  Suite *suite_v = suite_create("s21_exp_tests_no_valgrind_suite");
  TCase *tcase_v = tcase_create("s21_exp_tests_no_valgrind_tcase");

  tcase_add_test(tcase_v, s21_exp_test_1);
  tcase_add_test(tcase_v, s21_exp_test_10);
  tcase_add_test(tcase_v, s21_exp_test_12);
  tcase_add_test(tcase_v, s21_exp_test_14);
  tcase_add_test(tcase_v, s21_exp_test_16);
  tcase_add_test(tcase_v, s21_exp_test_18);

  suite_add_tcase(suite_v, tcase_v);
  return suite_v;
}