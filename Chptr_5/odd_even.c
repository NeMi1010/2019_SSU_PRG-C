#include<stdio.h>
int main(void) {

	int num;

	printf("정수 : ");
	scanf("%d", &num);
//	printf("%d\n", 1-num%2);
	printf((num % 2 == 0) ? "1\n" : "0\n");

	return 0;
}
