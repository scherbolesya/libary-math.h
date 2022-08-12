#include "s21_math.h"

long double s21_pow(double base, double exp) {
    long double res = 1;
    if (exp > 0) {
        if (base != 0) {
            while (exp >= 1 && exp != s21_INF) {
                res = res * base;
                exp--;
            }
            if (exp == s21_INF) {
                if (base == 1)
                    res = 1;
                else
                    res = s21_INF;
            } else if (exp != 0) {
                res = res * s21_exp(exp * s21_log(base));
            }
        } else {
            res = 0;
        }
    }
    if (exp < 0) {
        if (base != 0) {
            while (exp <= -1 && exp != -1 * s21_INF) {
                res = res * (1 / base);
                exp++;
            }
            if (exp == -1 * s21_INF) {
                if (base != 1)
                    res = 0;
                else
                    res = 1;
            } else if (exp != 0 && s21_fabs(base) != s21_INF) {
                res = res * s21_exp(exp * s21_log(base));
            }
        } else {
            res = s21_INF;
        }
    }
    return res;
}
