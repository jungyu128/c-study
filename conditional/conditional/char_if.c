
//묹제 1글자를 받아 대문자, 소문자, 숫자로 분류
#include <stdio.h>


int main(void) {
	char ch; //문자 1글자 변수
	printf("문자를 입력하세요:");
	//scanf_s("%c", &ch);
	ch = getchar();//한글자를 입력받을때 getchar사용함
	if (ch >= 65 && ch <= 90) // 65~90이 대문자코드
		printf("대문자 입니다.");
	else if (ch >= 97 && ch <= 122)// 97~122 소문자코드
		printf("소문자 입니다.");
	else if (ch >= 48 && ch <= 57)// 48~57 숫자코드
		printf("숫자입니다.");
	else
		printf("그외 문자입니다.");// 숫자랑 대문자 소문자가 아니면 뜬다.
	






	return 0;
}