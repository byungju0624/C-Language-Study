# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>
#include <string.h> 

//구조체

/*
struct 구조체명{
    자료형1 변수명1;
    자료형2 변수명2;
    ...
}
*/

//한명의 학생에 대한 정보를 담고있는 구조체
//특성에 맞게 하나의 객체를 만들 수 있다는 것이 장점
typedef struct {
    char studentId[10];
    char name[10];
    int grade;
    char major[100];
 } Student; 
 //s = {"정병주", "200915098", 4, "음향제작과"} ; -> 이렇게도 사용 가능
 //정의와 동시에 선언 가능 -> 하나의 변수만 사용이 될 때, 전역변수로 사용하고자 할 때 사용⚠️, 많이 사용되지는 않는다.

//구조체의 변수의 선언과 접근

// int main(void){
//      Student s = {"정병주", "200915098", 4, "음향제작과"};
//     // struct Student s; //구조체 변수 선언
//     // strcpy(s.studentId,"200915098");//구조체 변수에 접근
//     // strcpy(s.name,"정병주");
//     // s.grade = 4;
//     // strcpy(s.major,"음향제작과");
//     printf("학번: %s\n", s.studentId);
//     printf("이름: %s\n",s.name);
//     printf("학년: %d\n", s.grade);
//     printf("학과: %s\n", s.major);
//     return 0;
// }

//구조체가 포인터 변수로 사용되는 경우

int main(void){
     Student *s = (Student*)malloc(sizeof(Student));
    // struct Student s; //구조체 변수 선언
    strcpy(s->studentId,"200915098");//구조체 변수에 접근
    strcpy(s->name,"정병주");
    s->grade = 4;
    strcpy(s->major,"음향제작과");
    printf("학번: %s\n", s->studentId);
    printf("이름: %s\n",s->name);
    printf("학년: %d\n", s->grade);
    printf("학과: %s\n", s->major);
    return 0;
}