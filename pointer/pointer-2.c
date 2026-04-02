#include <stdio.h>
int main(void)
{
	//int i = 3000;
	//int* p = NULL;
	//p = &i;
	//printf("p = %p\n", p);
	//printf("&i =%p\n", &i);

	//printf("i =%d\n", i);
	//printf("p =%d\n", *p);
	int x = 10, y = 20;
	int* pi; 
	pi = &x; //x의 주소를 포인트변수 pi에 준다.
	printf("pi = %p\n", pi); //x의 주소를 pi가 가리킨다.
	printf("pi = %d\n", *pi); //pi가 가리키는 곳의 값은 x의 주소를 가리키므로 10출력

	pi = &y; //y의 주소를 포인트변수 pi에 준다.
	printf("pi = %p\n", pi); //y의 주소를 pi가 가리킨다.
	printf("pi = %d\n", *pi);//pi가 가리키는 곳의 값은 x의 주소를 가리키므로 10출력

	return 0;
}