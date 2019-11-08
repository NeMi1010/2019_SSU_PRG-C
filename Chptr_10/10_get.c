#include <stdio.h>

void get_sum(int *array, int n);

int main(void) {

	int i;
	int arr[10];

	for(i = 0; i < 10; i++)
		arr[i] = i;

	get_sum(arr, 10);

	for(i = 0; i < 10; i++)
		printf("%d\n", arr[i]);

	return 0;
}

void get_sum(int *array, int n) {

	int save_1, save_2;
	int i;

	save_1 = array[0];
	for(i = 1; i < 10; i++) {
		save_2 = array[i];
		array[i] = save_1 + save_2;
		save_1 = save_2;
	}
	return;
}
