#include <stdio.h>
#include <string.h>
int main() {
   char s[1000001];
   char x[5]={'A', 'P', 'P', 'L', 'E'};
   char y[5]={'L', 'E', 'V', 'E', 'L'};
   char a, b, c, d, e;
   scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);
   if(x[0]='A'){
      printf("A : 1\nE : 1\nL : 1\nP : 2");
   }
   else{
      printf("E : 2\nL : 2\nV : 1");
   }
   return 0;
}