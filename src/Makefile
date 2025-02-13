.PHONY: all clean test clang s21_math.a

CC := gcc
CC_FLAGS := -std=c11 -Wall -Werror -Wextra -pedantic
GCOVR := ~/.local/bin/gcovr
GCOVR_FLAGS := --html --html-details --html-medium-threshold 79.9 --html-high-threshold 80.0
COV_FLAGS = -fprofile-arcs -ftest-coverage -fPIC --coverage

CF := clang-format
CF_FLAGS := -style=Google -n
CPP := cppcheck
CPP_FLAGS := --enable=all --inconclusive --std=c11
VG := valgrind
VG_FLAGS = --tool=memcheck --leak-check=full

SRC := $(wildcard s21_*.c)
HEADER := $(wildcard s21_*.h)
OBJ := $(patsubst %.c, %.o, $(SRC))
TEST_DIR := tests
TEST_SRC := $(wildcard $(TEST_DIR)/s21_*.c)
TEST_HEADER := $(wildcard $(TEST_DIR)/s21_*.h)
TEST_TARGET := s21_math_tests
TEST_VALGRIND_SRC := $(TEST_DIR)/valgrind_math_tests.c $(TEST_DIR)/s21_abs_test.c $(TEST_DIR)/s21_acos_test.c $(TEST_DIR)/s21_asin_test.c $(TEST_DIR)/s21_atan_test.c $(TEST_DIR)/s21_ceil_test.c $(TEST_DIR)/s21_cos_test.c $(TEST_DIR)/s21_sin_test.c $(TEST_DIR)/s21_tan_test.c $(TEST_DIR)/s21_exp_test.c $(TEST_DIR)/s21_fabs_test.c $(TEST_DIR)/s21_floor_test.c $(TEST_DIR)/s21_fmod_test.c $(TEST_DIR)/s21_log_test.c $(TEST_DIR)/s21_pow_test.c $(TEST_DIR)/s21_sqrt_test.c
RM := rm -rf
KERNEL := $(shell uname -s)

ifeq ($(KERNEL), Linux)
	LIBS := -lcheck -lpthread -lrt -lsubunit -lm -lcheck_pic -pthread
endif

ifeq ($(KERNEL), Darwin)
	LIBS := -lcheck
endif

all: clean s21_math.a test gcov_report

s21_math.a: $(SRC)
	$(CC) $(CC_FLAGS) -c $^ $(LIBS)
	ar rc $@ $(OBJ)
	ranlib $@

test: $(SRC) $(TEST_SRC) s21_math.a
	$(CC) $(CC_FLAGS) -g $(COV_FLAGS) $^ -o $(TEST_DIR)/$(TEST_TARGET) $(LIBS)
	$(RM) *.o
	./$(TEST_DIR)/$(TEST_TARGET)
	$(RM) $(TEST_DIR)/*.gcda $(TEST_DIR)/*.gcno

gcov_test: $(SRC) $(TEST_SRC) s21_math.a
	$(CC) $(CC_FLAGS) -g $(COV_FLAGS) $^ -o $(TEST_DIR)/$(TEST_TARGET) $(LIBS)
	$(RM) *.o
	./$(TEST_DIR)/$(TEST_TARGET)
	$(RM) $(TEST_DIR)/*_test.gcno
	$(RM) $(TEST_DIR)/*_tests.gcno

gcov_report: gcov_test
	$(RM) $@
	mkdir $@
	$(GCOVR) -r . -d $(TEST_DIR) $(GCOVR_FLAGS) -o $@/report.html
	$(RM) $(TEST_DIR)/*.gcda $(TEST_DIR)/*.gcno

clang: $(SRC) $(HEADER) $(TEST_SRC) $(TEST_HEADER) $(TEST_DIR)/valgrind_math_tests.c
	$(CF) $(CF_FLAGS) $^

cpp: $(SRC) $(HEADER)
	$(CPP) $(CPP_FLAGS) $^

valgrind: $(SRC) $(TEST_VALGRIND_SRC) s21_math.a
	$(CC) $(CC_FLAGS) -g $(COV_FLAGS) $^ -o $(TEST_DIR)/valgrind_math_tests $(LIBS)
	$(VG) $(VG_FLAGS) ./$(TEST_DIR)/valgrind_math_tests
	make clean

clean:
	$(RM) *.o $(TEST_DIR)*.o *.a $(TEST_DIR)/$(TEST_TARGET) $(TEST_DIR)/valgrind_math_tests  *.gcno $(TEST_DIR)/*.gcno *.gcda $(TEST_DIR)/*.gcda gcov_report