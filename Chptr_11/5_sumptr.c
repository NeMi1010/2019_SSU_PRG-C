#include<stdio.h>

int arr_sum(int* A) {
	int sum = 0;
	for(int i = 0; i < 5; i++)
		sum += *(A+i);
	return sum;
}

int main(void) {

	int result;
	int arr[5] = {2, 4, 6, 8, 10};

	result = arr_sum(arr);
	printf("SUM = %d\n", result);

	return 0;
}
