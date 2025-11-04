#include <stdio.h>

int main() {
    int i;

    printf("1부터 10까지 출력하지만, 6은 건너뜁니다.\n");

    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            printf("(i가 6이므로 출력 건너뜀)\n");
            continue;  // 현재 반복을 건너뛰고 다음 반복으로 이동
        }
        printf("%d ", i);
    }

    printf("\n프로그램이 종료되었습니다.\n");

    return 0;
}
