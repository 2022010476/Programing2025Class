#include <stdio.h>   // 표준 입출력 사용

int main() {
    int random;       // 정답 숫자
    int guess;        // 사용자 입력
    int i;            // 반복 제어 변수

    // 난수 대체 계산식 (고정 패턴이지만 의사난수처럼 사용)
    random = (37 * 5 + 13) % 100 + 1;  // 1~100 사이의 수

    printf("1부터 100 사이의 숫자를 맞혀보세요! (총 10회 시도 가능)\n");

    for (i = 1; i <= 10; i++) {           // 최대 10회 반복
        printf("%d번째 시도: ", i);
        scanf_s("%d", &guess);            // 사용자 입력

        if (guess == random) {            // 정답일 때
            printf("정답입니다! %d번째 만에 맞췄습니다.\n", i);
            break;                      // 반복 종료
        }
        else if (guess > random) {        // 입력값이 더 큰 경우
            printf("더 작은 수입니다.\n");
        }
        else {                           // 입력값이 더 작은 경우
            printf("더 큰 수입니다.\n");
        }
    }

    if (i > 10) {                         // 10회 모두 실패 시
        printf("도전 실패! 정답은 %d였습니다.\n", random);
    }

    return 0;                           // 프로그램 종료
}
