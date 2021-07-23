#include <stdio.h>
#include<stdlib.h>
#include<string.h>
// int main(void){
//     int *a = (int*)malloc(sizeof(int));
//     printf("%d\n", a);
//     free(a);
//     a = (int*)malloc(sizeof(int));
//     printf("%d\n", a);
//     free(a);
//     return 0;
// }

// int main(){
//     char *a = (char*)malloc(100);
//     memset(a, 'A', 100);
//     for (int i = 0; i < 100; i++){
//         printf("%c\n ", a[i]);
//     }
//     return 0;
// }

int main(void){
    int** p = (int**)malloc(sizeof(int*)*3);//**이중 포인터로 2차원 배열 생성하고 3개의 행만큼 들어갈 수 있게 만들어준다.
    for(int i = 0; i < 3; i++){
        *(p+i) = (int*)malloc(sizeof(int) * 3);//각각의 행에 들어갈 열을 3개씩 할당 p+i는 각각의 행을 나타낸다.
    }
    for(int i = 0; i < 3; i++){ //각각의 행 열을 채워준다.
        for(int j = 0; j < 3; j++){
            *(*(p+i)+j) = i * 3 + j;
        }
    }
    for(int i = 0; i < 3; i++){ // 행 열을 출력
        for(int j = 0; j < 3; j++){
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
    return 0;
}