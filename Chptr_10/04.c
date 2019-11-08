#include <stdio.h>

int main(void) {

	int i, j, z;
	double MIN;
	double students[5] = {0,};

	for(i = 0; i < 5; i++) {
		printf("학생%d : ", i+1);
		scanf("%lf", &students[i]);
	}

	printf("\n\n");
	for(i = 0; i < 5; i++) {
		MIN = 0x7fffffff;
		for(j = 0; j < 5; j++) {
			if(MIN > students[j]) {
				MIN = students[j];
				z = j;
			}
		}
		printf("%d등 %.2lf\n", i+1, MIN);
		students[z] = 0x7fffffff;
	}

	return 0;
}
