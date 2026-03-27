#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main(void)
//{
  /*  int num;
    int i;
    int sum = 0;
    printf("숫자를 입력하세요:");
    scanf_s("%d", &num);
    for (i = 1; i <= num; i += 1) {
        sum += i; 
        
    }
      
    

    printf("\n결과값: %d\n", sum);*/




    //정수(2~9) 입력
//#include <stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//
//    int main(void){
//       
//        int a = 1;//a=1
//        int b;//b
//        printf("출력하고 싶은 단은?");
//        scanf("%d", &b);//b는 숫자입력받음
//        printf("%d단\n", b);// b에 숫자를 입력받고 단이 몇단인지 출력한다
//
//        for (a = 1; a <= 9; a++)// a=1이고,a는 9보다 작거나같고 1씩 증가한다 긜고 9번반복
//        {
//            printf("%d * %d = %d\n", b, a, b * a);//정수끼리 곱하고 b,a를 선언하고 b인 입력받은 값이랑 a가 1씩 증가하면서 곱하게된다 그래서 구구단이된다
//        }
//            
//
//
//    return 0;
//}


#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {

    int i = 1;
    int j;
    for (j = 2; j <= 9; j++)
    { //i는 j가 반복이 다 끝나면 1증가
        printf("%d단\n", j); 

        
        for (i = 1; i <= 9; i++)
        {
            printf("%d * %d = %d\n", j, i, j * i);
            //3d 3자리
            //원래는 오른쪽정렬
            //-를 붙이면 왼쪽정렬
        }//j끝
        
        printf("\n");
    }//i끝

    return 0;
}//main끝