#include <stdio.h>

int main() {
    int a = 7, b = 2;
    int c;
    double d, e;

    c = a / b;         // 결과: 3 (정수 나누기)
    d = a / b;         // 결과: 3.0 (3을 double로 변환)
    e = (double)a / b; // 결과: 3.5 (실수 나누기)

    printf("c = %d\n", c);
    printf("d = %.1f\n", d); // %1.f -> %.1f 로 수정 (소수점 1자리까지)
    printf("e = %.1f\n", e); // %1.f -> %.1f 로 수정 (소수점 1자리까지)

    return 0;
}