#include <stdio.h>
#include <stdlib.h>
 int main(){
    int a,b,i;
    char* str = (char*)malloc(sizeof(char)*100) ;//char str[100]의 의미
    scanf("%s",str); //abcdefg
    scanf("%d %d",&a,&b); // q = 2, b =4
	  //출력문을 작성하시오.
		// for(i = a-1; i <= b-1; i++ ){
		// 	printf("%c", str[i]);
		// }
	 *(str+b) = '\0';
	 printf("%s", str+a-1);
	 
    return 0;
}
