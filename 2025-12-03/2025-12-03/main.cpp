#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

// 입력 버퍼를 비우는 함수
void clear_input_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        ;
    }
}

int main(void)
{
    char str1[100];
    char str2[100];
    char copy[100];
    char sentence[200];
    char temp[200];

    char* pos;
    char ch;

    char* p_str1 = str1;
    char* p_str2 = str2;
    char* p_copy = copy;
    char* p_sentence = sentence;
    char* p_temp = temp;

    printf("Enter first string (no spaces): ");
    scanf("%99s", p_str1);

    printf("Enter second string (no spaces): ");
    scanf("%99s", p_str2);

    printf("\n--- Printed strings (using puts) ---\n");
    puts(p_str1);
    puts(p_str2);


    // ----------------------------------------------
    // 각 문자열의 길이를 출력하는 부분
    printf("\n--- strlen practice ---\n");
    printf("Length of str1: %zu\n", strlen(p_str1));
    printf("Length of str2: %zu\n", strlen(p_str2));
    // ----------------------------------------------


    // ----------------------------------------------
    /* 이유: 이전 scanf가 남긴 '\n'을 제거하여
       다음 fgets가 정상적으로 전체 문장을 입력받도록 하기 위함 */
    clear_input_buffer();

    printf("\nEnter one sentence (can include spaces): ");
    fgets(p_sentence, sizeof(sentence), stdin);
    printf("\nYou entered (sentence) = ");
    puts(p_sentence);
    // ----------------------------------------------


    // ----------------------------------------------
    // strcpy를 사용하여 str1을 copy 배열에 복사하는 기능
    printf("\n--- Practice #1: 문자열 복사 ---\n");
    strcpy(p_copy, p_str1);
    printf("copy = ");
    puts(p_copy);
    // ----------------------------------------------


    // ----------------------------------------------
    // 문자열 이어붙이기를 수행하는 부분
    printf("\n--- Practice #2: 문자열 연결 ---\n");
    if (strlen(p_str1) + strlen(p_str2) < sizeof(str1)) {
        strcat(p_str1, p_str2);
        printf("After concatenation, str1 = ");
        puts(p_str1);
    }
    else {
        printf("str1 buffer is too small; cannot perform strcat!\n");
    }
    // ----------------------------------------------


    // ----------------------------------------------
    // strcmp를 사용하여 str1과 str2를 사전순 비교하는 기능
    printf("\n--- Practice #3: 문자열 비교 ---\n");
    {
        int cmp = strcmp(p_str1, p_str2);
        if (cmp == 0) {
            printf("str1 and str2 are equal.\n");
        }
        else if (cmp < 0) {
            printf("In lexicographical order, str1 comes before str2.\n");
        }
        else {
            printf("In lexicographical order, str1 comes after str2.\n");
        }
    }
    // ----------------------------------------------


    // ----------------------------------------------
    // strchr로 str1에서 특정 문자 위치 찾기
    printf("\n--- Practice #4: 특정 문자 검색 ---\n");
    printf("\nEnter a character to search for: ");
    scanf(" %c", &ch);

    pos = strchr(p_str1, ch);
    if (pos != NULL) {
        printf("'%c' is at index %ld (0-based) in str1.\n",
            ch, (long)(pos - p_str1));
    }
    else {
        printf("'%c' is not found in str1.\n", ch);
    }
    // ----------------------------------------------


    // ----------------------------------------------
    // strstr를 사용하여 sentence 안에서 str2 검색
    printf("\n--- Practice #5: 부분 문자열 검색 ---\n");
    pos = strstr(p_sentence, p_str2);
    if (pos != NULL) {
        printf("Found \"%s\" inside sentence.\n", p_str2);
        printf("Substring starting from the found position: ");
        puts(pos);
    }
    else {
        printf("Could not find \"%s\" in sentence.\n", p_str2);
    }
    // ----------------------------------------------


    // ----------------------------------------------
    // strtok로 문장을 공백 단위로 잘라 토큰화
    printf("\n--- Practice #6: 문자열 분리 ---\n");
    printf("\n--- strtok practice: split sentence by spaces ---\n");

    // 이유: strtok는 원본 문자열을 파괴하므로 sentence 내용을 보호하기 위함
    strcpy(p_temp, p_sentence);

    char* token = strtok(p_temp, " ");
    int i = 1;

    while (token != NULL) {
        printf("Token %d: ", i++);
        puts(token);
        token = strtok(NULL, " ");
    }
    // ----------------------------------------------

    printf("\nProgram finished.\n");
    return 0;
}
