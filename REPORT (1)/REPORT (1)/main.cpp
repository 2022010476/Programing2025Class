#include <stdio.h>

int main() {
    int a, b;

    // �Է� �ܰ�
    printf("�� ������ �Է��ϼ���: ");
    scanf_s("%d %d", &a, &b);

    // ���� ������ ����
    if (a > b)
        printf("a�� b���� Ů�ϴ�.\n");
    else if (a == b)
        printf("a�� b�� �����ϴ�.\n");
    else
        printf("a�� b���� �۽��ϴ�.\n");

    // �� ������ ����
    if (a > 0 && b > 0)
        printf("�� �� ��� ����Դϴ�.\n");
    else if (a < 0 || b < 0)
        printf("�ϳ� �̻��� ���� �����Դϴ�.\n");
    else
        printf("�� �� 0�̰ų� ��ȣ�� �ٸ��ϴ�.\n");

    // ���� ������ ����
    printf("a++�� ���: %d\n", a++);
    printf("++b�� ���: %d\n", ++b);

    // ���� ��� Ȯ��
    printf("���� �� a = %d, b = %d\n", a, b);

    return 0;
}
