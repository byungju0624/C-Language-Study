#include <stdio.h>
#include<stdlib.h>
#include<string.h>

//배열 기반 리스트
// #define INF 10000
// int arr[INF];
// int count = 0;

// void addBack(int data){
//     arr[count] = data;
//     count++;
// }

// void addFirst(int data){
//     for(int i = count; i >= 1; i--){
//         arr[i] = arr[i-1];
        
//     }
//     arr[0] = data;
//     count++;
// }
// //인덱스로 접근하여 차례대로 뒤의 요소들로 덮어씌워서 삭제한다.
// void deleteElement(int ele){
//     for(int i = ele; i < count - 1; i++){
//       arr[i] = arr[i+1];
//     }
//     count--;
// }

// void show(){
//     for(int i = 0; i < count; i++){
//         printf("%d ", arr[i]);
//     }
// }

// int main(void){
//     addFirst(4);
//     addFirst(5);
//     addFirst(1);
//     addFirst(7);
//     addFirst(6);
//     addFirst(8);
//     deleteElement(2);
//     show();
//     return 0;
// }



//단방향 연결리스트
typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *head;

void addFront(Node*root, int data){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = root->next;
    root->next = node;
}
void removeFront(Node*root){
    Node*front = root->next;
    root->next = front->next;
    free(front);
}
void freeAll(Node*root){
    Node *cur = head->next;
    while(cur != NULL){
        Node*next = cur->next;
        free(cur);
        cur = next;
    }
}

void showAll(Node*root){
    Node *cur = head->next;
    while(cur != NULL){
        printf("%d ", cur->data);
        cur = cur->next;
    }
}
int main(void){
    head = (Node*)malloc(sizeof(Node));
    head -> next = NULL;
    addFront(head, 2);
    addFront(head, 1);
    addFront(head, 7);
    addFront(head, 9);
    addFront(head, 8);
    addFront(head, 10);
    removeFront(head);
    showAll(head);
    freeAll(head);
return 0;
}