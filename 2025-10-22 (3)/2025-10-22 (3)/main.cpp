#include <stdio.h>

int main(void)
{
	int a, b, x, y, temp, gcd, lcm;

	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &a, &b);

	x = a;
	y = b;

	do
	{
		temp = x % y;
		x = y;
		y = temp;
	} while (y != 0)

	gcd = x;
	lcm = (a * b) / gcd;

	printf("�ִ�����(GCD): %d\n", gcd);
	printf("�ּҰ����(LCB): %d\n", lcm);

	return 0;
}