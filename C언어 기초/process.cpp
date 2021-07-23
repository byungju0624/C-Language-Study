# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>
#include <string.h> 


//전역 변수
/*
int a = 5;

void changeValue(){
    a = 10;
}
int main(void){
    printf("%d\n", a);
    changeValue();
    printf("%d\n", a);
    return 0;
}
*/

//지역변수

/*int main(void){
    int a = 7;
    if(1){
        int a = 5;
    }
    printf("%d\n",a);
    return 0;
}
*/

//정적 변수
/*
void process(){
    static int a = 5;
    a = a + 1;
    printf("%d\n", a);
}

int main(void){
    process();
    process();
    process();
    process();
    process();
    return 0;
}
*/

//레지스터 변수
/*
int main(void){
    register int a = 10, i;
    for(i = 0; i < a; i++){
        printf("%d\n", i);
    }
    return 0;
}
*/

//값에 의한 전달 방식
//ADD 함수로 두개의 값을 넣으면 새롭게 두 변수가 메모리 내에 할당되어 처리 된다.
//따라서 원래 변수의 값에는 영향을 미치지 못한다.
/*
void add(int a, int b){
    a = a + b;
  
}

int main(void){
    int a = 7;
    add(a, 10);
    printf("%d\n", a);
    return 0;
}
*/

//참조에 의한 전달 방식
//함수의 매개변수로 값을 전달하는 것이 아니라 변수의 주소(포인터)를 전달
//이러한 방식을 이용하면 원래 변수의 값에 접근하여 값을 변경할 수 있다.
//간접참조연산자를 사용한다는 것이 특징

void add(int *a){
    *a = (*a) + 10;
  
}

int main(void){
    int a = 7;
    add(&a);
    printf("%d\n", a);
    return 0;
}