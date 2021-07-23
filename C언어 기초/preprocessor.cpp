# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>
// 나만의 헤더 파일 작성 후 사용
#include "temp.h"

// int main(void){
//     printf("%d", add(3, 10));
//     return  0;
// }

//매크로 전처리기 사용
// #define PI 3.1415926535

// int main(void){
//     int r = 10;
//     printf("원의 둘레: %.2f\n", 2 * PI * r);
//     return 0;
// }

//인자를 가지는 매크로 전처리기
// #define POW(x)(x*x)

// int main(void){
//     int x = 10;
//     printf("x의 제곱: %d\n", POW(x));
//     return 0;
// }

// #define ll long long
// #define ld long double


// int main(void){
//     ll a = 987654321000;
//     ld b = 100.5054;
//     printf("%.1Lf\n", a * b);
//     return 0;
// }

//조건부 컴파일

#include "temp.h"


int main(void){
    printf("%d\n", add(3, 5));
    return 0;
}