#include<stdio.h>

void get_min_max(int* A, int* MIN, int* MAX) {
	for(int i = 0; i < 5; i++) {
		if(*MIN > A[i])
			*MIN = A[i];
		if(*MAX < A[i])
			*MAX = A[i];
	}
	return;
}

int main(void) {

	int arr[5] = {10, 2, 6, 8, 4};
	int min = 1000, max = -1000;

	get_min_max(arr, &min, &max);

	printf("min = %d | max = %d\n", min, max);

	return 0;
}
