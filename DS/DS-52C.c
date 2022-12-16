///시험

#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node{
	element data;
	struct Node* next;
}Node;
Node* insertFirst(Node* head, element data){
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = head;
	head = newnode;
	return head;
}
Node* insert(Node* head, Node* pre, element data){
	Node* newnode = (Node*)malloc(sizeof(Node));//1)
	newnode->data = data;
	newnode->next = pre->next;//3)
	pre->next = newnode; //4)
	return head;
}
Node* deleteFirst(Node* head){
	Node* removed = head;
	head = head->next;
	free(removed);
	removed = NULL;
	return head;
}
Node* delete(Node* head, Node* pre){
	Node* removed = pre->next;
	pre->next = removed->next;
	free(removed);
	removed = NULL;
	return head;

}
void printList(Node* head){
	
	Node* p = head;
	while(p!=NULL){
		printf("%d->", p->data);
		p = p->next;
	}
	printf("NULL\n");
		
}
int main(){
	Node* head = NULL;
	Node* temp = NULL;
	printf("[첫 위치 삽입]\n");
	for(int i = 0;i<5;i++){
		head = insertFirst(head,i);
		printList(head);
		if (i==2) temp = head; //데이터가 2인 노드 주소 저장

	}
	printf("[중간위치 삽입]\n");
	head = insert(head, temp,100);
	printList(head);
	printf("[중간위치 삭제]\n");
	head = delete(head,temp);
	printList(head);
	printf("[첫 위치 삭제]\n");
	for(int i=0;i<5;i++){
		head = deleteFirst(head);
		printList(head);
	}
	return 0;
}



