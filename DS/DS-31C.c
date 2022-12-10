#include <stdio.h>
#include <math.h>
#define N 5
typedef struct{
	int x,  y;
}POINT;
POINT origin = {0, 0};

void inputPoint( POINT *p );
void outputPoint( POINT *p );
double distance( POINT *p, POINT *q);

int main() {
	
	int i, mindex, min=21837000;
	double dt;
	POINT p[5];
	for(i=0; i<5; i++){
		scanf("%d %d", &p[i].x, &p[i].y);
	}
	for(i=0; i<5; i++){
		dt = sqrt(pow(p[i].x-0, 2) + pow(p[i].y-0, 2));
		dt = p[i].x + p[i].y;
		if(min>dt) {
			min = dt;
			mindex = i;
		}
		//printf("(%d, %d) = %.2lf \n", p[i].x, p[i].y, dt);
	}
	// 여기에 코드 추가
	
	
	printf("원점에서 가장 가까운 좌표 : ");
	printf("(%4d, %4d)\n", p[mindex].x, p[mindex].y);
	return 0;
}
void inputPoint( POINT *p){

	
}
	
void outputPoint( POINT *p ){
	
	
}
double distance( POINT *p, POINT *q){
	
	
}