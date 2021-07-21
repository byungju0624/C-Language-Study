# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>
#include <limits.h>
/*
자료형 배열명[배열의 크기] = {초기화 값}-> 초기화 값은 없을 수도 있다.
*/
int main(void){
    int a[10] = {6, 7, 1, 2, 10, 22, 14, 6, 7};
    int i, maxValue = INT_MIN;
    for(i = 0; i < 10; i++){
        if(maxValue < a[i]) maxValue = a[i];
    }
    printf("%d", maxValue);
    return 0;
}
