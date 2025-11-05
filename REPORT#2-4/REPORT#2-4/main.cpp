#include <stdio.h>

int main() {
    double V;                 // 유속 (m/s)
    double D = 0.05;          // 배관 내경 (m)
    double rho = 998.2;       // 밀도 (kg/m3)
    double mu = 0.001002;     // 점도 (Pa·s)
    double Re, q;
    double pi = 3.14159;      // math.h 없이 직접 정의

    printf("유속 V(m/s)을 입력하세요: ");
    scanf_s("%lf", &V);

    if (V <= 0) {
        printf("invalid input\n");
        return 0;
    }

    Re = (rho * V * D) / mu;
    q = V * (pi * D * D / 4.0);

    printf("Reynolds 수: %.2lf\n", Re);
    printf("단면 유량 q: %.6lf m^3/s\n", q);

    if (Re < 2300)
        printf("유동 상태: Laminar (층류)\n");
    else if (Re >= 2300 && Re < 4000)
        printf("유동 상태: Transient (천이류)\n");
    else
        printf("유동 상태: Turbulent (난류)\n");

    return 0;
}
