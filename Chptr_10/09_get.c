#include<stdio.h>
#define N 5

void squar_array(int* array, int n);

int main() {

	int arr[N] = {1, 3, 5, 7, 9};
	int n;

	n = sizeof(arr) / sizeof(arr[0]);
	squar_array(arr, n);

	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

void squar_array(int* array, int n) {

	int i;
	int save;
	
	for(i = 0; i < n; i++)
		array[i] *= array[i];
	return;
}
