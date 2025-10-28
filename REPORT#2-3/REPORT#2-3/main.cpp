#include <stdio.h>

int main() {
    double g = 9.81;
    double theta = 30.0;     // �� ����
    double sin_t = 0.5;      // sin(30)
    double cos_t = 0.866;    // cos(30)
    double mu_s = 0.5, mu_k = 0.4;
    double F, Fs, a;

    F = 100 * g * sin_t;
    Fs = mu_s * 100 * g * cos_t;

    if (F <= Fs)
        printf("�������� ���� (�̲������� ����)\n");
    else {
        a = g * (sin_t - mu_k * cos_t);
        printf("�̲����� �߻�, ���ӵ� = %.3lf m/s^2\n", a);
    }

    return 0;
}
