#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 3x3 행렬 출력
void printMatrix(int A[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", A[i][j]);
        }
        printf("\n");
    }
}

// 행렬 덧셈
void addMatrix(int A[3][3], int B[3][3], int R[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            R[i][j] = A[i][j] + B[i][j];
}

// 행렬 뺄셈
void subMatrix(int A[3][3], int B[3][3], int R[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            R[i][j] = A[i][j] - B[i][j];
}

// 스칼라 곱
void scalarMul(int A[3][3], int k, int R[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            R[i][j] = A[i][j] * k;
}

// 행렬 곱
void mulMatrix(int A[3][3], int B[3][3], int R[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            R[i][j] = 0;
            for (int k = 0; k < 3; k++)
                R[i][j] += A[i][k] * B[k][j];
        }
    }
}

// 3x3 행렬의 determinant 계산
int determinant(int A[3][3]) {
    int det = 0;
    det = A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
        - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
        + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    return det;
}

// 3x3 행렬의 역행렬 계산
int inverseMatrix(int A[3][3], double R[3][3]) {
    int det = determinant(A);
    if (det == 0) return 0;

    double invDet = 1.0 / det;

    R[0][0] = (A[1][1] * A[2][2] - A[1][2] * A[2][1]) * invDet;
    R[0][1] = -(A[0][1] * A[2][2] - A[0][2] * A[2][1]) * invDet;
    R[0][2] = (A[0][1] * A[1][2] - A[0][2] * A[1][1]) * invDet;

    R[1][0] = -(A[1][0] * A[2][2] - A[1][2] * A[2][0]) * invDet;
    R[1][1] = (A[0][0] * A[2][2] - A[0][2] * A[2][0]) * invDet;
    R[1][2] = -(A[0][0] * A[1][2] - A[0][2] * A[1][0]) * invDet;

    R[2][0] = (A[1][0] * A[2][1] - A[1][1] * A[2][0]) * invDet;
    R[2][1] = -(A[0][0] * A[2][1] - A[0][1] * A[2][0]) * invDet;
    R[2][2] = (A[0][0] * A[1][1] - A[0][1] * A[1][0]) * invDet;

    return 1;
}

int main() {
    srand((unsigned)time(NULL));

    int A[3][3], B[3][3], addR[3][3], subR[3][3], scalarR[3][3], mulR[3][3];
    double invA[3][3];
    int k;

    // 무작위 행렬 2개 생성
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            A[i][j] = rand() % 11 - 5; // -5 ~ 5 랜덤
            B[i][j] = rand() % 11 - 5;
        }
    }

    // 무작위 스칼라 생성
    k = rand() % 11 - 5;

    printf("행렬 A:\n");
    printMatrix(A);

    printf("\n행렬 B:\n");
    printMatrix(B);

    printf("\n스칼라 k = %d\n", k);

    // 덧셈 결과
    addMatrix(A, B, addR);
    printf("\nA + B:\n");
    printMatrix(addR);

    // 뺄셈 결과
    subMatrix(A, B, subR);
    printf("\nA - B:\n");
    printMatrix(subR);

    // 스칼라 곱 결과
    scalarMul(A, k, scalarR);
    printf("\nk * A:\n");
    printMatrix(scalarR);

    // 행렬 곱 결과
    mulMatrix(A, B, mulR);
    printf("\nA * B:\n");
    printMatrix(mulR);

    // 역행렬 계산 가능 여부 확인
    int detA = determinant(A);
    printf("\nA의 determinant = %d\n", detA);

    if (detA == 0) {
        printf("A는 역행렬이 존재하지 않습니다.\n");
    }
    else {
        printf("A는 역행렬이 존재합니다.\n");
        inverseMatrix(A, invA);

        printf("\nA의 역행렬:\n");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%8.3f ", invA[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
