#include <check.h>
#include <stdlib.h>
#include <math.h>
#include "s21_math.h"

START_TEST(abs_1) {
    int x = 12;
    ck_assert_int_eq(s21_abs(x), abs(x));
} END_TEST

START_TEST(abs_2) {
    int x = -12;
    ck_assert_int_eq(s21_abs(x), abs(x));
} END_TEST

START_TEST(abs_3) {
    int x = 0;
    ck_assert_int_eq(s21_abs(x), abs(x));
} END_TEST

START_TEST(acos_1) {
    ck_assert_ldouble_eq_tol(s21_acos(1.0), acos(1.0), s21_EPS);
    ck_assert_ldouble_eq_tol(s21_acos(-1.0), acos(-1.0), s21_EPS);
} END_TEST

START_TEST(acos_2) {
    ck_assert_ldouble_eq_tol(s21_acos(0.0), acos(0.0), s21_EPS);
    ck_assert_ldouble_eq_tol(s21_acos(-0.0), acos(-0.0), s21_EPS);
} END_TEST

START_TEST(acos_3) {
    ck_assert_ldouble_eq_tol(s21_acos(-1), acos(-1), s21_EPS);
} END_TEST

START_TEST(acos_4) {
    ck_assert_ldouble_eq_tol(s21_acos(1), acos(1), s21_EPS);
} END_TEST

START_TEST(acos_5) {
    ck_assert_ldouble_eq_tol(s21_acos(-sqrt(3) / 2), acos(-sqrt(3) / 2), s21_EPS);
} END_TEST

START_TEST(acos_6) {
    ck_assert_ldouble_eq_tol(s21_acos(-sqrt(2) / 2), acos(-sqrt(2) / 2), s21_EPS);
} END_TEST

START_TEST(acos_7) {
    ck_assert_ldouble_eq_tol(s21_acos(-1 / 2), acos(-1 / 2), s21_EPS);
} END_TEST

START_TEST(acos_8) {
    ck_assert_ldouble_eq_tol(s21_acos(1 / 2), acos(1 / 2), s21_EPS);
} END_TEST

START_TEST(acos_9) {
    ck_assert_ldouble_eq_tol(s21_acos(sqrt(2) / 2), acos(sqrt(2) / 2), s21_EPS);
} END_TEST

START_TEST(acos_10) {
    ck_assert_ldouble_eq_tol(s21_acos(sqrt(3) / 2), acos(sqrt(3) / 2), s21_EPS);
} END_TEST

START_TEST(asin_1) {
    ck_assert_ldouble_eq_tol(s21_asin(1.0), asin(1.0), s21_EPS);
    ck_assert_ldouble_eq_tol(s21_asin(-1.0), asin(-1.0), s21_EPS);
}
END_TEST

START_TEST(asin_2) {
    ck_assert_ldouble_eq_tol(s21_asin(0.0), asin(0.0), s21_EPS);
    ck_assert_ldouble_eq_tol(s21_asin(-0.0), asin(-0.0), s21_EPS);
}
END_TEST

START_TEST(asin_3) {
    ck_assert_ldouble_eq_tol(s21_asin(0.0), asin(0.0), s21_EPS);
}
END_TEST

START_TEST(asin_4) {
    ck_assert_ldouble_eq_tol(s21_asin(-1), asin(-1), s21_EPS);
}
END_TEST

START_TEST(asin_5) {
    ck_assert_ldouble_eq_tol(s21_asin(1), asin(1), s21_EPS);
}
END_TEST

START_TEST(asin_6) {
    ck_assert_ldouble_eq_tol(s21_asin(-sqrt(3) / 2), asin(-sqrt(3) / 2), s21_EPS);
}
END_TEST

START_TEST(asin_7) {
    ck_assert_ldouble_eq_tol(s21_asin(-sqrt(2) / 2), asin(-sqrt(2) / 2), s21_EPS);
}
END_TEST

START_TEST(asin_8) {
    ck_assert_ldouble_eq_tol(s21_asin(-1 / 2), asin(-1 / 2), s21_EPS);
}
END_TEST

START_TEST(asin_9) {
    ck_assert_ldouble_eq_tol(s21_asin(1 / 2), asin(1 / 2), s21_EPS);
}
END_TEST

