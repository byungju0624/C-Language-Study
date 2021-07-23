#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//함수 포인터
/*
             이름 -> 함수명을 가리킨다.
          |----------------↓          
반환 자료형(*이름)(매개변수) = 함수명; -> 특정한 함수 자체를 가리키는 함수 포인터를 만들 수 있다.
*/

//매개변수 및 반환 자료형이 없는 함수 포인터

// void myFunction(){
//     printf("It's my function\n");
// }

// void yourFunction(){
//     printf("It's your function\n");
// }

// int main(void){
//     void(*fp)()= myFunction;
//     fp();
//     fp = yourFunction;
//     fp();
//     return 0;
// }

//매개변수 및 반환 자료형이 있는 함수 포인터

// int add(int a, int b){
//     return a + b;
// }

// int sub(int a, int b){
//     return a - b;
// }

// int main(void){
//     int(*fp)(int, int) = add;
//     printf("%d\n",fp(10,20));
//     fp = sub;
//     printf("%d\n", fp(20,10));
//     return 0;
// }

//함수 포인터를 반환하여 사용 -> 잘 사용하지 않는다.

int add(int a, int b){
    return a+b;
}

int(*process(char* a))(int, int){ //함수 포인터 자체에 매개변수가 존재, add의 매개변수가 몇개가 들어가는지 명시
    printf("%s\n",a);
    return add; //함수 포인터가 add라는 함수 반환
}

int main(void){
    printf("%d\n", process("10과 20을 더해보겠습니다. ")(10, 20));
    return 0;
}