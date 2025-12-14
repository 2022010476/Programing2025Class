#include <stdio.h>
#include <stdlib.h>

#define MAX_STEP 25
#define LOW_FUEL 15.0

/* 항공기 상태 구조체 */
typedef struct {
    double altitude;   // m
    double speed;      // m/s
    double fuel;       // %
    int phase;         // 0: 상승, 1: 순항, 2: 하강
} Aircraft;

/* 비행 단계에 따른 연료 소모 */
double fuelBurn(int phase) {
    if (phase == 0) return 3.0;
    else if (phase == 1) return 1.5;
    else return 2.5;
}

/* 항공기 상태 업데이트 */
void updateAircraft(Aircraft* ac) {
    ac->fuel -= fuelBurn(ac->phase);

    if (ac->phase == 0) {
        ac->altitude += 400;
        ac->speed += 2;
        if (ac->altitude >= 10000)
            ac->phase = 1;
    }
    else if (ac->phase == 1) {
        ac->speed = 230;
        if (ac->fuel < 40)
            ac->phase = 2;
    }
    else if (ac->phase == 2) {
        ac->altitude -= 500;
        ac->speed -= 3;
        if (ac->altitude < 1000)
            ac->altitude = 1000;
    }

    if (ac->fuel < 0)
        ac->fuel = 0;
}

int main() {
    int step;

    /* 항공기 동적 생성 */
    Aircraft* plane = (Aircraft*)malloc(sizeof(Aircraft));

    plane->altitude = 0;
    plane->speed = 180;
    plane->fuel = 100.0;
    plane->phase = 0;

    /* ===== 출력 제목 ===== */
    printf("=========================================\n");
    printf("      항공기 비행 상태 시뮬레이션\n");
    printf("=========================================\n");
    printf("Step |   고도(m) | 속도(m/s) | 연료(%%)\n");
    printf("-----------------------------------------\n");

    for (step = 1; step <= MAX_STEP; step++) {
        updateAircraft(plane);

        printf("%4d | %8.0f | %10.1f | %7.1f\n",
            step, plane->altitude, plane->speed, plane->fuel);

        if (plane->fuel < LOW_FUEL) {
            printf("-----------------------------------------\n");
            printf(">>> 경고: 연료 부족으로 시뮬레이션 종료\n");
            break;
        }
    }

    printf("=========================================\n");

    free(plane);
    return 0;
}
