#include "s21_math_tests.h"

START_TEST(s21_fmod_test_1) {
  double s21_value_1 = S21_DBL_MAX;
  double s21_value_2 = S21_DBL_MAX - 1;
  double math_value_1 = S21_DBL_MAX;
  double math_value_2 = S21_DBL_MAX - 1;
  ck_assert_ldouble_eq(s21_fmod(s21_value_1, s21_value_2),
                       fmodl(math_value_1, math_value_2));
}
END_TEST

START_TEST(s21_fmod_test_2) {
  double s21_value_1 = 123123;
  double s21_value_2 = S21_DBL_MIN;
  double math_value_1 = 123123;
  double math_value_2 = S21_DBL_MIN;
  ck_assert_ldouble_eq(s21_fmod(s21_value_1, s21_value_2),
                       fmodl(math_value_1, math_value_2));
}
END_TEST

START_TEST(s21_fmod_test_3) {
  double s21_value_1 = 1;
  double s21_value_2 = -(S21_NAN);
  double math_value_1 = 1;
  double math_value_2 = -(S21_NAN);
  ck_assert_int_eq(isnan(s21_fmod(s21_value_1, s21_value_2)),
                   isnan(fmodl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_fmod(s21_value_1, s21_value_2)),
                   signbit(fmodl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_fmod_test_4) {
  double s21_value_1 = S21_NAN;
  double s21_value_2 = 1;
  double math_value_1 = S21_NAN;
  double math_value_2 = 1;
  ck_assert_int_eq(isnan(s21_fmod(s21_value_1, s21_value_2)),
                   isnan(fmodl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_fmod(s21_value_1, s21_value_2)),
                   signbit(fmodl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_fmod_test_5) {
  double s21_value_1 = S21_INF_POS;
  double s21_value_2 = 123;
  double math_value_1 = S21_INF_POS;
  double math_value_2 = 123;
  ck_assert_int_eq(isnan(s21_fmod(s21_value_1, s21_value_2)),
                   isnan(fmodl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_fmod(s21_value_1, s21_value_2)),
                   signbit(fmodl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_fmod_test_6) {
  double s21_value_1 = S21_LDBL_MAX;
  double s21_value_2 = S21_LDBL_MAX - 1;
  double math_value_1 = S21_LDBL_MAX;
  double math_value_2 = S21_LDBL_MAX - 1;
  ck_assert_int_eq(isnan(s21_fmod(s21_value_1, s21_value_2)),
                   isnan(fmodl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_fmod(s21_value_1, s21_value_2)),
                   signbit(fmodl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_fmod_test_7) {
  double s21_value_1 = S21_LDBL_MIN + 1;
  double s21_value_2 = S21_LDBL_MIN;
  double math_value_1 = S21_LDBL_MIN + 1;
  double math_value_2 = S21_LDBL_MIN;
  ck_assert_int_eq(isnan(s21_fmod(s21_value_1, s21_value_2)),
                   isnan(fmodl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_fmod(s21_value_1, s21_value_2)),
                   signbit(fmodl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_fmod_test_8) {
  double s21_value_1 = 10.;
  double s21_value_2 = 0.1;
  double math_value_1 = 10.;
  double math_value_2 = 0.1;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_9) {
  double s21_value_1 = -100.1564;
  double s21_value_2 = -100.156;
  double math_value_1 = -100.1564;
  double math_value_2 = -100.156;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_10) {
  double s21_value_1 = 100.1564;
  double s21_value_2 = 100.156;
  double math_value_1 = 100.1564;
  double math_value_2 = 100.156;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_11) {
  double s21_value_1 = -100.956;
  double s21_value_2 = -100.9564;
  double math_value_1 = -100.956;
  double math_value_2 = -100.9564;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_12) {
  double s21_value_1 = 100.9564;
  double s21_value_2 = 100.956;
  double math_value_1 = 100.9564;
  double math_value_2 = 100.956;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_13) {
  double s21_value_1 = -101.156;
  double s21_value_2 = -101.1564;
  double math_value_1 = -101.156;
  double math_value_2 = -101.1564;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_14) {
  double s21_value_1 = 101.1564;
  double s21_value_2 = 101.156;
  double math_value_1 = 101.1564;
  double math_value_2 = 101.156;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_15) {
  double s21_value_1 = -109.956;
  double s21_value_2 = -109.9564;
  double math_value_1 = -109.956;
  double math_value_2 = -109.9564;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_16) {
  double s21_value_1 = 109.9564;
  double s21_value_2 = 109.956;
  double math_value_1 = 109.9564;
  double math_value_2 = 109.956;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_17) {
  double s21_value_1 = -109.156;
  double s21_value_2 = -109.1564;
  double math_value_1 = -109.156;
  double math_value_2 = -109.1564;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_18) {
  double s21_value_1 = 101.9564;
  double s21_value_2 = 101.956;
  double math_value_1 = 101.9564;
  double math_value_2 = 101.956;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_19) {
  double s21_value_1 = -1.1;
  double s21_value_2 = 1;
  double math_value_1 = -1.1;
  double math_value_2 = 1;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_20) {
  double s21_value_1 = -1.1;
  double s21_value_2 = -1;
  double math_value_1 = -1.1;
  double math_value_2 = -1;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_21) {
  double s21_value_1 = -1.1;
  double s21_value_2 = 0.000001;
  double math_value_1 = -1.1;
  double math_value_2 = 0.000001;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_22) {
  double s21_value_1 = S21_INF_NEG;
  double s21_value_2 = 123;
  double math_value_1 = S21_INF_NEG;
  double math_value_2 = 123;
  ck_assert_int_eq(isnan(s21_fmod(s21_value_1, s21_value_2)),
                   isnan(fmodl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_fmod(s21_value_1, s21_value_2)),
                   signbit(fmodl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_fmod_test_23) {
  double s21_value_1 = 1;
  double s21_value_2 = S21_NAN;
  double math_value_1 = 1;
  double math_value_2 = S21_NAN;
  ck_assert_int_eq(isnan(s21_fmod(s21_value_1, s21_value_2)),
                   isnan(fmodl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_fmod(s21_value_1, s21_value_2)),
                   signbit(fmodl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_fmod_test_24) {
  double s21_value_1 = -1;
  double s21_value_2 = 1e-25;
  double math_value_1 = -1;
  double math_value_2 = 1e-25;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_fmod_test_25) {
  double s21_value_1 = -(S21_NAN);
  double s21_value_2 = 1;
  double math_value_1 = -(S21_NAN);
  double math_value_2 = 1;
  ck_assert_int_eq(isnan(s21_fmod(s21_value_1, s21_value_2)),
                   isnan(fmodl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_fmod(s21_value_1, s21_value_2)),
                   signbit(fmodl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_fmod_test_26) {
  double s21_value_1 = -1;
  double s21_value_2 = -0.0;
  double math_value_1 = -1;
  double math_value_2 = -0.0;
  ck_assert_int_eq(isnan(s21_fmod(s21_value_1, s21_value_2)),
                   isnan(fmodl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_fmod(s21_value_1, s21_value_2)),
                   signbit(fmodl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_fmod_test_27) {
  double s21_value_1 = -1;
  double s21_value_2 = 1e-26;
  double math_value_1 = -1;
  double math_value_2 = 1e-26;
  ck_assert_ldouble_eq_tol(s21_fmod(s21_value_1, s21_value_2),
                           fmodl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

Suite *s21_fmod_tests(void) {
  Suite *suite = suite_create("s21_fmod_tests_suite");
  TCase *tcase = tcase_create("s21_fmod_tests_tcase");

  tcase_add_test(tcase, s21_fmod_test_1);
  tcase_add_test(tcase, s21_fmod_test_2);
  tcase_add_test(tcase, s21_fmod_test_3);
  tcase_add_test(tcase, s21_fmod_test_4);
  tcase_add_test(tcase, s21_fmod_test_5);
  tcase_add_test(tcase, s21_fmod_test_6);
  tcase_add_test(tcase, s21_fmod_test_7);
  tcase_add_test(tcase, s21_fmod_test_9);
  tcase_add_test(tcase, s21_fmod_test_10);
  tcase_add_test(tcase, s21_fmod_test_11);
  tcase_add_test(tcase, s21_fmod_test_12);
  tcase_add_test(tcase, s21_fmod_test_13);
  tcase_add_test(tcase, s21_fmod_test_14);
  tcase_add_test(tcase, s21_fmod_test_15);
  tcase_add_test(tcase, s21_fmod_test_16);
  tcase_add_test(tcase, s21_fmod_test_17);
  tcase_add_test(tcase, s21_fmod_test_18);
  tcase_add_test(tcase, s21_fmod_test_19);
  tcase_add_test(tcase, s21_fmod_test_20);
  tcase_add_test(tcase, s21_fmod_test_21);
  tcase_add_test(tcase, s21_fmod_test_22);
  tcase_add_test(tcase, s21_fmod_test_23);
  tcase_add_test(tcase, s21_fmod_test_24);
  tcase_add_test(tcase, s21_fmod_test_25);
  tcase_add_test(tcase, s21_fmod_test_27);

  suite_add_tcase(suite, tcase);
  return suite;
}

Suite *s21_fmod_tests_no_valgrind(void) {
  Suite *suite_v = suite_create("s21_fmod_tests_no_valgrind_suite");
  TCase *tcase_v = tcase_create("s21_fmod_tests_no_valgrind_tcase");

  tcase_add_test(tcase_v, s21_fmod_test_8);
  tcase_add_test(tcase_v, s21_fmod_test_26);

  suite_add_tcase(suite_v, tcase_v);
  return suite_v;
}