#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>  // для максимальных, минимальных значений и для типов (uint)
#include <stdio.h>
#include <stdlib.h>

#include "../s21_decimal.h"
#include "../support.h"

// тесты арифметики
Suite *test_add(void);
Suite *test_sub(void);
Suite *test_div(void);
Suite *test_mul(void);
Suite *test_mod(void);

// тесты сравнения
Suite *test_equal(void);
Suite *test_greater_or_equal(void);
Suite *test_greater(void);
Suite *test_less_or_equal(void);
Suite *test_less(void);
Suite *test_not_equal(void);

// тесты конвертации
Suite *test_int_to_decimal(void);
Suite *test_decimal_to_int(void);
Suite *test_float_to_decimal(void);
Suite *test_decimal_to_float(void);

// // тесты other
Suite *test_truncate(void);
Suite *test_negate(void);
Suite *test_round(void);
Suite *test_floor(void);