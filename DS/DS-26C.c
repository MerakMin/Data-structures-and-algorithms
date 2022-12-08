#include<stdio.h>
#include<string.h>
#define NUM 3
//전역에 구조체 정의
typedef struct{ //typedef struct 암기
	char name[20];
	int age;
}PERSON;
void inputData( PERSON *p );
void outputData( PERSON *p );
int main(){
	//구조체 포인터 배열 선언
	PERSON p[3];
	inputData(p);
	outputData(p);
	return 0;
}
void inputData( PERSON p[] ){
	  //구조체포인터 변수에 입력
	int i;
	for(i=0;i<3;i++){
		scanf("%s %d", p[i].name, &p[i].age);
	}
}
void outputData( PERSON p[] ){
		//구조체포인터 변수에 출력
	int i;
	for(i=0;i<3;i++){
		scanf("%s %d\n", p[i].name, p[i].age);
	}
} 