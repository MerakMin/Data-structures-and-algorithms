#include <stdio.h>
#define swap(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
int n, count;
int partition(int list[], int left,int right)
{
    int pivot,temp,low,high;
    low = left;
    high= right+1;
    pivot=list[left];
    do
    {
        do
        {
            low++;
        }while(list[low]>pivot && low<=right); // list[low]<=pivot 일때 탈출
        do
        {
            high--;
        }while(list[high]<pivot); // list[high]>=pivot 일때 탈출

        if(low<high)
        {
            swap(list[low],list[high],temp);
        }
    }while(low<high);
    swap(list[left],list[high],temp);
		count++;
		printf("%d단계 :",count);
		for(int i=0; i<n; i++){
			printf(" %d", list[i]);
		}
		printf("\n");
    return high;
}

void quicksort(int list[], int left,int right)
{
    if(left<right)
    {
        int q=partition(list, left, right);
        quicksort(list,left,q-1);
        quicksort(list,q+1,right);
    }
}

int main()
{
    int list[65535];
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &list[i]);
		}
    quicksort(list,0,n-1);
    
    return 0;
}