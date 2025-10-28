#include <stdio.h>

int main() {
    int door, time;
    float temp;

    printf("문 상태(0:닫힘, 1:열림), 온도(°C), 시간(sec)을 입력하세요: ");
    scanf_s("%d %f %d", &door, &temp, &time);

    if ((door != 0 && door != 1) || temp < -50 || temp > 50 || time < 0) {
        printf("invalid input\n");
        return 0;
    }

    if (door == 0) { // 문 닫힘
        if (temp >= 2.0 && temp <= 8.0)
            printf("Normal\n");
        else if (time <= 30)
            printf("Warning\n");
        else
            printf("Critical\n");
    }
    else { // 문 열림
        if (time >= 60 && (temp < 2.0 || temp > 8.0))
            printf("Critical\n");
        else
            printf("Normal\n");
    }

    return 0;
}
