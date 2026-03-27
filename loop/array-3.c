#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 선언 (프로토타입) - main보다 아래에 있는 함수들을 미리 알려줌
void arrPrint(int k[2][3]);
void f1();
void f2();
void f3();

int main(void)
{
    // f1(); 
    // f2();
    f3(); // 이제 f3를 호출하면 정상적으로 작동합니다.
    return 0;
}

// 2차원 배열을 출력하는 함수
void arrPrint(int k[2][3]) // 매개변수 타입을 배열 형태인 [2][3]으로 맞춰야 함
{
    for (int i = 0; i < 2; i++) // 행: 0, 1
    {
        for (int j = 0; j < 3; j++) // 열: 0, 1, 2
        {
            printf("%d ", k[i][j]);
        }
        printf("\n"); // 한 행이 끝나면 줄바꿈
    }
    printf("-----------------\n");
}

void f3()
{
    int a[2][3] = { {1,2,3},{4,5,6} };
    arrPrint(a);

    int b[2][3] = { {1},{4} }; // 1 0 0 | 4 0 0
    arrPrint(b);

    int c[2][3] = { {1,2} };   // 1 2 0 | 0 0 0
    arrPrint(c);

    int d[2][3] = { 1,2,3,4,5,6 }; // 1 2 3 | 4 5 6
    arrPrint(d);

    int k[2][3] = { 0 };   // 0 0 0 | 0 0 0
    arrPrint(k);
}