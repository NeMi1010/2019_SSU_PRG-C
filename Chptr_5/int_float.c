#include <stdio.h>
int main(void) {

	int a, b;

	printf("첫번째 정수 : ");
	scanf("%d", &a);

	printf("두번째 정수 : ");
	scanf("%d", &b);

	printf("결과값 : %lf\n", (double)a / b);

	return 0;
}
