#include <stdio.h>
#include <math.h> // 표준편차 계산을 위해 math 헤더파일 사용

int main(void)
{
	float data[10];
	float sum = 0, mean, variance = 0, stddev;
	int i, j;
	int rank[10];

	// 실수 10개 입력
	for (i = 0; i < 10; i++)
	{
		printf("%d번째 실수를 입력하세요: ", i + 1);
		scanf_s("%f", &data[i]);
		sum += data[i];
	}

	// 평균 계산
	mean = sum / 10;

	// 분산 계산
	for (i = 0; i < 10; i++)
	{
		variance += (data[i] - mean) * (data[i] - mean);
	}
	variance /= 10;

	// 표준편차 (sqrt 사용)
	stddev = sqrt(variance);

	// 순위 계산
	for (i = 0; i < 10; i++)
	{
		rank[i] = 1;
		for (j = 0; j < 10; j++)
		{
			if (data[i] < data[j])
				rank[i]++;
		}
	}

	// 결과 출력
	printf("\n\t순번\t입력값\t순위\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("\t%d\t%.2f\t%d\n", i + 1, data[i], rank[i]);
	}

	printf("전체 데이터 평균: %.2f\n", mean);
	printf("전체 데이터 분산: %.2f\n", variance);
	printf("전체 데이터 표준편차: %.2f\n", stddev);

	return 0;
}