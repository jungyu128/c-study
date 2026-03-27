#include <stdio.h>
#include <stdlib.h>  //srand, rand 
#include <time.h>  //time

int main(void) {
	int i = 0;
	do {
		printf("1번이면 새로 만들기\n");
		printf("2번이면 파일열기\n");
		printf("3번이면 파일닫기\n");
		printf("파일을 선택하세요:");
		scanf_s("%d", &i);
	
	
	
	
	} while (i > 3 || i<1); //i가1-3이면 반복
	printf("선택메뉴는 : %d", i);


	return 0;
}