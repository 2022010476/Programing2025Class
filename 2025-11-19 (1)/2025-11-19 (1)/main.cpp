#include <stdio.h>

void cal(float* x1, float* y1, float* x2, float* y2, float* slope, float* bias)
{
	*slope = (*y2 - *y1) / (*x2 - *x1);
	*bias = *y1 - (*slope * *x1);
}

int main(void)
{
	float x1, y1;
	float x2, y2;
	float slope, bias;

	printf("Input 1st point information:\n");
	scanf_s("%f %f", &x1, &y1);

	printf("\nInput 2nd point information:\n");
	scanf_s("%f %f", &x2, &y2);

	cal(&x1, &y1, &x2, &y2, &slope, &bias);

	printf("\nCalculated Output, line equation:\n");
	printf("slope: %.4f\n", slope);
	printf("bias: %.4f\n", bias);

	return 0;
}