#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
int main(void) {

	int chk[105] = {0,};
	int i, n;

	srand((unsigned)time(NULL));
	for(i = 1; i <= 10; i++) {
		n = rand()%MAX+1;
		if(chk[n]) {
			i--;
			continue;
		}
		else printf("%d\n", n);
	}

	return 0;
}
