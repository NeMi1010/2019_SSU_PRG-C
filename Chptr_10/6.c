#include <stdio.h>
#define N 10000

int main(void) {

	int src[N] = {0,};
	int dest[N] = {0,};
	int i;

	for(i = 0; i < N; i++) {
		src[i] = i;
		dest[N-i-1] = i;
	}

	for(i = 0; i < N; i++)
		printf("%d ", src[i]);
	printf("\n\n");

	for(i = 0; i < N; i++)
		printf("%d ", dest[i]);

	return 0;
}
