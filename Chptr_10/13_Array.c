#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5

int main(void) {

	int i, j, x;
	int arr[N][N] = {0,};

	srand(time(NULL));
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			x = rand()%100+1;
			arr[i][j] = x;
		}
	}

	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}

	return 0;
}
