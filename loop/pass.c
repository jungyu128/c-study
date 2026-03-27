#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

    int pass = 1234;
    int pw = 0;
    while (pass != pw) {
        printf("암호를 입력하시오: ");
        scanf("%d", &pw);
        if (pass != pw) {
            printf( "다시 입력하세요.\n");
        }
    }

    printf("정답입니다.\n");
    return 0;

}