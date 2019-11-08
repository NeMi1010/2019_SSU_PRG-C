#include<stdio.h>

int A[3][2] = {{0, 1},
		  	  {1, 1},
			  {1, 0}};
int B[2][4] = {{1, 1, 0, 1},
			   {0, 1, 0, 0}};

void sum(int x, int y, int (*arr)[4]) {

	int i, SUM = 0;

	for(i = 0; i < 2; i++)
		SUM += (A[x][i] * B[i][y]);
		arr[x][y] = SUM;	
	return;
}

int main(void) {

	int result[3][4] = {0,};
	int i, j;

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 4; j++)
			sum(i, j, result);
	}

	for(i = 0; i < 3; i++) {
		for(j = 0; j < 4; j++)
			printf("%d ", result[i][j]);
		printf("\n");
	}

	return 0;
}


