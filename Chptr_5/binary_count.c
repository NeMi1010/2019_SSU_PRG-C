#include<stdio.h>

int main(void) {

	int i, cnt = 0;
	unsigned int num;
	unsigned int mask = 1 << 7;

	printf("십진수 : ");
	scanf("%u", &num);

	for(i=1; i<=8; i++, mask = mask >> 1)
		if((num & mask) != 0) cnt += 1;
	
	printf("이진수 변환 후 1이 %d개 있습니다.\n", cnt);
	
	return 0;
} 
