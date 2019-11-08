#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main(void) {

	int i, j, x;
	int scores[SIZE];

	srand(time(NULL));
	for(i = 0; i < SIZE; i++) {
		x = rand() % 100;
		for(j = 0; j < SIZE ; j++)
			if(scores[j] == x) break;
		if(j == SIZE) scores[i] = x;
		else i--;
	}

	for(i = 0; i < SIZE; i++)
		printf("scores[%d]=%d\n", i, scores[i]);
	
	return 0;
}
