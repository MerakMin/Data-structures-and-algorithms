#include <stdio.h>
void inputArray( int a[][4], int row );
int main(){
	int score[3][4];
	int i, j;
	int tot;
	double avg;
	//printf("학생 3명, 각각 네 과목의 점수를 입력하세요\n");
	inputArray( score, 3);
	//각 학생의 총점과 평균을 계산하여 출력
	for(i=0; i<3; i++){
		tot=0;
		for(j=0; j<4; j++){
			tot = tot + score[i][j];
		}
		avg = tot/4.;
		printf("총점 : %d, 평균 : %.2lf\n", tot, avg);
	}

	return 0;
}

void inputArray(int a[][4], int row){
	int i, j;
	for(i=0; i<row; i++){
		for(j=0; j<4; j++){
			scanf("%d", &a[i][j]);
		}
	}
	return 0;
}