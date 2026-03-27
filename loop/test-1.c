#include <stdio.h>

int main(void)
{
    //int i, cnt = 0;
    //for (i = 1; i <= 100; i++) //i는 1이고 100보다 작거나 같고 1씩증가한다 
    //{
    //        if (i % 3 ==0 && i % 7==0) //3이랑 7로나누면 0이고 최수공배수만하면 21이기때문에 21의 배수만 출력한다
    //        {
    //            printf("%d*", i); //21*42*63*84*
    //        }
    //    }
   
    
    int i;
    for (i = 0;i < 10;i++)
    {
        if (i % 3 == 0)   //3을 나눈 나머지가 0이면 반복문으로 다시 간다
            continue;
        if (i > 5)   //i가 5보다 커지면 멈춘다
            break;
        printf("%d ", i);   //1 2 4 5
    }
    return 0;
}