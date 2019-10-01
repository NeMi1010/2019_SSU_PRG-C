#include <stdio.h>

//#define DEBUG
typedef unsigned int usi_t;

usi_t clear_bit(usi_t n, usi_t i) {
	return n & ~(1 << i);
}

usi_t get_bit(usi_t n, usi_t i) {
	return n & (1 << i)  >> i;
}

usi_t set_bit(usi_t n, usi_t i, usi_t v) {
	n = clear_bit(n, i);
	return n | (v << i);
}

void print_bit(usi_t n){
	
	for(int i = sizeof(n)*8-1; i >= 0; i--)
		printf("%u", (n & (1 << i)) >> i);
	
	printf("\n");
	return;
}

int main() 
{
	usi_t n = 0; 
	usi_t i, v, rv; 

	print_bit (n); 
	printf("세팅할 비트의 위치와 값을 입력하시오: \n");
	scanf("%u %u", &i, &v);
	n = set_bit(n, i, v); 
	rv = get_bit(n, i); 
	if (rv != v) {
		printf("비트 세팅이 잘못되었습니다\n");
#ifdef DEBUG
		print_bit(n);
		printf("%u\n", v);
#endif
		return -1; 
	}
	print_bit(n);
	return 0; 
}

