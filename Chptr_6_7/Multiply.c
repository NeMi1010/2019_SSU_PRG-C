#include <stdio.h>
#define N 9
int main(void) {
	
	int i, j;

	for (i=2;i<=N;i+=2) {
		for (j=1;j<=N;j++) printf("%d * %d = %d\n", i, j, i*j);
		printf("\n");
	}

	return 0;
}
