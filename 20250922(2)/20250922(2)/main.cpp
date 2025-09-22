#include <stdio.h>

int main(void)
{
    char ch = 'A';
    const char* msg = "First line\n\n\tIndented second line\n\nThird line";

    double avg = 87.3456;

    printf("=== Char/String & Escapes ===\n\n");
    printf("Char : %c, code: %d\n\n", ch, ch);
    printf("Message:\n\n%s\n\n", msg);
    printf("Quotes: \"double quotes\" and 'single quotes'\n\n");
    printf("Backslash: \\\n\n");
    printf("Average: [%8.2f]\n", avg);

    return 0;
}
