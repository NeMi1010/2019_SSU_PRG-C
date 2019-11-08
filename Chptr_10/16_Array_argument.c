#include<stdio.h>
#define N 5

void ARY(int* arr) {

	int i;

	for(i = 1; i <= N; i++)
		arr[i] = i;
	return;
}

int main(void) {

	int i;
	int A[N+1];

	ARY(A);
	for(i = 1; i <= N; i++)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}
