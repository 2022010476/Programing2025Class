#include <stdio.h>

float centi_to_meter(float cm);

int main(void)
{
    float res;
    res = centi_to_meter(187);
    printf("%.2fm\n", res);
    return 0;
}

float centi_to_meter(float cm)
{
    float m;
    m = cm / 100;
    return m;
}