#include <stdio.h>

int rabbit(int f) {
	if(f == 0 || f == 1) return 1;
	return rabbit(f-1) + rabbit(f-2);
}

int main(void) {

	int n, result;

	printf("n개월 후 : ");
	scanf("%d", &n);
	result = rabbit(n);
	printf("%d개월 후 토끼는 %d쌍\n", n, result);

	return 0;
}