START_TEST(asin_10) {
    ck_assert_ldouble_eq_tol(s21_asin(sqrt(2) / 2), asin(sqrt(2) / 2), s21_EPS);
}
END_TEST

START_TEST(asin_11) {
    ck_assert_ldouble_eq_tol(s21_asin(sqrt(3) / 2), asin(sqrt(3) / 2), s21_EPS);
}
END_TEST

START_TEST(atan_1) {
    ck_assert_float_eq(s21_atan(-15.01), atan(-15.01));
    }
END_TEST

START_TEST(atan_2) {
    ck_assert_float_eq(-9999999999, -9999999999);
    }
END_TEST

START_TEST(atan_3) {
    ck_assert_ldouble_eq(s21_atan(INFINITY), atan(INFINITY));
    ck_assert_ldouble_eq(s21_atan(-INFINITY), atan(-INFINITY));
}
END_TEST

START_TEST(atan_4) {
    ck_assert_ldouble_eq_tol(s21_atan(1.0), atan(1.0), s21_EPS);
    ck_assert_ldouble_eq_tol(s21_atan(1.1), atan(1.1), s21_EPS);
    ck_assert_ldouble_eq_tol(s21_atan(-1.0), atan(-1.0), s21_EPS);
    ck_assert_ldouble_eq_tol(s21_atan(-1.1), atan(-1.1), s21_EPS);
}
END_TEST

START_TEST(atan_5) {
    ck_assert_ldouble_eq_tol(s21_atan(0.0), atan(0.0), s21_EPS);
    ck_assert_ldouble_eq_tol(s21_atan(-0.0), atan(-0.0), s21_EPS);
}
END_TEST

START_TEST(atan_6) {
    ck_assert_ldouble_eq_tol(s21_atan(-1), atan(-1), s21_EPS);
}
END_TEST

START_TEST(atan_7) {
    ck_assert_ldouble_eq_tol(s21_atan(-1 / 2), atan(-1 / 2), s21_EPS);
}
END_TEST

START_TEST(atan_8) {
    ck_assert_ldouble_eq_tol(s21_atan(1 / 2), atan(1 / 2), s21_EPS);
}
END_TEST

START_TEST(atan_9) {
    ck_assert_ldouble_eq_tol(s21_atan(sqrt(3) / 2), atan(sqrt(3) / 2), s21_EPS);
}
END_TEST

START_TEST(atan_10) {
    ck_assert_ldouble_eq_tol(s21_atan(1), atan(1), s21_EPS);
}
END_TEST

START_TEST(atan_11) {
    ck_assert_ldouble_eq_tol(s21_atan(1.23456e-7), atan(1.23456e-7), s21_EPS);
}
END_TEST

START_TEST(atan_12) {
    ck_assert_ldouble_eq_tol(s21_atan(2.1234567), atan(2.1234567), s21_EPS);
}
END_TEST

START_TEST(atan_13) {
    ck_assert_ldouble_eq_tol(s21_atan(2.1234567e-7), atan(2.1234567e-7), s21_EPS);
}
END_TEST

START_TEST(atan_14) {
    ck_assert_ldouble_eq_tol(s21_atan(2.1234567e-16), atan(2.1234567e-16),
                             s21_EPS);
}
END_TEST

START_TEST(atan_15) {
    ck_assert_ldouble_eq_tol(s21_atan(s21_PI / 2), atan(s21_PI / 2), s21_EPS);
}
END_TEST

START_TEST(atan_16) {
    ck_assert_ldouble_eq_tol(s21_atan(-s21_PI / 2), atan(-s21_PI / 2), s21_PI);
}
END_TEST

START_TEST(ceil_1) {
    ck_assert_ldouble_eq(ceil(0.0), s21_ceil(0.0));
} END_TEST

START_TEST(ceil_2) {
    ck_assert_ldouble_eq(ceil(0.1), s21_ceil(0.1));
} END_TEST

START_TEST(ceil_3) {
    ck_assert_ldouble_eq(ceil(-0.1), s21_ceil(-0.1));
} END_TEST

START_TEST(ceil_4) {
    ck_assert_ldouble_eq(ceil(2.0), s21_ceil(2.0));
} END_TEST

START_TEST(ceil_5) {
    ck_assert_ldouble_eq(ceil(-2.0), s21_ceil(-2.0));
} END_TEST

