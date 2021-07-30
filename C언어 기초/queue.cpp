# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> 
# include <stdlib.h>
#include <string.h> 

//배열을 이용해 큐 만들기

#define SIZE 10000
#define INF 99999999

// int queue[SIZE];
// int front = 0;
// int rear = 0;

// void push(int data){
//     if(rear >= SIZE){
//         printf("큐 오버플로우가 발생했습니다.\n");
//     }
//     queue[rear++] = data;
// }

// int pop(){
//     if(front == rear){
//         printf("큐 언더플로우 발생\n");
//         return -INF;
//     }
//     return queue[front++];
// }

// void show(){
//     printf("---큐의 앞---\n");
//     for(int i = front; i < rear; i++){
//         printf("%d \n",queue[i]);
//     }
//     printf("---큐의 뒤---\n");
// }

// int main(void){
//     push(1);
//     push(2);
//     push(3);
//     push(4);
//     pop();
//     pop();
//     show();
//     return 0;
// }

typedef struct Node{
    int data;
    struct Node *next;
}Node;

typedef struct Queue{
    Node *front;
    Node *rear;
    int count;
}Queue;

void push(Queue *queue,int data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if(queue ->count == 0){
        queue->front = node;
    }
    else{
        queue->rear->next = node;
    }
    queue->rear=node;
    queue->count++;
}

int pop(Queue*queue){
    if(queue->count == 0){
        printf("큐 언더플로우가 발생\n");
        return -INF;
    }
    Node *node = queue->front;
    int data = node->data;
    queue->front = node->next;
    free(node);
    queue->count--;
    return data;
}

void show(Queue *queue){
    Node *cur = queue->front;
    printf("---front---\n");
    while(cur != NULL){
        printf("%d\n",cur->data);
        cur = cur->next;
    }
    printf("---rear---\n");
}

int main(void){
    Queue queue;
    queue.front = queue.rear = NULL;
    queue.count = 0;
    push(&queue, 1);
    push(&queue, 2);
    push(&queue, 3);
    pop(&queue);
    push(&queue, 4);
    pop(&queue);
    show(&queue);
    return 0;

}