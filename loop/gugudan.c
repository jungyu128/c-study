#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main() {
    int i, j;// i는단이고 j는올라가는 숫자이다
    for (i = 1; i <= 12; i += 3) //1단부터 12단까지 출력 한줄에 3단씩 출력하기때문에 3씩 증가한다. 
    {
        printf("  %d단\t    %d단\t       %d단 \n", i, i + 1, i + 2);

        for (j = 1; j <= 9; j++) //1부터 9까지 1씩증가하며 올라간다. 
        {
            printf("%d x %d = %3d\t", i, j, i * j);//1*1
            printf("%d x %d = %3d\t", (i + 1), j, (i + 1) * j); //2*1
            printf("%d x %d = %3d\n", (i + 2), j, (i + 2) * j); //3*1
        }
        printf(" \n");
        // 밖에 for문장이므로 1~12단에 3단씩 줄바꿈
    }
}