#include <stdio.h>

int main() {
    int person;
    float load, total;

    printf("�°� ���� ���� ����(kg)�� �Է��ϼ���: ");
    scanf_s("%d %f", &person, &load);

    if (person < 1 || person > 3 || load < 0) {
        printf("invalid input\n");
        return 0;
    }

    total = person * 70 + load;

    if (total <= 600)
        printf("OK (������: %.1fkg)\n", total);
    else
        printf("Overload (������: %.1fkg)\n", total);

    return 0;
}
