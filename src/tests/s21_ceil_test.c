#include "s21_math_tests.h"

START_TEST(s21_ceil_test_1) {
  double s21_value = S21_DBL_MAX;
  double math_value = S21_DBL_MAX;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_2) {
  double s21_value = S21_DBL_MIN;
  double math_value = S21_DBL_MIN;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_3) {
  double s21_value = S21_NAN;
  double math_value = S21_NAN;
  ck_assert_int_eq(isnan(s21_ceil(s21_value)), isnan(ceill(math_value)));
  ck_assert_int_eq(signbit(s21_ceil(s21_value)), signbit(ceill(math_value)));
}
END_TEST

START_TEST(s21_ceil_test_4) {
  double s21_value = S21_INF_NEG;
  double math_value = S21_INF_NEG;
  ck_assert_int_eq(isinf(s21_ceil(s21_value)), isinf(ceill(math_value)));
  ck_assert_int_eq(signbit(s21_ceil(s21_value)), signbit(ceill(math_value)));
}
END_TEST

START_TEST(s21_ceil_test_5) {
  double s21_value = S21_INF_POS;
  double math_value = S21_INF_POS;
  ck_assert_int_eq(isinf(s21_ceil(s21_value)), isinf(ceill(math_value)));
  ck_assert_int_eq(signbit(s21_ceil(s21_value)), signbit(ceill(math_value)));
}
END_TEST

START_TEST(s21_ceil_test_6) {
  double s21_value = S21_LDBL_MAX;
  double math_value = S21_LDBL_MAX;
  ck_assert_int_eq(isinf(s21_ceil(s21_value)), isinf(ceill(math_value)));
  ck_assert_int_eq(signbit(s21_ceil(s21_value)), signbit(ceill(math_value)));
}
END_TEST

START_TEST(s21_ceil_test_7) {
  double s21_value = S21_LDBL_MIN;
  double math_value = S21_LDBL_MIN;
  ck_assert_int_eq(isinf(s21_ceil(s21_value)), isinf(ceill(math_value)));
  ck_assert_int_eq(signbit(s21_ceil(s21_value)), signbit(ceill(math_value)));
}
END_TEST

START_TEST(s21_ceil_test_8) {
  double s21_value = 0;
  double math_value = 0;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_9) {
  double s21_value = -100.1564;
  double math_value = -100.1564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_10) {
  double s21_value = 100.1564;
  double math_value = 100.1564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_11) {
  double s21_value = -100.9564;
  double math_value = -100.9564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_12) {
  double s21_value = 100.9564;
  double math_value = 100.9564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_13) {
  double s21_value = -101.1564;
  double math_value = -101.1564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_14) {
  double s21_value = 101.1564;
  double math_value = 101.1564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_15) {
  double s21_value = -109.9564;
  double math_value = -109.9564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_16) {
  double s21_value = 109.9564;
  double math_value = 109.9564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_17) {
  double s21_value = -109.1564;
  double math_value = -109.1564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_18) {
  double s21_value = 101.9564;
  double math_value = 101.9564;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_19) {
  double s21_value = -1;
  double math_value = -1;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_20) {
  double s21_value = 1;
  double math_value = 1;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_ceil_test_21) {
  double s21_value = -(S21_NAN);
  double math_value = -(S21_NAN);
  ck_assert_int_eq(isnan(s21_ceil(s21_value)), isnan(ceill(math_value)));
  ck_assert_int_eq(signbit(s21_ceil(s21_value)), signbit(ceill(math_value)));
}
END_TEST

START_TEST(s21_ceil_test_22) {
  double s21_value = S21_DBL_MAX / 100;
  double math_value = S21_DBL_MAX / 100;
  ck_assert_ldouble_eq_tol(s21_ceil(s21_value), ceill(math_value),
                           S21_PRECISION);
}
END_TEST

Suite *s21_ceil_tests(void) {
  Suite *suite = suite_create("s21_ceil_tests_suite");
  TCase *tcase = tcase_create("s21_ceil_tests_tcase");

  tcase_add_test(tcase, s21_ceil_test_1);
  tcase_add_test(tcase, s21_ceil_test_2);
  tcase_add_test(tcase, s21_ceil_test_3);
  tcase_add_test(tcase, s21_ceil_test_4);
  tcase_add_test(tcase, s21_ceil_test_5);
  tcase_add_test(tcase, s21_ceil_test_6);
  tcase_add_test(tcase, s21_ceil_test_7);
  tcase_add_test(tcase, s21_ceil_test_8);
  tcase_add_test(tcase, s21_ceil_test_9);
  tcase_add_test(tcase, s21_ceil_test_10);
  tcase_add_test(tcase, s21_ceil_test_11);
  tcase_add_test(tcase, s21_ceil_test_12);
  tcase_add_test(tcase, s21_ceil_test_13);
  tcase_add_test(tcase, s21_ceil_test_14);
  tcase_add_test(tcase, s21_ceil_test_15);
  tcase_add_test(tcase, s21_ceil_test_16);
  tcase_add_test(tcase, s21_ceil_test_17);
  tcase_add_test(tcase, s21_ceil_test_18);
  tcase_add_test(tcase, s21_ceil_test_19);
  tcase_add_test(tcase, s21_ceil_test_20);
  tcase_add_test(tcase, s21_ceil_test_21);
  tcase_add_test(tcase, s21_ceil_test_22);

  suite_add_tcase(suite, tcase);
  return suite;
}