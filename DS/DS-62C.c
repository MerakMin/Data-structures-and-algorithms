#include <stdio.h>
int key, count, flag1=0, flag2=0, result;
int n;
int arr[65];
int ascsearch(int start, int end) {
	int middle;
	if(start<=end){
		count++;
		middle=(start+end)/2;
		if(key==arr[middle])return count;
		else if(key<arr[middle]) return ascsearch(start,middle-1);
		else if(key>arr[middle]) return ascsearch(middle+1, end);
	}
	return -1;
}
int descsearch(int start, int end) {
	int middle;
	if(start<=end){
		count++;
		middle=(start+end)/2;
		if(key==arr[middle])return count;
		else if(key>arr[middle]) return descsearch(start,middle-1);
		else if(key<arr[middle]) return descsearch(middle+1, end);
	}
	return -1;
}

void sorted(){
	for(int i=0; i<n-1; i++){
		if(arr[i]<arr[i+1]){ //내림차순으로 확인
			flag1=1;
		}
		if(arr[i]>arr[i+1]){ //오름차순으로 확인
			flag2=1;
		}
	}
}
void showresult(){
	if(result!=-1)printf("%d", result);
	else printf("실패");
}

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &key);
	
	sorted();
	if(flag1==0){
		result=descsearch(0,n-1);
		showresult();
	}
	else if(flag2==0){
		result=ascsearch(0,n-1);
		showresult();
	}
	else printf("불가능");
	
	return 0;
}