START_TEST(cos_1) {
    double x = 0;
    ck_assert_double_le(fabsl(s21_cos(x) - cos(x)), s21_EPS);
} END_TEST

START_TEST(cos_2) {
    double x = 1234.567;
    ck_assert_double_le(fabsl(s21_cos(x) - cos(x)), s21_EPS);
} END_TEST

START_TEST(cos_3) {
    double x = -241223;
    ck_assert_double_le(fabsl(s21_cos(x) - cos(x)), s21_EPS);
} END_TEST

START_TEST(cos_4) {
    double x = -0.241223;
    ck_assert_double_le(fabsl(s21_cos(x) - cos(x)), s21_EPS);
} END_TEST

START_TEST(cos_5) {
    double x = 10000;
    ck_assert_double_le(fabsl(s21_cos(x) - cos(x)), s21_EPS);
} END_TEST

START_TEST(exp_1) {
    double x = 1.0;
    ck_assert_float_eq(s21_exp(x), exp(x));
} END_TEST

START_TEST(exp_2) {
    double x = -1.0;
    ck_assert_float_eq(s21_exp(x), exp(x));
} END_TEST

START_TEST(exp_3) {
    double x = 0.0;
    ck_assert_float_eq(s21_exp(x), exp(x));
} END_TEST

START_TEST(exp_4) {
    double x = 0.03287;
    ck_assert_float_eq(s21_exp(x), exp(x));

    double y = 0.00003287;
    ck_assert_float_eq(s21_exp(y), exp(y));
} END_TEST

START_TEST(exp_5) {
    double x = 1.3435893;
    ck_assert_float_eq(s21_exp(x), exp(x));
} END_TEST

START_TEST(exp_6) {
    double x = 0.000000000001287;
    ck_assert_float_eq(s21_exp(x), exp(x));
} END_TEST

START_TEST(exp_7) {
    double x = -0.000013435893;
    ck_assert_float_eq(s21_exp(x), exp(x));
} END_TEST

START_TEST(exp_8) {
    double x = 7.097827e+002;
    ck_assert_float_eq(s21_exp(x), exp(x));
} END_TEST

START_TEST(exp_9) {
    double x = s21_INF;
    ck_assert_float_eq(s21_exp(x), exp(x));

    ck_assert_ldouble_infinite(s21_exp(INFINITY));
    ck_assert_ldouble_infinite(expl(INFINITY));

    ck_assert_ldouble_nan(s21_exp(NAN));
    ck_assert_ldouble_nan(expl(NAN));
} END_TEST

START_TEST(exp_10) {
    long double x = -7.083964e+002;
    ck_assert_float_eq(s21_exp(x), exp(x));
} END_TEST

START_TEST(fabs_1) {
    double x = 12.45;
    ck_assert_float_eq(s21_fabs(x), fabs(x));
} END_TEST

START_TEST(fabs_2) {
    double x = -19.69;
    ck_assert_float_eq(s21_fabs(x), fabs(x));
} END_TEST

START_TEST(fabs_3) {
    double x = 0;
    ck_assert_float_eq(s21_fabs(x), fabs(x));
} END_TEST

START_TEST(fabs_4) {
    ck_assert_float_eq(s21_fabs(s21_INF), fabs(s21_INF));
} END_TEST

START_TEST(fabs_5) {
    ck_assert_float_eq(s21_fabs(s21_NEGATIV_INF), fabs(s21_NEGATIV_INF));
} END_TEST


START_TEST(floor_1) {
    ck_assert_ldouble_eq(floor(-2.0), s21_floor(-2.0));
} END_TEST


START_TEST(floor_2) {
    ck_assert_ldouble_eq(floor(2.0), s21_floor(2.0));
} END_TEST


START_TEST(floor_3) {
    ck_assert_ldouble_eq(floor(-0.1), s21_floor(-0.1));
} END_TEST


START_TEST(floor_4) {
    ck_assert_ldouble_eq(floor(0.1), s21_floor(0.1));
} END_TEST


START_TEST(floor_5) {
    ck_assert_ldouble_eq(floor(0.0), s21_floor(0.0));
} END_TEST

