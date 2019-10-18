#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {

	int i, dice;
	int count[10] = {0,};
	
	srand(time(NULL));
	for(i = 1; i <= 1000; i++) {
		dice = rand()%6;
		count[dice+1] += 1;
	}

	for(i = 1; i <= 6; i++)
		printf("주사위를 굴려 %d가 나온 횟수는 %d번\n", i, count[i]);
	
	return 0;
}
