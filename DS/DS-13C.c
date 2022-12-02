#include <stdio.h>
size_t mystrlen(const char* str); /*문자열의 길이를 리턴하는 함수이다.
포인터가 NULL값까지 뛰고 포인터 연산을 리턴하여 쉽게 구현할 수 있다. */
int main(void) {
	char s[] = "hello"; // 메모리가 6바이트 할당된 s가 들어와있다.
	printf("%d\n", mystrlen(s)); //mystrlen을 출력
	return 0;
}
size_t mystrlen(const char* str){/*문자열의 길이를 리턴하는 함수이다.
포인터가 NULL값까지 뛰고 포인터 연산을 리턴하여 쉽게 구현할 수 있다. */
	char* s; // 포인터 문자열 할당
	for(s = str; *s != '\n'; s++){ // 주소가 내가 받은 문자열부터 포인터 s가 참이면 주소를 증가 시키세요
		printf("%8X\n", s); //주소를 16진수로 s의 값을 출력
	}
	printf("%8X\n", s); // 주소를 16진수로 s의 값을 출력
	printf("s = %8X, str = %8x \n", s, str); // S는 16진수의 s값과 같고, str은 16진수 str의 값과 같다
	
	return s-str; //  s-str을 반환
}


#include<stdio.h>
int main()
{
	char* s = "world"; // 메모리가 6바이트로 할당된 s가 들어와있다
	int i; //변수 i
	printf("%08X %08X %08X %s\n", &s, s, &s[0], s);
	for( i = 0; s[i] != '\0'; i++)
		printf("%08X %c\n", &s[i], s[i]);
	return 0;
}



#include<stdio.h>
void outputArray(int* p, int n);

int main(){
	int array[3] = {10, 20, 30}
	int size = sizeof(array) / sizeof(array[0]);
	outputArray(array, size);
}

void outputArray(int* p, int n){
	int i;
	for( i = 0; i < n; i++){
		printf("%d %d\n", p[i], *(p+i));
	}
}

#include<stdio.h>
int main(){
	char* pc = "mango";
	char str[80] = "apple";
	pc = "banana";
	strcpy(str, pc);
	strcat(str, pc);
	str[0] = 't';
	printf("%s\n", str);
	printf("문자 포인터의 크기 = %d %s\n", sizeof(pc), pc);
	return 0;
}