START_TEST(fmod_1) {
    ck_assert_double_eq(fmod(5.0, 12.0), s21_fmod(5.0, 12.0));
    ck_assert_double_eq(fmod(-2.03, 12.6), s21_fmod(-2.03, 12.6));
    ck_assert_double_eq(fmod(5, 2), s21_fmod(5, 2));

    ck_assert_ldouble_nan(s21_fmod(NAN, NAN));
    ck_assert_ldouble_nan(fmod(NAN, NAN));
} END_TEST

START_TEST(log_1) {
    double x = 1.0;
    ck_assert_float_eq(s21_log(x), log(x));
} END_TEST

START_TEST(log_2) {
    double x = 2.0;
    ck_assert_float_eq(s21_log(x), log(x));
} END_TEST

START_TEST(log_3) {
    double x = 0.03287;
    ck_assert_float_eq(s21_log(x), log(x));
} END_TEST

START_TEST(log_4) {
    double x = 1.3435893;
    ck_assert_float_eq(s21_log(x), log(x));
} END_TEST

START_TEST(log_5) {
    double x = 11111111111.3435893;
    ck_assert_float_eq(s21_log(x), log(x));
} END_TEST

START_TEST(log_6) {
    double x = 2.73435893;
    ck_assert_float_eq(s21_log(x), log(x));
} END_TEST

START_TEST(log_7) {
    double x = 0.00000000001287;
    ck_assert_float_eq(s21_log(x), log(x));
} END_TEST

START_TEST(log_8) {
    double x = s21_INF;
    ck_assert_float_eq(s21_log(x), log(x));

    ck_assert_ldouble_infinite(s21_log(INFINITY));
    ck_assert_ldouble_infinite(log(INFINITY));

    ck_assert_ldouble_nan(s21_log(-INFINITY));
    ck_assert_ldouble_nan(log(-INFINITY));

    ck_assert_ldouble_nan(s21_log(NAN));
    ck_assert_ldouble_nan(log(NAN));
} END_TEST

START_TEST(pow_1) {
    ck_assert_float_eq(s21_pow(3.5, 8.3), pow(3.5, 8.3));
} END_TEST

START_TEST(pow_2) {
    double res = s21_pow(-0.25, 0.5);
    double res2 = pow(-0.25, 0.5);
    ck_assert_int_eq(res, res2);
} END_TEST

START_TEST(pow_3) {
    ck_assert_float_eq(s21_pow(3.5, -8.3), pow(3.5, -8.3));
} END_TEST

START_TEST(pow_4) {
    ck_assert_float_eq(s21_pow(5, s21_INF), pow(5, s21_INF));
} END_TEST

START_TEST(pow_5) {
    ck_assert_float_eq(s21_pow(-5, s21_INF), pow(-5, s21_INF));
} END_TEST

START_TEST(pow_6) {
    ck_assert_float_eq(s21_pow(s21_INF, 0.5), pow(s21_INF, 0.5));
} END_TEST

START_TEST(pow_7) {
    ck_assert_float_eq(s21_pow(0, 0), pow(0, 0));
} END_TEST

START_TEST(pow_8) {
    ck_assert_float_eq(s21_pow(123, 0), pow(123, 0));
} END_TEST

START_TEST(pow_9) {
    double x = 0.0001287;
    ck_assert_float_eq(s21_pow(x, 0.5), pow(x, 0.5));
} END_TEST

START_TEST(pow_10) {
    ck_assert_float_eq(s21_pow(1, s21_INF), pow(1, s21_INF));
} END_TEST

START_TEST(pow_11) {
    ck_assert_float_eq(s21_pow(1, s21_NEGATIV_INF), pow(1, s21_NEGATIV_INF));
} END_TEST

START_TEST(pow_12) {
    ck_assert_float_eq(s21_pow(2, s21_NEGATIV_INF), pow(2, s21_NEGATIV_INF));
} END_TEST

START_TEST(pow_13) {
    ck_assert_float_eq(s21_pow(s21_INF, 5), pow(s21_INF, 5));
} END_TEST

START_TEST(sin_1) {
    double x = 0;
    ck_assert_double_le(fabsl(s21_sin(x) - sin(x)), s21_EPS);
} END_TEST

START_TEST(sin_2) {
    double x = -1;
    ck_assert_double_le(fabsl(s21_sin(x) - sin(x)), s21_EPS);
} END_TEST

