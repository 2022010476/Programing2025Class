#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	// 1: ���� ����(�̸�, �й�, Ű, ������)
	char name[30];
	int id;
	float height, weight, bmi;
	// 2: scanf �Ǵ� scanf_s�� �� ������ �� �ٷ� �Է� �ޱ�
	printf("�̸� �й� Ű(cm) ������(kg)�� �Է��ϼ���: ");
	scanf("%s %d %f %f", name, &id, &height, &weight);
	// 3: ������ BMI ���(BMI = Ű * ������)
	height = height / 100.0f;
	bmi = height * weight;
	// 4-1: ������(�̸�, �й�, Ű, ������)
	printf("\n[�Է�����]\n");
	printf("�̸�: %s\n", name);
	printf("�й�: %d\n", id);
	printf("Ű: %.2f m\n", height);
	printf("������: %.2f kg\n", weight);
	// 4-2: ������(BMI)
	printf("BMI: %.2f\n", bmi);
	return 0;
}