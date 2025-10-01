#include <stdio.h>

int main(void)

{
	int nAge = 99;
	float fHeight = 999.0f;
	double dWeight = 999.0;

	printf("Input your information(Age, Height. Weight):\n");
	scanf_s("%d%f%If", &nAge, &fHeight, &dWeight);
	printf("Output\n");
	printf("(Age:%d)(Height:%.2f)(Weight:%.1If)\n", nAge, fHeight, dWeight);

	return 0;
}