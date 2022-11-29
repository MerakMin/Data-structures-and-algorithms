#include <stdio.h>
#include<string.h>
int main(void) {
  char str[10] ;
	char c;
  int i;
	int len = 0;
	scanf("%s", str);
	getchar();
	scanf("%c", &c);
	len = strlen(str);
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == c){
			printf("%d번째\n", i+1);
			break;
		}
	}
	
  return 0;
}
