#include "s21_math.h"

long double s21_exp(double x) {
    long double ex = 1.0;
    long double tail = 1.0;
    if (x == s21_INF) {
        ex = s21_INF;
    } else if (x == -1 * s21_INF) {
        ex = 0;
    } else if (x == s21_NAN) {
        ex = s21_NAN;
    } else {
        for (int i = 1; s21_fabs(tail / ex) >= 1e-100; i++) {
            tail = (tail * x) / i;
            ex += tail;
        }
        if (ex == s21_INF)
            ex = s21_INF;
        else if (ex == -1 * s21_INF)
            ex = 0;
        else if (ex == s21_NAN)
            ex = s21_NAN;
    }
    return ex;
}
