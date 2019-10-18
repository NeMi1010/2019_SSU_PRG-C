#include <stdio.h>

void NUM_rec(int x, int y) {
	if(y != 0) {
		printf("%d * %d = %d\n", x, y, x * y);
		return;
	}
	for(int i = 1; i <= 9; i++) NUM_rec(x, i);
	return;
}
int main(void) {

	int n = 3;

	printf("[ %d단 ]\n", n);
	NUM_rec(n, 0);

	return 0;
}
