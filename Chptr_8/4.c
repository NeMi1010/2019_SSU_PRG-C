#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
int main(void) {

	int NUM;

	srand((unsigned)time(NULL));
	NUM = rand()%MAX+1;

	switch(NUM) {
		case 1:
		case 7:
		case 8:
			printf("주사위를 굴려 1이/가 나왔습니다.\n");
			break;
		case 2:
		case 9:
		case 10:
			printf("주사위를 굴려 2이/가 나왔습니다.\n");
			break;
		default:
			printf("주사위를 굴려 %d이/가 나왔습니다.\n", NUM);
			break;
	}

	return 0;
}

