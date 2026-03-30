#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>
int main(void)
{
    char i;
    char fruits[3][20];

    for (i = 0; i < 3; i++)
    {
        printf("과일을 입력하세요: "); 
        scanf_s("%s", fruits[i], (unsigned int)sizeof(fruits[i]));
    }

    printf("\n--- 입력한 과일 목록 ---\n");
    for (i = 0; i < 3; i++) {
        printf("%d번째 과일: %s\n", i + 1, fruits[i]);
    }
    return 0;
}