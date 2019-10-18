#include <stdio.h>

unsigned long long FCT(int x) {
	if(x == 1) return x;
	return x * FCT(x-1);
}

int main(void) {

	int n;
	unsigned long long result;

	printf("n : ");
	scanf("%d", &n);
	result = FCT(n);
	
	printf("n! = %llu\n", result);

	return 0;
}	
