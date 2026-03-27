#include <stdio.h>

int main()
{
	int num1, num2;
	int res1;
	double res2;
	char y;
	char op;
	while (1) //while 반복문
	{
		printf("첫번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num1);
		printf("연산자를 입력하세요(+ - * /):  ");
		scanf_s(" %c", &op);
		printf("두번째 숫자를 입력하세요:  ");
		scanf_s("%d", &num2);

		switch (op) {

		case '+':
			res1 = num1 + num2;
			//printf("덧셈 결과: %d\n", sum);
			break;

		case '-':
			res1 = num1 - num2;
			//printf("뺄셈 결과: %d\n", sub);
			break;

		case '*':
			res1 = num1 * num2;
			//printf("곱셈 결과: %d\n", mul);
			break;

		case '/':
			res2 = (double)num1 / num2;
			//printf("나눗셈 결과: %.2f\n", res2);
			break;

			//default:
				//printf("잘못된 연산자입니다\n");

		}
		if (op == '+' || op == '-' || op == '*')//하나라도 참이면 실행되는것으로 논리합구조
		{
			printf("결과: %d\n", res1);
		}
		else if (op == '/')
			//// 나눗셈의 경우 소수점 이하 값을 보존하기 위해 별도 처리
		{
			printf("결과: %.2f\n", res2);
		}
		else//예외처리
		{
			printf("입력오류");
		}
		printf("혹시 연산을 종료하시겠습니까?(y,Y)");
		scanf_s(" %c", &y, 1); //%c앞에 공백을줘야한다 하나의 문자를받고 쓸모없는 다른문자는 받지않겠다는것이다. 1을 쓴이유는 한칸만쓰겠다는이유다.
		if (y == 'y' || y == 'Y')//op == 'y' \\ op == 'Y'는 하나라도 참이면 실행되는것으로 논리합구조다. 
		{
			printf("프로그램을 종료합니다.\n");
			break; //종료
		}


	}
	return 0;
}