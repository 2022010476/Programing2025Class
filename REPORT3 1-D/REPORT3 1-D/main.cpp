#include <stdio.h>

int main() {
    int i;

    printf("1부터 10까지 출력하지만, 6에서 중단합니다.\n");

    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            printf("i가 6이므로 반복문을 종료합니다.\n");
            break;  // 반복문 즉시 종료
        }
        printf("%d ", i);
    }

    printf("\n프로그램이 종료되었습니다.\n");

    return 0;
}
