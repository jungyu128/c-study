#include <stdio.h>

int main() {
    int a[5] = { 9, 1, 7, 3, 5 };
    int i, j, min, t; // min은 최솟값 위치, t는 임시저장소

    for (i = 0; i < 4; i++) {
        min = i; // 최솟값을 i번째 방 번호로 저장
        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[min]) // j번째 숫자가 내가 찾은 최솟값보다 작으면
                min = j; // 작은값이 있는 j를 최솟값 위치로 설정
        }
        t = a[i]; // t는 a에서 i번째 값으로 하고
        a[i] = a[min]; // a의 i번째 자리를 최솟값으로 바꾸고
        a[min] = t; // 최솟값이 있던 자리는 t로 채운다
    }

    for (i = 0; i < 5; i++) {
        //  숫자마다 두 칸씩 자리를 잡아서 출력된다.
        printf("%2d", a[i]);
    }

    return 0;
}