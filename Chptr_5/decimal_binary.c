#include<stdio.h>

int main(void) {

	int i;
	unsigned int num;
	printf("십진수 : ");
	scanf("%u", &num);

	unsigned int mask = 1 << 7;
	printf("이진수 : ");

	for(i=1; i<=8; i++, mask = mask >> 1)
		((num & mask) == 0) ? printf("0") : printf("1");
	printf("\n");

	return 0;
}
