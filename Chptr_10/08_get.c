#include<stdio.h>
#define STUDENTS 5

int get_min(int scores[], int n);
int get_max(int scores[], int n);

int main(void) {

	int scores[STUDENTS] = {1, 2, 3, 4, 5};
	int MIN, MAX;

	MIN = get_min(scores, STUDENTS);
	MAX = get_max(scores, STUDENTS);
	printf("최소는 %d, 최대는 %d입니다.\n", MIN, MAX);

	return 0;
}

int get_min(int scores[], int n) {
	
	int i;
	int min = 0x7fffffff;

	for(i = 0; i < n; i++)
		if(min > scores[i])
			min = scores[i];
	return min;
}

int get_max(int scores[], int n) {

	int i;
	int max = -0x7fffffff;

	for(i = 0; i < n; i++)
		if(max < scores[i])
			max = scores[i];
	return max;
}
