#include "s21_math.h"

long double s21_tailor_log(long double x) {
    long double res;
    long double tmp = x;
    int count = 0;
    while (tmp >= 1) {
        tmp /= s21_E;
        count++;
    }
    res = tmp - 1;
    long double term = res;
    for (int i = 1; s21_fabs(term) > 1e-12; i++) {
        term = (-1) * term * (tmp - 1) * i / (i + 1);
        res += term;
    }
    res += count;
    return res;
}

long double s21_log(double x) {
    long double res;
    if (x == 0.0) {
        res = -1 * s21_INF;
    } else if (x < 0 || x != x) {
        res = s21_NAN;
    } else if (x == 1.0) {
        res = 0.0;
    } else if (x == s21_INF) {
        res = s21_INF;
    } else if (x < 1e-8) {
        res = s21_LN_E8 + s21_tailor_log(x * 1e8L);
    } else if (x <= 2) {
        res = s21_tailor_log(x);
    } else {
        int power = 0;
        while (x >= 2) {
            x /= s21_E;
            power++;
        }
        res = power + s21_tailor_log(x);
    }
    return res;
}
