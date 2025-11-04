#include <stdio.h>   // 표준 입출력 함수를 사용하기 위한 헤더 파일

// 함수의 선언 부분
// add 함수는 두 개의 정수를 입력받아 합을 반환한다.
int add(int x, int y) {
    int result;         // 결과를 저장할 변수 선언
    result = x + y;     // 입력된 두 수를 더함
    return result;      // 계산된 결과값을 main 함수로 반환
}

int main() {
    int a, b;           // 사용자 입력을 받을 변수 선언
    int sum;            // 합계를 저장할 변수 선언

    // 사용자에게 두 정수를 입력받음
    printf("두 개의 정수를 입력하세요: ");
    scanf_s("%d %d", &a, &b);

    // add 함수를 호출하여 두 수의 합을 계산
    sum = add(a, b);

    // 결과 출력
    printf("두 수의 합은 %d 입니다.\n", sum);

    return 0;           // 프로그램 정상 종료
}
