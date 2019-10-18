#include <stdio.h>
#include <stdlib.h>

int count;

void BT(unsigned int x) {
	for(int i = 0; i < sizeof(x); i++) {
		if((x & (1 << i)) >> i)
			count += 1;
	}
}

int main(int argc, char* argv[]) {
	
	unsigned int num;

	num = (unsigned int)strtoull(argv[1], NULL, 10);
	BT(num);
	printf("%d\n", count);
}
