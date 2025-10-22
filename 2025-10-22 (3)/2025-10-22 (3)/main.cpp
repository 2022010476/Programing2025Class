#include <stdio.h>

int main(void)
{
	int a, b, x, y, temp, gcd, lcm;

	printf("두 정수를 입력하세요: ");
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

	printf("최대공약수(GCD): %d\n", gcd);
	printf("최소공배수(LCB): %d\n", lcm);

	return 0;
}