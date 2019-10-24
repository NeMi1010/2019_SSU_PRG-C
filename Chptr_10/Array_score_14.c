#include<stdio.h>
#define N 3
#define M 5

int main(void) {

	int i, j;
	float score[M] = {0.3, 0.4, 0.2, 0.1};
	int std[N][M] = {{87, 98, 80, 76, 3},
					 {99, 89, 90, 90, 0},
					 {65, 68, 50, 49, 0}};
	float result[N] = {0,};

	for(i = 0; i < N; i++) {
		for(j = 0; j < M-1; j++)
			result[i] += std[i][j] * score[j];
		result[i] -= std[i][M-1];
	}

	for(i = 0; i < N; i++)
		printf("%d 학번 학생의 최종 성적은 %.2f입니다.\n", i, result[i]);

	return 0;
}
