#include <stdio.h>

// 벡터 입력 함수
void inputVector(float* v);

// 내적 계산 함수
float dotProduct(float* a, float* b);

// 외적 계산 함수
void crossProduct(float* a, float* b, float* c);

int main() {
    float v1[3];      // 첫 번째 벡터
    float v2[3];      // 두 번째 벡터
    float cross[3];   // 외적 결과 저장용
    float dot;        // 내적 결과

    // 벡터 입력
    printf("첫 번째 벡터를 입력하세요 (예: 1 2 3): ");
    inputVector(v1);

    printf("두 번째 벡터를 입력하세요 (예: 4 5 6): ");
    inputVector(v2);

    // 내적 계산
    dot = dotProduct(v1, v2);

    // 외적 계산
    crossProduct(v1, v2, cross);

    // 출력
    printf("내적 결과: %.3f\n", dot);
    printf("외적 결과: %.3f %.3f %.3f\n", cross[0], cross[1], cross[2]);

    return 0;
}

void inputVector(float* v) {
    // 3개의 실수 입력받기
    scanf_s("%f %f %f", &v[0], &v[1], &v[2]);
}

float dotProduct(float* a, float* b) {
    // 내적 계산
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

void crossProduct(float* a, float* b, float* c) {
    // 외적 계산
    c[0] = a[1] * b[2] - a[2] * b[1];
    c[1] = a[2] * b[0] - a[0] * b[2];
    c[2] = a[0] * b[1] - a[1] * b[0];
}
