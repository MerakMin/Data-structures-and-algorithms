#include <stdio.h>//201p(단어입력) + 203(탐색)
#include <stdlib.h>
#include<string.h>
typedef struct Node{
   char data[100];
   struct Node* next;
}Node;
Node* insertFirst(Node* head, char* data){
   Node* p = (Node*)malloc(sizeof(Node));
   p->data = data;
   p->next = head;
   head = p;
   return head;
}
Node* insert(Node* head, Node* pre, char* data){
   Node* p = (Node*)malloc(sizeof(Node));
   p->data = data;
   p->next = pre->next;
   pre->next = p;
   return head;
}
Node* deleteFirst(Node* head){
   Node* removed;
   if (head == NULL) return NULL;
   removed = head;
   head = removed->next;
   free(removed);
   return head;
}
Node* delete(Node* head, Node* pre){
   //프리가 가리키는 다음 노드를 삭제
   Node* removed;
   removed = pre->next;
   pre->next = removed->next;
   free(removed);
   return head;
}
void printList(Node* head){

   while(head!=NULL){
printf("%d->", p->data);
   }
   printf("NULL\n");
      
}
int main(){
   Node* head = NULL;
   Node* p;
  char str[3][10] ={"melon","kiwi","appple"};
   char find[10];
   
   //코드 작성
   head= insertFirst(head,str[0]); //melon 입력
   printList(head);
   head = insertFirst(head, str[1]); // kiwi 입력
   printList(head);
   head = insertFirst(head, str[2]); // apple 입력
   printList(head);
   printf("찾을 데이터를 입력하세요\n");
   scanf("%s",find);
   for(p=head;p!=NULL;p=p->next){
      //printf("%s",p->data);
   if   (strcmp(p->data,find) == 0) printf("%s를 찾았습니다.",find);
      
   }
   return 0;
}
