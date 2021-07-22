# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>

//다차원 배열
/*
자료형 배열이름[행][열] = {{값,...},{값,...},...}
*/

int a[2][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},{{1,2,3},{4,5,6},{7,8,9}}};

int main(void){
    int i, j, k;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
           for(k = 0; k < 3; k++){
                printf("%d",a[i][j][k]);
           }
        }
        printf("\n");
    }
    return 0;
}