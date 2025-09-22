#include <stdio.h>

#define COURSE_NAME "C Programming"
#define YEAR        2025
#define WIDTH_COL   12

int main(void)
{
    const char* title = "C \"printf\" demo";
    const double PI = 3.141592653589793;
    const unsigned int uval = 123;
    const char ch = 'A';
    const int ver = 1;

    printf("=== Constants & Formats ===\n");
    printf("Course: %s (v%d, %d)\n", COURSE_NAME, ver, YEAR);
    printf("Title : %s\n", title);
    printf("PI default : %f\n", PI);
    printf("PI 2 digits : %.2f\n", PI);
    printf("Width demo : [%*u]\n", WIDTH_COL, uval);
    printf("Char sample : %c\n", ch);
    printf("Backslash : \\\n");                          

    return 0;
}
