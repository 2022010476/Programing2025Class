#include <stdio.h>

// 구조체: 멤버마다 독립된 메모리를 가져 동시에 서로 다른 값 저장 가능
struct Student {
    int age;
    float height;
    char grade;
};

// 공용체: 모든 멤버가 같은 메모리를 공유하여 마지막에 저장한 값만 유지됨
union Data {
    int number;
    float score;
    char letter;
};

int main() {

    struct Student s; // 구조체 사용 예시: 모든 멤버 값이 서로 영향받지 않음
    s.age = 20;
    s.height = 175.5f;
    s.grade = 'A';

    printf("구조체 결과\n");
    printf("나이: %d\n", s.age);
    printf("키: %.1f\n", s.height);
    printf("학점: %c\n\n", s.grade);

    union Data d; // 공용체 사용 예시: 저장할 때마다 이전 값이 덮어써짐

    d.number = 100;
    printf("공용체 number 저장 후: number = %d\n", d.number);

    d.score = 98.5f;
    printf("공용체 score 저장 후: score = %.1f\n", d.score);
    printf("number 값(덮어써짐): %d\n", d.number);

    d.letter = 'Z';
    printf("공용체 letter 저장 후: letter = %c\n", d.letter);
    printf("score 값(덮어써짐): %.1f\n", d.score);

    return 0;
}
