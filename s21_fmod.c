#include "s21_math.h"

long double s21_fmod(double x, double y) {
    long double fmod;
    if (y == 0) { fmod = s21_NAN;
    } else {
        long double ld_x = x, ld_y = y;
        long long mod = x / y;
        fmod = ld_x - mod * ld_y;
    }
    return fmod;
}
