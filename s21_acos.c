#include "s21_math.h"

long double s21_acos(double x) {
    return s21_PI / 2 - s21_asin(x);
}
