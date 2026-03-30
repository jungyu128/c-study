* 문자열 ppt -> 5번 7번 9번 슬라이드
// 문자열의 길이를 구하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char str[30] = "C language";
    int i = 0;

    while (str[i] != '\0')
        i++;

    printf("문자열\"%s\"의 길이는 %d입니다.\n", str, i);
    return 0;
}