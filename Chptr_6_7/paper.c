#include <stdio.h>
int main(void) {
	
	int PAPER_CUT = 1;
	
	while(PAPER_CUT < 100) PAPER_CUT *= 2;
	printf("1/100이 되려면 %d번 접어야한다.\n", PAPER_CUT);

	return 0;
}
