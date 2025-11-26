#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// 배열 출력 함수
void PrintArray(float* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);  // 배열 요소 출력
    }
    printf("\n");
}

// 정렬 함수 (오름차순 / 내림차순)
void CalcSortArray(float* arr, int size, int mode) {
    // mode = 1 → 오름차순, mode 2 → 내림차순
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {

            // 오름차순
            if (mode == 1 && arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

            // 내림차순
            else if (mode == 2 && arr[j] < arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    float arr[SIZE];
    int type;  // 정수/실수 선택
    int mode;  // 정렬 선택

    srand((unsigned int)time(NULL)); // 랜덤 시드 초기화

    // 정수/실수 선택
    printf("배열을 정수로 생성할지(1), 실수로 생성할지(2) 선택: ");
    scanf_s("%d", &type);

    // 랜덤 배열 생성
    for (int i = 0; i < SIZE; i++) {

        // 정수 랜덤 생성
        if (type == 1) {
            arr[i] = (rand() % 201) - 100;  // -100 ~ +100
        }
        // 실수 랜덤 생성
        else {
            arr[i] = ((float)rand() / RAND_MAX) * 200.0f - 100.0f;
        }
    }

    // 생성된 배열 출력
    printf("\n[랜덤 생성된 배열]\n");
    PrintArray(arr, SIZE);

    // 정렬 방식 선택
    printf("\n정렬 방식을 선택하세요 (1 = 오름차순, 2 = 내림차순): ");
    scanf_s("%d", &mode);

    // 정렬 수행
    CalcSortArray(arr, SIZE, mode);

    // 정렬된 배열 출력
    printf("\n[정렬된 배열]\n");
    PrintArray(arr, SIZE);

    return 0;
}
