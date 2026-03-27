#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int price, money, change;
    int c5000, c1000, c100;
    printf("물건값을 입력하세요:");
    scanf_s("%d", &price);
    printf("투입한 금액:");
    scanf_s("%d", &money);
    change = money - price;
    printf("잔돈:");
        
        c5000 = change / 5000; 
        change = change % 5000;
        c1000 = change / 1000;
        change = change % 1000;
        c100 = change / 100;;
        change = change % 100;
        printf("5000원권: %d개\n", c5000);
        printf("1000원권: %d개\n", c1000);
        printf("100원 동전: %d개\n", c100);
    return 0;
}