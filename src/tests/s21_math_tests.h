#ifndef S21_MATH_TESTS_H
#define S21_MATH_TESTS_H

#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "../s21_math.h"

Suite *s21_abs_tests(void);
Suite *s21_fabs_tests(void);
Suite *s21_ceil_tests(void);
Suite *s21_fmod_tests(void);
Suite *s21_fmod_tests_no_valgrind(void);
Suite *s21_sin_tests(void);
Suite *s21_cos_tests(void);
Suite *s21_acos_tests(void);
Suite *s21_asin_tests(void);
Suite *s21_atan_tests(void);
Suite *s21_exp_tests(void);
Suite *s21_exp_tests_no_valgrind(void);
Suite *s21_floor_tests(void);
Suite *s21_log_tests(void);
Suite *s21_pow_tests(void);
Suite *s21_pow_tests_no_valgrind(void);
Suite *s21_sqrt_tests(void);
Suite *s21_tan_tests(void);

void testcase_run(Suite *test);
void tests_run();

#endif