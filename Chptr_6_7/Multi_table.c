#include<stdio.h>
int main(void) {
	
	int i, x;

	printf("출력하고 싶은 단 : ");
	scanf("%d\n", &x);

	for(i = 1 ; i <= 9 ; i++) {
		printf("%d * %d = %d\n", x, i, x*i);
	}

	return 0;
}
