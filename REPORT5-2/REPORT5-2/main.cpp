#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

// 위치 갱신 함수
void updatePosition(double* x, double* y, double* vx, double* vy, double dt, double g) {
    *x = *x + (*vx) * dt;
    *y = *y + (*vy) * dt;
    *vy = *vy - g * dt;
}

int main() {
    // 초기 조건 설정
    double angle = 75.0;
    double v0 = 15.0;
    double g = 9.81;
    double dt = 0.01;

    // 속도 성분 계산
    double rad = angle * M_PI / 180.0;
    double vx = v0 * cos(rad);
    double vy = v0 * sin(rad);

    // 위치, 시간, 결과 변수
    double x = 0.0, y = 0.0;
    double t = 0.0;
    double maxHeight = 0.0;
    double maxDistance = 0.0;

    // 시뮬레이션 반복문 (y <= 0이면 종료)
    while (1) {
        updatePosition(&x, &y, &vx, &vy, dt, g);

        // 최고 높이 저장
        if (y > maxHeight) {
            maxHeight = y;
        }

        // 최대 수평거리 저장
        if (x > maxDistance) {
            maxDistance = x;
        }

        // 바닥 도달 시 종료
        if (y <= 0.0) {
            break;
        }

        t += dt;
    }

    // 결과 출력
    printf("체공 시간: %.3f 초\n", t);
    printf("최고 도달 높이: %.3f m\n", maxHeight);
    printf("최대 수평 도달거리: %.3f m\n", maxDistance);

    return 0;
}
