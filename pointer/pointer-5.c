#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sub(int a, int b);
int Add(int a, int b);   //함수 원형
void arr_prn(int arr[]);
int main()
{
    int a = 10, b = 20;
    int c[5] = { 1,2,3,4,5 };
    int add = Add(a, b);   //함수 호출 인수 2개 더하기 위해서
    printf("%d + %d = %d\n", a, b, add);
    sub(a, b);
    arr_prn(c);

    return 0;
}

int Add(int a, int b)   //매개변수 형을 선언
{
    int add = a + b;

    return add;
}
void sub(int a, int b)
{
    int t = a - b;
    printf("%d - %d = %d\n", a, b, t);
}
void arr_prn(int arr[])
{
    for (int i = 0;i < 5;i++)
    {
        printf("%d ", arr[i]);
    }
}