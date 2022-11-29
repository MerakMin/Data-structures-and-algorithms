#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int i, len = 0;

	scanf("%s", str);
	len = strlen(str);

	for(i = 0; i < len; i++){
		if(str[i] == ','){
			printf("\n");
		}
		else printf("%c", str[i]);
	}
	
	return 0;
}