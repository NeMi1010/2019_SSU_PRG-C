#include<stdio.h>

void arr_print(int* A) {
	for(int i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, *(A+i));
	return;
}

int main(void) {

	int arr[5] = {2, 4, 6, 8, 10};

	arr_print(arr);

	return 0;
}
