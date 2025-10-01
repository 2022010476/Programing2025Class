#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	// 1: 변수 선언(이름, 학번, 키, 몸무게)
	char name[30];
	int id;
	float height, weight, bmi;
	// 2: scanf 또는 scanf_s로 위 정보를 한 줄로 입력 받기
	printf("이름 학번 키(cm) 몸무게(kg)를 입력하세요: ");
	scanf("%s %d %f %f", name, &id, &height, &weight);
	// 3: 간단한 BMI 계산(BMI = 키 * 몸무게)
	height = height / 100.0f;
	bmi = height * weight;
	// 4-1: 결과출력(이름, 학번, 키, 몸무게)
	printf("\n[입력정보]\n");
	printf("이름: %s\n", name);
	printf("학번: %d\n", id);
	printf("키: %.2f m\n", height);
	printf("몸무게: %.2f kg\n", weight);
	// 4-2: 결과출력(BMI)
	printf("BMI: %.2f\n", bmi);
	return 0;
}