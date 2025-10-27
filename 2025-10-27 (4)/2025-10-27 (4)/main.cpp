#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(int a, int b);
int mod(int a, int b);

int main(void)
{
    int x, y;
    scanf_s("%d %d", &x, &y);

    printf("µ¡¼À: %d\n", add(x, y));
    printf("»¬¼À: %d\n", sub(x, y));
    printf("°ö¼À: %d\n", mul(x, y));
    printf("³ª´°¼À: %.2f\n", divi(x, y));
    printf("³ª¸ÓÁö: %d\n", mod(x, y));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divi(int a, int b)
{
    return (float)a / b;
}

int mod(int a, int b)
{
    return a % b;
}
