#include <stdio.h>
#include <math.h>

int hanoi_t(int x) {
	if(x == 1) return x;
	return pow(2.0, (double)(x-1)) + hanoi_t(x-1);
}

int main(void) {

	int n = 5;
	int result;

	result = hanoi_t(n);
	printf("원판이 5개 있을 때 하노이 탑은 원판을 총 %d번 움직여야 한다.\n", result);

	return 0;
}
