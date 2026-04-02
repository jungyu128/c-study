#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int ar[10];
	printf("정수 10개입력:");
	for (int i = 0; i < 10; i++)
	{
		printf("%d번째 정수입력:", i + 1);
		scanf_s("%d", &ar[i]);

	}
	 count_even(ar);

	return 0;
}

int count_even(int ar[10]) {

	int cnt = 0;
	for (int i = 0; i < 10; i++) {
		if (ar[i] % 2 == 0)
			cnt = cnt + 1; //짝수이면 1증가 홀수이면 밑으로 떨어짐 없으므로
	}
		
		printf("\n짝수의 개수는: %d개입니다.\n", cnt);
		return cnt; //반환되는 값(짝수개수)
}