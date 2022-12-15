
#include<stdio.h>
#include<stdlib.h>
typedef int element;
typedef struct Node { // 구조체 정의해줌
    element data;
    struct Node* next; // 구조체 시작값을 가짐, Node라는 구조체가 있는데 이 구조체의 시작주소를 next에다가 저장하겠음이라는 뜻
}Node;
Node *createNode( element data ); 
void printAll( Node *ptr );

int main(){
    Node *head, *node1,*node2, *node3;
     node1 = createNode(12);//heard, node1, node2 노드 생성
     node2 = createNode(99);//각 노드->next를 저장
     node3 = createNode(37);//head 노드를 출력, head대신 node3 씀, node3 = head 값을 따로 가지고 있는 변수
   // printf("%p %p %p\n", node1, node2, node3);
      node1->next = node2;
      node2->next = node3;
      head = node1;
      printAll(head);
}
Node *createNode( element data){
   Node *newnode;
    newnode = (Node*)malloc(sizeof(Node));//노드 크기 동적 할당
    newnode->data = data;//노드의 데이터 저장
    newnode->next = NULL;//노드->next 참조를 NULL저장, NULL이 없으면 에러
     return newnode; // new를 쓰면 객체지향 쓰는 줄 알고 에러 남
}
void printAll( Node* ptr ){
    while( ptr != NULL){
            if (ptr->next!=NULL){//next 노드가 있으면 ->출력
          printf("%d->", ptr->data);//노드의 데이터 출력 
           ptr = ptr->next;//다음노드의 주소로 저장
            }
           else {
               printf("%d", ptr->data);//노드의 데이터 출력
               return;//프린트 종료
            }
    }
}