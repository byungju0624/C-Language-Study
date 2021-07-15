# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h> //system 함수 사용시 헤더에 작성
//소수점 두번째 자리까지 표현 함수
// int main(void){
//     double a;
//     scanf("%lf",&a); //가장 먼저 배우는 입력방식
//     printf("%.2f\n", a);
//     // system("read -p 'Press Enter to continue...' var");
//     return 0; //항상 0을 반환하는게 일반적이다.
// }

//두 숫자를 입력 받아 순서 바꿔 출력

// int main(void){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d %d\n",b,a);
//     system("read -p 'Press Enter to continue...' var");
//     return 0;

// }

//한 자리씩 끊어서 입력 받기

// int main(void){
//     int a,b,c;
//     scanf("%1d%1d%1d",&a,&b,&c);
//     printf("%d %d %d\n",a,b,c);
//     return 0;
// }

//사칙연산

// int main(void){
//     int a, b;
//     scanf("%d %d", &a,&b);
//     printf("%d+%d=%d\n",a,b,a+b);
//     printf("%d-%d=%d\n",a,b,a-b);
//     printf("%d*%d=%d\n",a,b,a*b);
//     printf("%d/%d=%d\n",a,b,a/b);
//     printf("%d%%%d=%d\n",a,b,a%b);
//     return 0;

// }

//이스케이프 시퀀스 -> \n(줄바꿈),\t(수평탭),\\(백슬러시),\"(큰따옴표),\b(백스페이스)

// int main(void){
//     printf("\"A\\B\\C\\D\"\n");
// }

//관계 연산자 -> 0 input false, else number input true 
//            false output 0, true output 1

int main(void){
    int a, b;
    scanf("%d %d",&a, &b);
    printf("%d\n",a>b);
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    printf("%d\n",a>=b);
    printf("%d\n",a<=b);
}