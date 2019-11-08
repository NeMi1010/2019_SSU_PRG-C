#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {

	int x, y;

	if(argc < 3) {
		printf("Usage : %s 3 10 \n", argv[0]);
		return 0;
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

	return 0;
}
