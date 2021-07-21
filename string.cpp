# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>
#include <string.h> 

// int main(void){
//     char a = 65;
//     printf("%c\n", a);
//     return 0;
// }

//입력 버퍼 지우기

// int main(void){
//     int a; char c;
//     scanf("%d", &a);
//     printf("%d\n", a);
//     int temp;
//     //한 자씩 받아서 파일의 끝이거나 개행 문자를 만나면 입력을 멈추므로 항상 입력 버퍼를 비운다
//     while((temp = getchar()) != EOF && temp != '\n'){ }
//     scanf("%c", &c);
//     printf("%c\n", c);
//     return 0;
// }

// int main(void){
//     char *a = "hello world"; //문자열 리터럴 컴퓨터가 알아서 메모리 주소를 결정
//     printf("%c\n", a[1]);
//     return 0;
// }

int main(void){
    char a[40] = "i like you";
    char b[20] = "like";
  
    printf("찾은 문자열 : %s\n", strstr(a,b));
    return 0;
}