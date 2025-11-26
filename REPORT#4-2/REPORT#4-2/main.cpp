#include <stdio.h>
#include <stdlib.h>   // rand(), srand() 사용
#include <time.h>     // time() 사용

// 배열에 난수를 채우는 함수
void gn(int* arr, int size);

// 특정 범위에 해당하는 값들의 통계를 계산하는 함수
void cs(int* arr, int size, int CS_min, int CS_max);

int main() {
    int arr[100];
    int CS_min, CS_max;

    gn(arr, 100);       // 난수를 생성하여 배열에 저장

    // 사용자 범위 입력
    printf("범위의 최소값을 입력하세요: ");
    scanf_s("%d", &CS_min);

    printf("범위의 최대값을 입력하세요: ");
    scanf_s("%d", &CS_max);

    cs(arr, 100, CS_min, CS_max);  // 통계 계산

    return 0;
}

void gn(int* arr, int size) {
    int i;

    srand((unsigned)time(NULL));   // 난수 생성 초기화

    // 배열에 1~100 사이의 난수를 채움
    for (i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

void cs(int* arr, int size, int CS_min, int CS_max) {
    int i;
    int CS_count = 0;
    int CS_sum = 0;
    float CS_mean;
    float CS_variance = 0;
    float CS_stddev;

    // 범위 내 값들의 합과 개수 계산
    for (i = 0; i < size; i++) {
        if (arr[i] >= CS_min && arr[i] <= CS_max) {
            CS_sum += arr[i];
            CS_count++;
        }
    }

    // 범위에 해당하는 값이 없을 때
    if (CS_count == 0) {
        printf("해당 범위의 정수가 없습니다.\n");
        return;
    }

    CS_mean = (float)CS_sum / CS_count;   // 평균 계산

    // 분산 계산
    for (i = 0; i < size; i++) {
        if (arr[i] >= CS_min && arr[i] <= CS_max) {
            CS_variance += (arr[i] - CS_mean) * (arr[i] - CS_mean);
        }
    }

    CS_variance /= CS_count;   // 분산 확정

    // 뉴턴 근사법으로 표준편차 계산
    CS_stddev = CS_variance;
    for (i = 0; i < 10; i++) {
        CS_stddev = 0.5f * (CS_stddev + CS_variance / CS_stddev);
    }

    // 결과 출력
    printf("합: %d\n", CS_sum);
    printf("분산: %.3f\n", CS_variance);
    printf("표준편차: %.3f\n", CS_stddev);
}
