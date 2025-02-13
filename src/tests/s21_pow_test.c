#include "s21_math_tests.h"

START_TEST(s21_pow_test_1) {
  double s21_value_1 = -(S21_DBL_MAX) + 1;
  double s21_value_2 = S21_DBL_MAX - 1;
  double math_value_1 = -(S21_DBL_MAX) + 1;
  double math_value_2 = S21_DBL_MAX - 1;
  ck_assert_ldouble_eq(s21_pow(s21_value_1, s21_value_2),
                       powl(math_value_1, math_value_2));
}
END_TEST

START_TEST(s21_pow_test_2) {
  double base = 2;
  double exp = 2;
  ck_assert_ldouble_eq(s21_pow(base, exp), powl(base, exp));
}
END_TEST

START_TEST(s21_pow_test_3) {
  double s21_value_1 = -(S21_NAN);
  double s21_value_2 = 1;
  double math_value_1 = -(S21_NAN);
  double math_value_2 = 1;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_4) {
  double s21_value_1 = 1;
  double s21_value_2 = -(S21_NAN);
  double math_value_1 = 1;
  double math_value_2 = -(S21_NAN);
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_5) {
  double s21_value_1 = -1;
  double s21_value_2 = 0;
  double math_value_1 = -1;
  double math_value_2 = 0;
  ck_assert_ldouble_eq_tol(s21_pow(s21_value_1, s21_value_2),
                           powl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_pow_test_6) {
  double s21_value_1 = -1;
  double s21_value_2 = 2.5;
  double math_value_1 = -1;
  double math_value_2 = 2.5;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_7) {
  double s21_value_1 = S21_DBL_MAX;
  double s21_value_2 = S21_DBL_MAX - 1;
  double math_value_1 = S21_DBL_MAX;
  double math_value_2 = S21_DBL_MAX - 1;
  ck_assert_ldouble_eq(s21_pow(s21_value_1, s21_value_2),
                       powl(math_value_1, math_value_2));
}
END_TEST

START_TEST(s21_pow_test_8) {
  double s21_value_1 = 123123;
  double s21_value_2 = S21_DBL_MIN;
  double math_value_1 = 123123;
  double math_value_2 = S21_DBL_MIN;
  ck_assert_ldouble_eq(s21_pow(s21_value_1, s21_value_2),
                       powl(math_value_1, math_value_2));
}
END_TEST

START_TEST(s21_pow_test_9) {
  double s21_value_1 = 1;
  double s21_value_2 = S21_NAN;
  double math_value_1 = 1;
  double math_value_2 = S21_NAN;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_10) {
  double s21_value_1 = S21_NAN;
  double s21_value_2 = 1;
  double math_value_1 = S21_NAN;
  double math_value_2 = 1;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_11) {
  double s21_value_1 = S21_INF_POS;
  double s21_value_2 = 123;
  double math_value_1 = S21_INF_POS;
  double math_value_2 = 123;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_12) {
  double s21_value_1 = S21_LDBL_MAX;
  double s21_value_2 = S21_LDBL_MAX - 1;
  double math_value_1 = S21_LDBL_MAX;
  double math_value_2 = S21_LDBL_MAX - 1;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_13) {
  double s21_value_1 = S21_LDBL_MIN + 1;
  double s21_value_2 = S21_LDBL_MIN;
  double math_value_1 = S21_LDBL_MIN + 1;
  double math_value_2 = S21_LDBL_MIN;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_14) {
  double s21_value_1 = 10.;
  double s21_value_2 = 0.1;
  double math_value_1 = 10.;
  double math_value_2 = 0.1;
  ck_assert_ldouble_eq_tol(s21_pow(s21_value_1, s21_value_2),
                           powl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_pow_test_15) {
  double s21_value_1 = -100.1564;
  double s21_value_2 = -100.156;
  double math_value_1 = -100.1564;
  double math_value_2 = -100.156;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_16) {
  double s21_value_1 = 100.1564;
  double s21_value_2 = 10;
  double math_value_1 = 100.1564;
  double math_value_2 = 10;
  ck_assert_ldouble_eq_tol(s21_pow(s21_value_1, s21_value_2),
                           powl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_pow_test_17) {
  double s21_value_1 = -100.956;
  double s21_value_2 = -100.9564;
  double math_value_1 = -100.956;
  double math_value_2 = -100.9564;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_18) {
  double s21_value_1 = 100.9564;
  double s21_value_2 = 10;
  double math_value_1 = 100.9564;
  double math_value_2 = 10;
  char s21_result[S21_INT_TOL], math_result[S21_INT_TOL];
  snprintf(s21_result, sizeof(s21_result), "%LF",
           s21_pow(s21_value_1, s21_value_2));
  snprintf(math_result, sizeof(math_result), "%LF",
           powl(math_value_1, math_value_2));
  ck_assert_str_eq(s21_result, math_result);
}
END_TEST

START_TEST(s21_pow_test_19) {
  double s21_value_1 = -101.156;
  double s21_value_2 = -101.1564;
  double math_value_1 = -101.156;
  double math_value_2 = -101.1564;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_20) {
  double s21_value_1 = 101.1564;
  double s21_value_2 = 10;
  double math_value_1 = 101.1564;
  double math_value_2 = 10;
  ck_assert_ldouble_eq_tol(s21_pow(s21_value_1, s21_value_2),
                           powl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_pow_test_21) {
  double s21_value_1 = -109.956;
  double s21_value_2 = -109.9564;
  double math_value_1 = -109.956;
  double math_value_2 = -109.9564;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_22) {
  double s21_value_1 = 109.9564;
  double s21_value_2 = 5.1;
  double math_value_1 = 109.9564;
  double math_value_2 = 5.1;
  char s21_result[S21_INT_TOL], math_result[S21_INT_TOL];
  snprintf(s21_result, sizeof(s21_result), "%LF",
           s21_pow(s21_value_1, s21_value_2));
  snprintf(math_result, sizeof(math_result), "%LF",
           powl(math_value_1, math_value_2));
  ck_assert_str_eq(s21_result, math_result);
}
END_TEST

START_TEST(s21_pow_test_23) {
  double s21_value_1 = -109.156;
  double s21_value_2 = -109.1564;
  double math_value_1 = -109.156;
  double math_value_2 = -109.1564;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_24) {
  double s21_value_1 = 101.9564;
  double s21_value_2 = 10;
  double math_value_1 = 101.9564;
  double math_value_2 = 10;
  char s21_result[S21_INT_TOL], math_result[S21_INT_TOL];
  snprintf(s21_result, sizeof(s21_result), "%LF",
           s21_pow(s21_value_1, s21_value_2));
  snprintf(math_result, sizeof(math_result), "%LF",
           powl(math_value_1, math_value_2));
  ck_assert_str_eq(s21_result, math_result);
}
END_TEST

START_TEST(s21_pow_test_25) {
  double s21_value_1 = -1.1;
  double s21_value_2 = 1;
  double math_value_1 = -1.1;
  double math_value_2 = 1;
  ck_assert_ldouble_eq_tol(s21_pow(s21_value_1, s21_value_2),
                           powl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_pow_test_26) {
  double s21_value_1 = -1.1;
  double s21_value_2 = -1;
  double math_value_1 = -1.1;
  double math_value_2 = -1;
  ck_assert_ldouble_eq_tol(s21_pow(s21_value_1, s21_value_2),
                           powl(math_value_1, math_value_2), S21_PRECISION);
}
END_TEST

START_TEST(s21_pow_test_27) {
  double s21_value_1 = -1.1;
  double s21_value_2 = 0.000001;
  double math_value_1 = -1.1;
  double math_value_2 = 0.000001;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_28) {
  double s21_value_1 = S21_INF_NEG;
  double s21_value_2 = 123;
  double math_value_1 = S21_INF_NEG;
  double math_value_2 = 123;
  ck_assert_int_eq(isnan(s21_pow(s21_value_1, s21_value_2)),
                   isnan(powl(math_value_1, math_value_2)));
  ck_assert_int_eq(signbit(s21_pow(s21_value_1, s21_value_2)),
                   signbit(powl(math_value_1, math_value_2)));
}
END_TEST

START_TEST(s21_pow_test_errcheck) {
  ck_assert_ldouble_eq(s21_pow(0.0, 3.0), powl(0.0, 3.0));
  ck_assert_ldouble_eq(s21_pow(-0.0, -3.0), powl(-0.0, -3.0));
  ck_assert_ldouble_eq(s21_pow(S21_INF_POS, -3), powl(S21_INF_POS, -3));
  ck_assert_int_eq(isnan(s21_pow(S21_NAN, -3)), isnan(powl(S21_NAN, -3)));
  ck_assert_int_eq(signbit(s21_pow(S21_NAN, -3)), signbit(powl(S21_NAN, -3)));
  ck_assert_ldouble_eq_tol(isinf(s21_pow(0, S21_INF_NEG)),
                           isinf(powl(0, S21_INF_NEG)), S21_PRECISION);
  ck_assert_int_eq(isnan(s21_pow(0, S21_NAN)), isnan(powl(0, S21_NAN)));
  ck_assert_int_eq(signbit(s21_pow(0, S21_NAN)), signbit(powl(0, S21_NAN)));
  ck_assert_ldouble_eq_tol(s21_pow(S21_TOLERANCE, S21_TOLERANCE),
                           powl(S21_TOLERANCE, S21_TOLERANCE), S21_PRECISION);
  ck_assert_ldouble_eq_tol(s21_pow(S21_TOLERANCE, 3), powl(S21_TOLERANCE, 3),
                           S21_PRECISION);
  ck_assert_int_eq(isnan(s21_pow(-S21_TOLERANCE, S21_TOLERANCE)),
                   isnan(powl(-S21_TOLERANCE, S21_TOLERANCE)));
  ck_assert_int_eq(signbit(s21_pow(-S21_TOLERANCE, S21_TOLERANCE)),
                   signbit(powl(-S21_TOLERANCE, S21_TOLERANCE)));
  ck_assert_ldouble_eq_tol(s21_pow(-S21_TOLERANCE, 5), powl(-S21_TOLERANCE, 5),
                           S21_PRECISION);
  ck_assert_ldouble_eq_tol(s21_pow(-1, S21_INF_POS), powl(-1, S21_INF_POS),
                           S21_PRECISION);
  ck_assert_int_eq(isnan(s21_pow(-1, S21_NAN)), isnan(powl(-1, S21_NAN)));
  ck_assert_int_eq(signbit(s21_pow(-1, S21_NAN)), signbit(powl(-1, S21_NAN)));
  ck_assert_ldouble_eq_tol(s21_pow(-1, 1), powl(-1, 1), S21_PRECISION);
  ck_assert_ldouble_eq_tol(s21_pow(0, 0), powl(0, 0), S21_PRECISION);
  ck_assert_ldouble_eq(s21_pow(0, -1e-18), powl(0, -1e-18));
  ck_assert_ldouble_eq_tol(s21_pow(0, 2), powl(0, 2), S21_PRECISION);
  ck_assert_ldouble_eq_tol(s21_pow(0, 0.4), powl(0, 0.4), S21_PRECISION);
  ck_assert_ldouble_eq(s21_pow(0, 1e-18), powl(0, 1e-18));
  ck_assert_ldouble_eq_tol(s21_pow(1e-18, 1e-18), powl(1e-18, 1e-18),
                           S21_PRECISION);
  ck_assert_ldouble_eq_tol(isinf(s21_pow(0.1, S21_INF_POS)),
                           isinf(powl(0.1, S21_INF_POS)), S21_PRECISION);
  ck_assert_int_eq(signbit(s21_pow(0.1, S21_INF_POS)),
                   signbit(powl(0.1, S21_INF_POS)));
  ck_assert_ldouble_eq_tol(isinf(s21_pow(0.1, S21_INF_NEG)),
                           isinf(powl(0.1, S21_INF_NEG)), S21_PRECISION);
  ck_assert_int_eq(signbit(s21_pow(0.1, S21_INF_NEG)),
                   signbit(powl(0.1, S21_INF_NEG)));
  ck_assert_ldouble_eq_tol(isinf(s21_pow(1.1, S21_INF_NEG)),
                           isinf(powl(1.1, S21_INF_NEG)), S21_PRECISION);
  ck_assert_int_eq(signbit(s21_pow(1.1, S21_INF_NEG)),
                   signbit(powl(1.1, S21_INF_NEG)));
  ck_assert_ldouble_eq_tol(s21_pow(S21_INF_NEG, -3), powl(S21_INF_NEG, -3),
                           S21_PRECISION);
  ck_assert_ldouble_eq(s21_pow(S21_INF_NEG, 1 - 1e-18),
                       powl(S21_INF_NEG, 1 - 1e-18));
  ck_assert_ldouble_eq_tol(s21_pow(S21_INF_NEG, -2), powl(S21_INF_NEG, -2),
                           S21_PRECISION);
  ck_assert_ldouble_eq_tol(isinf(s21_pow(S21_INF_NEG, 2)),
                           isinf(powl(S21_INF_NEG, 2)), S21_PRECISION);
  ck_assert_int_eq(signbit(s21_pow(S21_INF_NEG, 2)),
                   signbit(powl(S21_INF_NEG, 2)));
  ck_assert_ldouble_eq_tol(isinf(s21_pow(0, -0.4)), isinf(powl(0, -0.4)),
                           S21_PRECISION);
  ck_assert_int_eq(signbit(s21_pow(0, -0.4)), signbit(powl(0, -0.4)));
  ck_assert_ldouble_eq_tol(isinf(s21_pow(S21_INF_NEG, S21_INF_POS)),
                           isinf(powl(S21_INF_NEG, S21_INF_POS)),
                           S21_PRECISION);
  ck_assert_int_eq(signbit(s21_pow(S21_INF_NEG, S21_INF_POS)),
                   signbit(powl(S21_INF_NEG, S21_INF_POS)));
}
END_TEST

Suite *s21_pow_tests(void) {
  Suite *suite = suite_create("s21_pow_tests_suite");
  TCase *tcase = tcase_create("s21_pow_tests_tcase");

  tcase_add_test(tcase, s21_pow_test_1);
  tcase_add_test(tcase, s21_pow_test_2);
  tcase_add_test(tcase, s21_pow_test_3);
  tcase_add_test(tcase, s21_pow_test_4);
  tcase_add_test(tcase, s21_pow_test_5);
  tcase_add_test(tcase, s21_pow_test_6);
  tcase_add_test(tcase, s21_pow_test_7);
  tcase_add_test(tcase, s21_pow_test_8);
  tcase_add_test(tcase, s21_pow_test_9);
  tcase_add_test(tcase, s21_pow_test_10);
  tcase_add_test(tcase, s21_pow_test_11);
  tcase_add_test(tcase, s21_pow_test_12);
  tcase_add_test(tcase, s21_pow_test_13);
  tcase_add_test(tcase, s21_pow_test_14);
  tcase_add_test(tcase, s21_pow_test_15);
  tcase_add_test(tcase, s21_pow_test_17);
  tcase_add_test(tcase, s21_pow_test_18);
  tcase_add_test(tcase, s21_pow_test_19);
  tcase_add_test(tcase, s21_pow_test_21);
  tcase_add_test(tcase, s21_pow_test_22);
  tcase_add_test(tcase, s21_pow_test_23);
  tcase_add_test(tcase, s21_pow_test_25);
  tcase_add_test(tcase, s21_pow_test_26);
  tcase_add_test(tcase, s21_pow_test_27);
  tcase_add_test(tcase, s21_pow_test_28);
  tcase_add_test(tcase, s21_pow_test_errcheck);

  suite_add_tcase(suite, tcase);
  return suite;
}

Suite *s21_pow_tests_no_valgrind(void) {
  Suite *suite_v = suite_create("s21_pow_tests_no_valgrind_suite");
  TCase *tcase_v = tcase_create("s21_pow_tests_no_valgrind_tcase");

  tcase_add_test(tcase_v, s21_pow_test_16);
  tcase_add_test(tcase_v, s21_pow_test_20);
  tcase_add_test(tcase_v, s21_pow_test_24);

  suite_add_tcase(suite_v, tcase_v);
  return suite_v;
}