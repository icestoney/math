#include "s21_math_tests.h"

int main() {
  tests_run();
  return 0;
}

void tests_run() {
  Suite *tests_list[] = {// a
                         s21_asin_tests(), s21_acos_tests(), s21_atan_tests(),
                         //! a
                         s21_sin_tests(), s21_cos_tests(), s21_tan_tests(),
                         // pow
                         s21_pow_tests(), s21_sqrt_tests(),
                         // logs
                         s21_exp_tests(), s21_log_tests(),
                         // abss
                         s21_abs_tests(), s21_fabs_tests(),
                         // rounds
                         s21_ceil_tests(), s21_floor_tests(),
                         //%
                         s21_fmod_tests(), NULL};

  for (Suite **current_test = tests_list; *current_test != NULL;
       current_test++) {
    testcase_run(*current_test);
  }
}

void testcase_run(Suite *test) {
  unsigned int test_counter = 1;

  if (test_counter > 0) putchar('\n');
  test_counter++;

  SRunner *srunner = srunner_create(test);
  srunner_set_fork_status(srunner, CK_NOFORK);
  srunner_run_all(srunner, CK_NORMAL);
  srunner_free(srunner);
}