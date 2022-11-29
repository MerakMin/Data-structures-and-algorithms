#include <stdio.h>
#include <string.h>

int main() {
	int n, s, sum;
	char a[80];
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		sum = 0;
		s = 1;
		scanf("%s", a);
		for(int j=0; j<strlen(a); j++){
			if(a[j] == 'O'){
				sum += s;
				s++;
			}
			if(a[j] == 'X')  s = 1;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
