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

// int main(void){
//     int a, b;
//     scanf("%d %d",&a, &b);
//     printf("%d\n",a>b);
//     printf("%d\n",a==b);
//     printf("%d\n",a!=b);
//     printf("%d\n",a>=b);
//     printf("%d\n",a<=b);
// }

//조건문 1. if 문
/*
if(조건1){
    조건1이 만족할 떄 출력
}else if(조건2){
    조건1이 만족하지 않고 조건2가 만족할때
}else{
    모든 조건이 만족하지 않을때
}
*/

// int main(void){
//     printf("손님이 몇 명인가요?");
//     int a;
//     scanf("%d",&a);
//     if(a == 1 || a == 2){
//         printf("2인석으로 안내합니다.\n");
//     }else if(a == 3 || a == 4){
//         printf("4인석으로 안내합니다.\n");
//     }else{
//         printf("대형석으로 안내합니다.\n");
//     };
// }

// int main(void){
//     int size;
//     printf("메인 메모리 크기를 입력하세요. (GB)");
//     scanf("%d", &size);
//     if(size >= 16){
//         printf("메인 메모리 크기가  충분합니다.\n");
//     }else{
//         printf("메인 메모리를 증설하세요.\n");
//     }
// }


//swich문
/*
swich(확인 대상){
    case 값1:
    //값 1에 부합할 떼
    case 값2:
    //값2에 부합할 때
    Default:
    //모든 경우
}
*/

// int main(void){
//     printf("학점을 입력하세요. ");
//     char a;
//     scanf("%c", &a);
//     switch(a){
//         case 'A':
//         printf("A학점입니다.\n");
//         break;
//         case 'B':
//         printf("B학점입니다.\n");
//          break;
//         case 'C':
//         printf("C학점입니다.\n");
//          break;
//         case 'D':
//         printf("D학점입니다.\n");
//          break;
//         default:
//         printf("학점을 바르게 입력하세요.\n");
//          break;
//     }
// }

