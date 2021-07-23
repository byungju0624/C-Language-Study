# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>

//반복문

//for문
/*
for(초기화; 조건; 반복 끝 명령어){
    반복적으로 실행할 부분
}
*/

// int main(void){
//     for(int i = 0; i <= 100; i++){
//         printf("%d\n", i);
//     }
// }

//1부터 n까지의 합 출력

// int main(void){
//     int n, sum = 0;
//     printf("n을 입력해주세요\n");
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         sum += i;
//     }
//     printf("%d", sum);
// }

//while문
/*
while(조건(참일때만 실행 거짓이면 스탑)){
    반복적으로 실행할 부분
}
*/

//n번 만큼 출력

// int main(void){
//     int n;
//     char a;
//     scanf("%d %c", &n, &a);
//     while(n--){
//         printf("%c ", a);
//     }
//     return 0;
// }

//특정 숫자 구구단

// int main(void){
//     int n;
//     int i = 1;
//     scanf("%d", &n);
//     while(i <= 9){
//         printf("%d * %d = %d\n", n, i, n*i);
//         i++;
//     }
//     return 0;
// }

//구구단 출력(while)

// int main(void){
   
//     int i = 1;
//     while(i <= 9){
//         int j = 1;
//         while(j <= 9){
//             printf("%d * %d = %d\n", i, j, i*j);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
//     return 0;
// }

//구구단 출력(for)

int main(void){
   
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
       return 0; 
}