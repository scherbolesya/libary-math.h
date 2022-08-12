#include "s21_math.h"

long double s21_floor(double x) {
    long double val = (long long)x;
    if (x != val) {
        if (x <= 0) {
            val = val - 1;
        }
    }
    return val;
}
