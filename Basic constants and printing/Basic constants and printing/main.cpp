#include <stdio.h>

int main(void)
{
    int age = 23;
    unsigned int count = 3000000000u;
    float score = 93.5f;
    char initial = 'Y';
    const char* name = "Yeonmin";

    printf("=== Basic Constants ===\n\n");
    printf("Name    : \t%s\n\n", name);
    printf("Initial : \t%c\n\n", initial);
    printf("Age     : \t%d\n\n", age);
    printf("Score   : \t%f\n\n", score);
    printf("Count   : \t%u\n", count);

    return 0;
}
