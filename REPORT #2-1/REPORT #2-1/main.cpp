#include <stdio.h>

int main() {
    int person;
    float load, total;

    printf("승객 수와 짐의 무게(kg)를 입력하세요: ");
    scanf_s("%d %f", &person, &load);

    if (person < 1 || person > 3 || load < 0) {
        printf("invalid input\n");
        return 0;
    }

    total = person * 70 + load;

    if (total <= 600)
        printf("OK (총하중: %.1fkg)\n", total);
    else
        printf("Overload (총하중: %.1fkg)\n", total);

    return 0;
}
