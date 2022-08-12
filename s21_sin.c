#include "s21_math.h"

long double s21_sin(double x) {
    x = x - 2 * s21_PI * (double)((int)(x / (2 * s21_PI)));
    double start = 0;
    double r = x;
    int n = 1;
    while (r > s21_EPS || -r > s21_EPS) {
        start = start + r;
        n = n + 2;
        r = (-r * x * x) / (n * (n - 1));
    }
    return start;
}
