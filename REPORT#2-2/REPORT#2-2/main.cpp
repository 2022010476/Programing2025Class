#include <stdio.h>

int main() {
    int door, time;
    float temp;

    printf("�� ����(0:����, 1:����), �µ�(��C), �ð�(sec)�� �Է��ϼ���: ");
    scanf_s("%d %f %d", &door, &temp, &time);

    if ((door != 0 && door != 1) || temp < -50 || temp > 50 || time < 0) {
        printf("invalid input\n");
        return 0;
    }

    if (door == 0) { // �� ����
        if (temp >= 2.0 && temp <= 8.0)
            printf("Normal\n");
        else if (time <= 30)
            printf("Warning\n");
        else
            printf("Critical\n");
    }
    else { // �� ����
        if (time >= 60 && (temp < 2.0 || temp > 8.0))
            printf("Critical\n");
        else
            printf("Normal\n");
    }

    return 0;
}
