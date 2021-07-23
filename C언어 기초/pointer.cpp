# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>

// int main(void){
//     int a = 5;
//     int *d = &a; //포인터
//     printf("%d", *d);//간접참조연산자
//     return 0;
// }

//배열의 각 원소의 주소값 출력

// int main(void){
//     int a[] = {1,2,3,4,5,6,7,8,9,10};
//     int i;
//     for(i = 0; i < 10; i++){
//         printf("%d\n", &a[i]);
//     }
//     return 0;
// }

//다중 포인터

// int main(void){
//     int a = 5;
//     int *b = &a;
//     int **c = &b;
//     printf("%d", **c);
//     return 0;
// }

int main(void){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int *b = a;
    printf("%d", b[2]);
    return 0;
}