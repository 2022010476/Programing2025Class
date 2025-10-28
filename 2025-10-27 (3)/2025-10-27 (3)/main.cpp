#include <stdio.h>

int ref_func(int n);

int main(void)
{
    int n, res;
    scanf("%d", &n);
    res = ref_func(n);
    printf("%d\n", res);
    return 0;
}

int ref_func(int n)
{
    int sum = 0, i;
    for (i = 1; i <= n; i++)
        sum += i;
    return sum;
}
