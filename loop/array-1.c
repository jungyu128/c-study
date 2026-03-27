#include <stdio.h>

int main(void)
{
    int num[5]={10,20,30,40,50 };
    int num2[] = { 10,20,30 };
    printf("%d\n", num[2]);


    int num3[5] = { 1,2 };
    int num4[5] = { 4 };
    int num5 = { 0 };

    int i;
    int num6[5];
    num6[0] = 100;
    num6[1] = 200;
    num6[2] = 300;
    num6[3] = 400;
    num6[4] = 500;
   /* printf("%d\n%d\n%d\n%d\n%d\n", num6[0], num6[1], num6[2], num6[3], num6[4]);*/
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",num6[i]);
    }
   
    return 0;
}