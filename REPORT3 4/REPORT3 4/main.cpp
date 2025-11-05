#include <stdio.h>   // 표준 입출력 함수 사용

int main() {
    int i, low, high;            // 반복변수, 하한, 상한
    int num[10];                 // 난수를 저장할 배열
    int sum = 0;                 // 합계 저장 변수
    float mean, var = 0, std;    // 평균, 분산, 표준편차

    printf("하한과 상한을 입력하세요: ");
    scanf_s("%d %d", &low, &high); // 두 정수를 입력받음

    // 하한이 상한보다 크면 교환
    if (low > high) {
        int temp = low;
        low = high;
        high = temp;
    }

    // 난수 생성 및 합 계산
    for (i = 0; i < 10; i++) {
        num[i] = (i * 37 + 23) % (high - low + 1) + low; // 간단한 계산식으로 난수 유사값 생성
        sum = sum + num[i];                              // 합계 누적
    }

    mean = (float)sum / 10;                              // 평균 계산

    // 분산 계산
    for (i = 0; i < 10; i++) {
        var = var + (num[i] - mean) * (num[i] - mean);   // 편차 제곱의 합
    }
    var = var / 10;                                      // 분산 평균
    std = var * 0.5;                                     // sqrt 함수 대신 근사값(√대신 0.5배) 사용

    // 결과 출력
    printf("\n--- 결과 ---\n");
    printf("난수들: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }
    printf("\n합계: %d\n", sum);
    printf("평균: %.2f\n", mean);
    printf("분산: %.2f\n", var);
    printf("표준편차(근사): %.2f\n", std);

    return 0;
}
