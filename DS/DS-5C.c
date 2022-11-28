#include <stdio.h>
int main() 
{
	int a[100], i, j, n;
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=1; i<=n; i++){
		printf("%d: ", i);
		for(j=1; j<=n; j++){
			if(i==j){
				continue;
			}
			else{
				if(a[i]==a[j]){
					printf("= ");
				}
				else if(a[i]>a[j]){
					printf("> ");
				}
				else if(a[i]<a[j]){
					printf("< ");
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}

