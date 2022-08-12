#include "s21_math.h"

long double s21_sqrt(double x) {
    long double sqrt;
    if (x >= 0)
        sqrt = s21_pow(x, 0.5);
    else
        sqrt = s21_NAN;
    return sqrt;
}
