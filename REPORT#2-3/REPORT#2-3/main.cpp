#include <stdio.h>

int main() {
    double g = 9.81;
    double theta = 30.0;     // 도 단위
    double sin_t = 0.5;      // sin(30)
    double cos_t = 0.866;    // cos(30)
    double mu_s = 0.5, mu_k = 0.4;
    double F, Fs, a;

    F = 100 * g * sin_t;
    Fs = mu_s * 100 * g * cos_t;

    if (F <= Fs)
        printf("정지상태 유지 (미끄러지지 않음)\n");
    else {
        a = g * (sin_t - mu_k * cos_t);
        printf("미끄러짐 발생, 가속도 = %.3lf m/s^2\n", a);
    }

    return 0;
}
