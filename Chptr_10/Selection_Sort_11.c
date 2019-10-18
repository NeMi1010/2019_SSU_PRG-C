#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void SEL_SORT(int* array);

int main(void) {

	int i;
	int arr[N];
	
	srand(time(NULL));
	for(i = 0; i < N; i++) {
		arr[i] = rand()%50+1;
		printf("%d ", arr[i]);
	}
	printf("\n");

	SEL_SORT(arr);
	for(i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

void SEL_SORT(int* array) {

	int i, j, MIN, z;

	for (i = 0; i < N; i++) {
		MIN = 0x7fffffff;
		for(j = i; j < N; j++) {
			if(MIN > array[j]) {
				MIN = array[j];
				z = j;
			}
		}
		for(j = z; j > i; j--)
			array[j] = array[j-1];
		array[i] = MIN;
	}

	return;
}
