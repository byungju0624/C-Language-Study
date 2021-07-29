# include <stdio.h> 
# include <stdlib.h>
#include <string.h> 
//배열을 통한 스택
// #define SIZE 1000
// #define INF 9999999

// int stack[SIZE];
// int top =-1;
// void push(int data){
//     if(top == SIZE-1){
//         printf("스택 오버 플로우가 발생했습니다. \n");
//         return;
//     }
//     stack[++top] = data;
// }
// int pop(){
//     if(top == -1){
//         printf("스택언더플로우가 발생했습니다. \n");
//         return -INF;
//     }
//     return stack[top--];
// }

// void show(){
//     printf("---최상단--- \n");
//     for(int i = top; i >= 0; i--){
//         printf("%d \n", stack[i]);
//     }
//     printf("---최하단--- \n");
// }
//연결리스트를 통한 스택
#define INF 9999999

typedef struct Node{
    int data;
    struct Node*next;
};
typedef struct Stack{
    Node*top;
}Stack;

void push(Stack *stack,int data){
    Node*node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = stack->top;
    stack->top = node;
}

int pop(Stack *stack){
    if(stack->top == NULL){
        printf("스택 언더플로우가 발생했습니다.\n");
        return -INF;
    }
    Node*node = stack->top;
    int data = node->data;
    stack->top = node->next;
    free(node);
    return data;
}
void show(Stack*stack){
    Node*cur= stack->top;
    printf("---최상단---\n");
    while(cur != NULL){
        printf("%d \n",cur->data);
        cur = cur->next;
    }
    printf("---최하단---\n");
}
int main(void){
    Stack s;
    s.top = NULL;
    show(&s);
    push(&s,1);
    push(&s,2);
    push(&s,3);
    push(&s,4);
    pop(&s);
    show(&s);
    return 0;
}