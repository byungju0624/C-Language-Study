# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>

/*
반환자료형 함수명(매개변수){
    //수행될 명령어
    return 반환할 값
}
*/

//말머리 붙이기

// void dice(int input){
//     printf("동빈이가 던진 주사위: %d\n", input);

// }
// int main(void){
//     dice(1);
//     dice(3);
//     dice(6);
//     return 0;
// }

//더하기 함수 만들기

// int add(int a, int b){
//     return a+b;
// }

// int main(void){
//    printf("%d", add(20, 30));
//    return 0;
// }

//사칙연산 만들기

// void calculator(int a, int b){
//     printf("%d + %d = %d\n", a, b, a+b);
//     printf("%d - %d = %d\n", a, b, a-b);
//     printf("%d * %d = %d\n", a, b, a*b);
//     printf("%d / %d = %d\n", a, b, a/b);
// }

// int main(void) {
//     calculator(10,20);
//     calculator(8,5);
//     return 0;
// }

//팩토리얼

int factorial(int a){
    if(a == 1) return 1;
    else return a * factorial(a - 1);
}

int main(void){
    int n;
    printf("n 팩토리얼을 계산합니다. ");
    scanf("%d", &n);
    printf("%d\n", factorial(n));
}