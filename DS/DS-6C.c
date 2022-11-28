#include <stdio.h>
int main() {
	int a[100], i, max=-2147000000, cnt=0;
	
	for(i=1; i<=9; i++){
		scanf("%d", &a[i]);
		cnt+=1;
		if(max<a[i]){
			max=a[i];
		}
		if(cnt==9){
			if(max>a[i]){
				cnt-=1;
			}
		} 
	}
	printf("%d\n%d", a[cnt], cnt);
	
	return 0;
}

