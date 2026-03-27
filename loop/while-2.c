#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num, cnt = 0, i;
    printf("원하는 배수 입력: ");   //3
    scanf("%d", &i);

    printf("배수의 개수 입력: ");   //5
    scanf("%d", &num);

    while (cnt++ < num)
    {
        //0<5인가? 참
        //1<5인가? 참
        //2<5인가? 참
        //3<5인가? 참
        //4<5인가? 참
        //5<5인가? 거짓 (종료)
        printf("%d ", i * cnt);
        // cnt:0이 내려올때 1 증가해서 내려옴(3*1)
        // cnt:1이 내려올때 1 증가해서 내려옴(3*2)
        // cnt:2가 내려올때 1 증가해서 내려옴(3*3)
        // cnt:3이 내려올때 1 증가해서 내려옴(3*4)
        // cnt:4가 내려올때 1 증가해서 내려옴(3*5)

    }
    return 0;
}