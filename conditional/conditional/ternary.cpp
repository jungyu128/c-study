//삼황연산자 : if~else를 간결히 표현
//조건? A: B =>조건이 참이면 A아니면B

#include <stdio.h>


int main(void) {
	
	//int a = 10, b = 20;
	//int max;
	//max = a > b ? a : b;
	//printf("%d", max);
	 //예면 ?(물음표)뒤에 a로나오고 아니면 b
	int num;
	printf("정수입력: ");
	scanf_s("%d", &num);
    (num % 2 == 0) ? printf("짝수") : printf("홀수"); 
	//삼항연산자
	//%2로 나누기를하고 맞으면 ?(물음표) 짝수로나오고 :(클론)아니면 홀수가나온다.


	return 0;
}