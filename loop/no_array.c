#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a,b,c,d,e,f,g,h,i,j, sum;
    float avg;
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &a);
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &b);
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &c);
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &d);
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &e);
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &f);
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &g);
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &h);
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &i);
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &j);
    sum = a + b + c+d+e+f+g+h+i+j;
    avg = sum / 10.0;
    printf("합계: %d\n", sum);
    printf("평균: %.1f\n", avg);

    return 0;
}