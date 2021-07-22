# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>

// int main(void){
//     int a[5] = {1,2,3,4,5};
//     int i;
//   for(i = 0; i < 5; i++){
//       printf("%d", *(a + i));// a[i]와 같다
//   }
//   return 0;
// }

// int main(void){
//    int a[5] = {1,2,3,4,5};
//    int *p = a;
//    printf("%d\n", *(p++));
//    printf("%d\n", *(++p));
//    printf("%d\n", *(p+2));
//    return 0;
// }

int main(void){
    int a[2][5]= {{1,2,3,4,5},{6,7,8,9,10}};
    int (*p)[5] = a[1];
    int i;
    for(i = 0; i < 5; i++){
        printf("%d\n",p[0][i]);

    }
    return 0;
}