START_TEST(sin_3) {
    double x = -2412;
    ck_assert_double_le(fabsl(s21_sin(x) - sin(x)), s21_EPS);
} END_TEST

START_TEST(sin_4) {
    double x = -0.241223;
    ck_assert_double_le(fabsl(s21_sin(x) - sin(x)), s21_EPS);
} END_TEST

START_TEST(sin_5) {
    double x = 10000;
    ck_assert_double_le(fabsl(s21_sin(x) - sin(x)), s21_EPS);
} END_TEST

START_TEST(sqrt_1) {
    double x = 1.0;
    ck_assert_float_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(sqrt_2) {
    double x = 2.0;
    ck_assert_float_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(sqrt_3) {
    double x = 0.0;
    ck_assert_float_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(sqrt_4) {
    double x = 0.03287;
    ck_assert_float_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(sqrt_5) {
    double x = 1.3435893;
    ck_assert_float_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(sqrt_6) {
    double x = 11111111111.3435893;
    ck_assert_float_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(sqrt_7) {
    double x = 2.73435893;
    ck_assert_float_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(sqrt_8) {
    double x = 2.0;
    ck_assert_int_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(sqrt_9) {
    double x = 0.00001287;
    ck_assert_float_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(sqrt_10) {
    double x = s21_INF;
    ck_assert_float_eq(s21_sqrt(x), sqrt(x));
} END_TEST

START_TEST(tan_1) {
    double x = 0;
    ck_assert_double_le(fabsl(s21_tan(x) - tan(x)), s21_EPS);
} END_TEST

START_TEST(tan_2) {
    double x = 1234.567;
    ck_assert_double_le(fabsl(s21_tan(x) - tan(x)), s21_EPS);
} END_TEST

START_TEST(tan_3) {
    double x = -241223;
    ck_assert_double_le(fabsl(s21_tan(x) - tan(x)), s21_EPS);
} END_TEST

START_TEST(tan_4) {
    double x = -0.241223;
    ck_assert_double_le(fabsl(s21_tan(x) - tan(x)), s21_EPS);
} END_TEST

START_TEST(tan_5) {
    double x = 10000;
    ck_assert_double_le(fabsl(s21_tan(x) - tan(x)), s21_EPS);
} END_TEST

Suite *tests_suite(void) {
    Suite *s21_math;
    TCase *tc_test;

    s21_math = suite_create("Tests");
    tc_test = tcase_create("test");

    tcase_add_test(tc_test, abs_1);
    tcase_add_test(tc_test, abs_2);
    tcase_add_test(tc_test, abs_3);

    tcase_add_test(tc_test, acos_1);
    tcase_add_test(tc_test, acos_2);
    tcase_add_test(tc_test, acos_3);
    tcase_add_test(tc_test, acos_4);
    tcase_add_test(tc_test, acos_5);
    tcase_add_test(tc_test, acos_6);
    tcase_add_test(tc_test, acos_7);
    tcase_add_test(tc_test, acos_8);
    tcase_add_test(tc_test, acos_9);
    tcase_add_test(tc_test, acos_10);

    tcase_add_test(tc_test, asin_1);
    tcase_add_test(tc_test, asin_2);
    tcase_add_test(tc_test, asin_3);
    tcase_add_test(tc_test, asin_4);
    tcase_add_test(tc_test, asin_5);
    tcase_add_test(tc_test, asin_6);
    tcase_add_test(tc_test, asin_7);
    tcase_add_test(tc_test, asin_8);
    tcase_add_test(tc_test, asin_9);
    tcase_add_test(tc_test, asin_10);
    tcase_add_test(tc_test, asin_11);

    tcase_add_test(tc_test, atan_1);
    tcase_add_test(tc_test, atan_2);
    tcase_add_test(tc_test, atan_3);
    tcase_add_test(tc_test, atan_4);
    tcase_add_test(tc_test, atan_5);
    tcase_add_test(tc_test, atan_6);
    tcase_add_test(tc_test, atan_7);
    tcase_add_test(tc_test, atan_8);
    tcase_add_test(tc_test, atan_9);
    tcase_add_test(tc_test, atan_10);
    tcase_add_test(tc_test, atan_11);
    tcase_add_test(tc_test, atan_12);
    tcase_add_test(tc_test, atan_13);
    tcase_add_test(tc_test, atan_14);
    tcase_add_test(tc_test, atan_15);
    tcase_add_test(tc_test, atan_16);

    tcase_add_test(tc_test, ceil_1);
    tcase_add_test(tc_test, ceil_2);
    tcase_add_test(tc_test, ceil_3);
    tcase_add_test(tc_test, ceil_4);
    tcase_add_test(tc_test, ceil_5);

    tcase_add_test(tc_test, cos_1);
    tcase_add_test(tc_test, cos_2);
    tcase_add_test(tc_test, cos_3);
    tcase_add_test(tc_test, cos_4);
    tcase_add_test(tc_test, cos_5);

    tcase_add_test(tc_test, exp_1);
    tcase_add_test(tc_test, exp_2);
    tcase_add_test(tc_test, exp_3);
    tcase_add_test(tc_test, exp_4);
    tcase_add_test(tc_test, exp_5);
    tcase_add_test(tc_test, exp_6);
    tcase_add_test(tc_test, exp_7);
    tcase_add_test(tc_test, exp_8);
    tcase_add_test(tc_test, exp_9);
    tcase_add_test(tc_test, exp_10);

    tcase_add_test(tc_test, fabs_1);
    tcase_add_test(tc_test, fabs_2);
    tcase_add_test(tc_test, fabs_3);
    tcase_add_test(tc_test, fabs_4);
    tcase_add_test(tc_test, fabs_5);

    tcase_add_test(tc_test, floor_1);
    tcase_add_test(tc_test, floor_2);
    tcase_add_test(tc_test, floor_3);
    tcase_add_test(tc_test, floor_4);
    tcase_add_test(tc_test, floor_5);

    tcase_add_test(tc_test, fmod_1);

    tcase_add_test(tc_test, log_1);
    tcase_add_test(tc_test, log_2);
    tcase_add_test(tc_test, log_3);
    tcase_add_test(tc_test, log_4);
    tcase_add_test(tc_test, log_5);
    tcase_add_test(tc_test, log_6);
    tcase_add_test(tc_test, log_7);
    tcase_add_test(tc_test, log_8);

    tcase_add_test(tc_test, pow_1);
    tcase_add_test(tc_test, pow_2);
    tcase_add_test(tc_test, pow_3);
    tcase_add_test(tc_test, pow_4);
    tcase_add_test(tc_test, pow_5);
    tcase_add_test(tc_test, pow_6);
    tcase_add_test(tc_test, pow_7);
    tcase_add_test(tc_test, pow_8);
    tcase_add_test(tc_test, pow_9);
    tcase_add_test(tc_test, pow_10);
    tcase_add_test(tc_test, pow_11);
    tcase_add_test(tc_test, pow_12);
    tcase_add_test(tc_test, pow_13);

    tcase_add_test(tc_test, sin_1);
    tcase_add_test(tc_test, sin_2);
    tcase_add_test(tc_test, sin_3);
    tcase_add_test(tc_test, sin_4);
    tcase_add_test(tc_test, sin_5);

    tcase_add_test(tc_test, sqrt_1);
    tcase_add_test(tc_test, sqrt_2);
    tcase_add_test(tc_test, sqrt_3);
    tcase_add_test(tc_test, sqrt_4);
    tcase_add_test(tc_test, sqrt_5);
    tcase_add_test(tc_test, sqrt_6);
    tcase_add_test(tc_test, sqrt_7);
    tcase_add_test(tc_test, sqrt_8);
    tcase_add_test(tc_test, sqrt_9);
    tcase_add_test(tc_test, sqrt_10);

    tcase_add_test(tc_test, tan_1);
    tcase_add_test(tc_test, tan_2);
    tcase_add_test(tc_test, tan_3);
    tcase_add_test(tc_test, tan_4);
    tcase_add_test(tc_test, tan_5);

    suite_add_tcase(s21_math, tc_test);

    return s21_math;
}

int start_tests(void) {
    int failed_count;
    Suite *s = tests_suite();
    SRunner *suite_runner = srunner_create(s);

    srunner_run_all(suite_runner, CK_NORMAL);
    failed_count = srunner_ntests_failed(suite_runner);
    srunner_free(suite_runner);
    return (failed_count == 0) ? 0 : 1;
}

int main() {
    start_tests();
    return 0;
}
