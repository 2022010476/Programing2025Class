#include <stdio.h>

int main(void)
{
	int dan;
	printf("����� ���� �Է��ϼ��� (2~9): ");
	scanf_s("%d", &dan);
	if (dan < 2 || dan > 9)
	{
		printf("�߸��� �Է��Դϴ�.\n");
		return 0;
	}
	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", dan, i, dan * i);
	}
	return 0;
}