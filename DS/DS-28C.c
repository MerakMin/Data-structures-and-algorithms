#include <stdio.h>
#include <stdbool.h>
//구조체 선언
typedef struct{
	char name[100];
	int ptice;
	int limit;
}Goods;
int main()
{
    Goods item1 = { "교향곡 전집", 100000, false };
   Goods* ptr;
	ptr = &item1;

   // ②____________________

    ptr->limit = true;

    if (ptr->limit == true)
        printf("한정판\n");
    else
        printf("일반판\n");

    return 0;
}
