#include<stdio.h>
#define N 3
#define M 5

int main(void) {

	int i, j, sum = 0;
	int std[N][M] = {{87, 98, 80, 76, 3},
					 {99, 89, 90, 90, 0},
					 {65, 68, 50, 49, 0}};
	double result[M] = {0,};
	char prt[M][15] = {"중간고사", "기말고사", "기말과제", "퀴즈점수"};

	for(j = 0; j < M-1; j++) {
		sum = 0;
		result[j] = 0.0;
		for(i = 0; i < N; i++)
			sum += std[i][j];
		result[j] = (double)sum / N;
	}

	for(i = 0; i < M-1; i++)
		printf("%s의 평균은 %.2lf점입니다.\n", prt[i], result[i]);

	return 0;
}
