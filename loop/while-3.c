//정수(2~9) 입력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a = 1;
    int b;
    printf("출력하고 싶은 단은?");
    scanf("%d", &b);

    while (a <= 9) {
        printf("%d * %d = %d,", b, a, b * a);
        a++;
    }






    return 0;
}