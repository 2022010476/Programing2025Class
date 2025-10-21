#include <stdio.h>

int main() {
    int a, b;

    // 입력 단계
    printf("두 정수를 입력하세요: ");
    scanf_s("%d %d", &a, &b);

    // 관계 연산자 예시
    if (a > b)
        printf("a가 b보다 큽니다.\n");
    else if (a == b)
        printf("a와 b는 같습니다.\n");
    else
        printf("a가 b보다 작습니다.\n");

    // 논리 연산자 예시
    if (a > 0 && b > 0)
        printf("두 수 모두 양수입니다.\n");
    else if (a < 0 || b < 0)
        printf("하나 이상의 수가 음수입니다.\n");
    else
        printf("둘 다 0이거나 부호가 다릅니다.\n");

    // 증감 연산자 예시
    printf("a++의 결과: %d\n", a++);
    printf("++b의 결과: %d\n", ++b);

    // 최종 결과 확인
    printf("증감 후 a = %d, b = %d\n", a, b);

    return 0;
}
