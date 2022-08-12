#include "s21_math.h"

long double s21_fabs(double x) {
    long double a = x;
    if (x < 0 && x != s21_INF && x != 0)
        a = -x;
    return a;
}
