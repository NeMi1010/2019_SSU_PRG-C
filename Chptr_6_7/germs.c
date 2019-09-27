#include <stdio.h>
int main(void) {

	int GERM = 10;
	int i;

	for(i=1;i<=7;i++) GERM *= 4;
	printf("7시간 후의 세균의 수는 %d마리\n", GERM);

	return 0;
}
