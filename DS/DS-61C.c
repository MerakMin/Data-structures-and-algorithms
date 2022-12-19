#include <stdio.h>

int main() {
   int arr[65];
   int n;
   scanf("%d", &n); // 개수 입력
   for(int i=0; i<n; i++) // 배열에 값 넣기
   {
      scanf("%d", &arr[i]);
   }
   int key;
   scanf("%d", &key); // 찾을 값 입력
   
   for(int i=0; i<n; i++) // 순차 탐색 진행
   {
      if(key==arr[i]) // 값을 찾았다면
      {
         printf("%d", i+1); // 출력하고
         return 0; // 리턴
      }
   }
   printf("실패"); // 찾지 못했다면 출력하고
   return 0; // 리턴
}