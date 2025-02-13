#include "s21_math_tests.h"

START_TEST(s21_atan_test_1) {
  double s21_value = -1;
  double math_value = -1;
  for (double i = 0; i < 2; i += 0.01)
    ck_assert_ldouble_eq_tol(s21_atan(s21_value + i), atanl(math_value + i),
                             S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_2) {
  double s21_value = S21_PI / 6;
  double math_value = S21_PI / 6;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_3) {
  double s21_value = S21_PI / 4;
  double math_value = S21_PI / 4;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_4) {
  double s21_value = S21_PI / 3;
  double math_value = S21_PI / 3;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_5) {
  double s21_value = S21_PI / 2;
  double math_value = S21_PI / 2;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_6) {
  double s21_value = S21_PI * 2 / 3;
  double math_value = S21_PI * 2 / 3;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_7) {
  double s21_value = S21_PI * 3 / 4;
  double math_value = S21_PI * 3 / 4;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_8) {
  double s21_value = S21_PI * 5 / 6;
  double math_value = S21_PI * 5 / 6;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_9) {
  double s21_value = S21_PI;
  double math_value = S21_PI;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_10) {
  double s21_value = S21_PI * 7 / 6;
  double math_value = S21_PI * 7 / 6;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_11) {
  double s21_value = S21_PI * 5 / 4;
  double math_value = S21_PI * 5 / 4;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_12) {
  double s21_value = S21_PI * 4 / 3;
  double math_value = S21_PI * 4 / 3;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_13) {
  double s21_value = S21_PI * 3 / 2;
  double math_value = S21_PI * 3 / 2;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_14) {
  double s21_value = S21_PI * 5 / 3;
  double math_value = S21_PI * 5 / 3;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_15) {
  double s21_value = S21_PI * 7 / 4;
  double math_value = S21_PI * 7 / 4;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_16) {
  double s21_value = S21_PI * 11 / 6;
  double math_value = S21_PI * 11 / 6;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_17) {
  double s21_value = S21_PI * 2;
  double math_value = S21_PI * 2;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_18) {
  double s21_value = sqrt(3);
  double math_value = sqrt(3);
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_19) {
  double s21_value = 1 / sqrt(3);
  double math_value = 1 / sqrt(3);
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_20) {
  double s21_value = -(sqrt(3));
  double math_value = -(sqrt(3));
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_21) {
  double s21_value = -1 / sqrt(3);
  double math_value = -1 / sqrt(3);
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_22) {
  double s21_value = sqrt(2) / 2;
  double math_value = sqrt(2) / 2;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_23) {
  double s21_value = sqrt(3) / 2;
  double math_value = sqrt(3) / 2;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_24) {
  double s21_value = -1.5;
  double math_value = -1.5;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_25) {
  double s21_value = 1.5;
  double math_value = 1.5;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_26) {
  double s21_value = 1.;
  double math_value = 1.;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_27) {
  double s21_value = 1.000001;
  double math_value = 1.000001;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_28) {
  double s21_value = 0.999999;
  double math_value = 0.999999;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_29) {
  double s21_value = 0.;
  double math_value = 0.;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_30) {
  double s21_value = -1.000001;
  double math_value = -1.000001;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_31) {
  double s21_value = -0.999999;
  double math_value = -0.999999;
  ck_assert_ldouble_eq_tol(s21_atan(s21_value), atanl(math_value),
                           S21_PRECISION);
}
END_TEST

START_TEST(s21_atan_test_32) {
  double s21_value = S21_NAN;
  double math_value = S21_NAN;
  ck_assert_int_eq(isnan(s21_atan(s21_value)), isnan(atanl(math_value)));
  ck_assert_int_eq(signbit(s21_atan(s21_value)), signbit(atanl(math_value)));
}
END_TEST

START_TEST(s21_atan_test_33) {
  double s21_value = -(S21_NAN);
  double math_value = -(S21_NAN);
  ck_assert_int_eq(isnan(s21_atan(s21_value)), isnan(atanl(math_value)));
  ck_assert_int_eq(signbit(s21_atan(s21_value)), signbit(atanl(math_value)));
}
END_TEST

Suite *s21_atan_tests(void) {
  Suite *suite = suite_create("s21_atan_tests_suite");
  TCase *tcase = tcase_create("s21_atan_tests_tcase");

  tcase_add_test(tcase, s21_atan_test_1);
  tcase_add_test(tcase, s21_atan_test_2);
  tcase_add_test(tcase, s21_atan_test_3);
  tcase_add_test(tcase, s21_atan_test_4);
  tcase_add_test(tcase, s21_atan_test_5);
  tcase_add_test(tcase, s21_atan_test_6);
  tcase_add_test(tcase, s21_atan_test_7);
  tcase_add_test(tcase, s21_atan_test_8);
  tcase_add_test(tcase, s21_atan_test_9);
  tcase_add_test(tcase, s21_atan_test_10);
  tcase_add_test(tcase, s21_atan_test_11);
  tcase_add_test(tcase, s21_atan_test_12);
  tcase_add_test(tcase, s21_atan_test_13);
  tcase_add_test(tcase, s21_atan_test_14);
  tcase_add_test(tcase, s21_atan_test_15);
  tcase_add_test(tcase, s21_atan_test_16);
  tcase_add_test(tcase, s21_atan_test_17);
  tcase_add_test(tcase, s21_atan_test_18);
  tcase_add_test(tcase, s21_atan_test_19);
  tcase_add_test(tcase, s21_atan_test_20);
  tcase_add_test(tcase, s21_atan_test_21);
  tcase_add_test(tcase, s21_atan_test_22);
  tcase_add_test(tcase, s21_atan_test_23);
  tcase_add_test(tcase, s21_atan_test_24);
  tcase_add_test(tcase, s21_atan_test_25);
  tcase_add_test(tcase, s21_atan_test_26);
  tcase_add_test(tcase, s21_atan_test_27);
  tcase_add_test(tcase, s21_atan_test_28);
  tcase_add_test(tcase, s21_atan_test_29);
  tcase_add_test(tcase, s21_atan_test_30);
  tcase_add_test(tcase, s21_atan_test_31);
  tcase_add_test(tcase, s21_atan_test_32);
  tcase_add_test(tcase, s21_atan_test_33);

  suite_add_tcase(suite, tcase);
  return suite;
}