# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>
# include <string.h>
/*
파일 열고 닫기

FILE *fp;(포인터 변수로 선언)
fp = fopen(파일 경로, 접근 방식);
//파일 관련 처리
fclose(fp);

파일 입출력 함수
fprintf(파일 포인터, 서식, 형식 지정자);
fscanf(파일 포인터, 서식, 형식 지정자);
*/

// int main(void){
//     char s[20] = "Hello world";
//     FILE *fp;
//     fp = fopen("temp.txt", "w");
//     fprintf(fp, "%s\n",s);
//     fclose(fp);
//     return 0;
// }

typedef struct {
    char name[20];
    int score;
} Student;

int main(void){
    int n, sum = 0;
    FILE *fp;
    fp = fopen("temp.txt","r");
    fscanf(fp, "%d", &n);
    Student *students = (Student*)malloc(sizeof(Student) * n);
    for(int i = 0; i < n; i++){
        fscanf(fp, "%s %d", &((students + i)->name), &((students + i)->score));
        
    }
    for(int i = 0; i < n; i++){
        sum += (students + i)->score;
    }
    free(students);
    fclose(fp);
    printf("점수 평균 : %.2f\n", (double)sum / n);
    return 0;
}