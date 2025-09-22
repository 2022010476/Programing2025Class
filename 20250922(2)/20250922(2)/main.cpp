#include <stdio.h>

int main(void)
{
    char ch = 'A';
    const char* msg = "First line\n\tIndented second line\nThird line";

    double avg = 87.3456;

    printf("=== Char/String & Escapes ===\n");
    printf("Char : %c, code: %d\n", ch, ch);
    printf("Message:\n%s\n", msg);
    printf("Quotes: \"double quotes\" and 'single quotes'\n");
    printf("Backslash: \\\n");
    printf("Average: [%8.2f]\n", avg);

    return 0;
}
