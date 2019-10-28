#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void SEL_SORT(int* array, int adr);

int main(void) {

	int i;
	int arr[N];
	
	srand(time(NULL));
	for(i = 0; i < N; i++) {
		arr[i] = rand()%50+1;
		printf("%d ", arr[i]);
	}
	printf("\n");

	SEL_SORT(arr, N-1);
	for(i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

void SEL_SORT(int* array, int adr) {

	int i, x;

	if(adr == 0) return;
	SEL_SORT(array, adr-1);
	for(i = 0; i < adr; i++) {
		if(array[i] > array[adr]) {
			x = array[adr];
			for(int j = adr; j > i; j--)
				array[j] = array[j-1];
			array[i] = x;
			return;
		}
	}

	return;
}
