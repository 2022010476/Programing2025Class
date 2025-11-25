#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 로또 번호 6개 생성
void generateLotto(int* lotto);

// 사용자 번호와 비교하여 일치 개수 계산
int countMatch(int* lotto, int* user);

int main() {
    int lotto[6];
    int user[6];
    int i;
    int match;

    generateLotto(lotto);

    // 사용자 번호 입력
    printf("당신의 번호 6개를 입력하세요: ");
    for (i = 0; i < 6; i++) {
        scanf_s("%d", &user[i]);
    }

    match = countMatch(lotto, user);

    // 로또 번호 출력
    printf("로또 번호: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", lotto[i]);
    }
    printf("\n");

    // 일치 개수 출력
    printf("일치한 숫자의 개수: %d\n", match);

    return 0;
}

void generateLotto(int* lotto) {
    int i, j, num;

    srand((unsigned)time(NULL));

    for (i = 0; i < 6; i++) {
        num = rand() % 45 + 1;

        // 중복 제거
        for (j = 0; j < i; j++) {
            if (lotto[j] == num) {
                i--;
                break;
            }
        }

        if (j == i) {
            lotto[i] = num;
        }
    }
}

int countMatch(int* lotto, int* user) {
    int i, j;
    int cnt = 0;

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (lotto[i] == user[j]) {
                cnt++;
            }
        }
    }

    return cnt;
}
