#include <stdio.h>

int main(void)
{
	int num1, num2;
	char op;
	int result;

	printf("��Ģ���� �Է�(����): ");
	scanf_s("%d %c %d", &num1, &op, 1, &num2);

	switch (op)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		printf("�߸��� �������Դϴ�.\n");
		
		return 0;
	}
	printf("%d %c %d = %d\n", num1, op, num2, result);

	return 0;
}