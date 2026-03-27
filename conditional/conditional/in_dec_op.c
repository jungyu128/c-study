//증가감소 연산자
//++a 예) printf("%d", ++a) -> 5였던 a가 1증가된 후 6을출력
//a++ 예) printf("%d", a++) -> 5를 출력한 후 1증가되어 6이됨
//--a printf("%d", --a) -> 5였던 a가 1감소된 후 4를 출력
//a-- 예) printf("%d", a--) -> 5를 출력한 후 1감소되어 4가 됨


#include <stdio.h>

int main() {
    int a = 10;
    printf("%d\n", ++a);
    printf("%d\n", a++);
    printf("%d\n", a--);
    printf("%d\n", --a); 

    return 0;
}