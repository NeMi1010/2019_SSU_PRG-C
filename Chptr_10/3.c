#include <stdio.h>

int main(void) {

	int arr[10] = {3, 8, 1, 1, 2, 5, 2, 4, 3, 6};
	int i, j;

	for(i = 0; i < 9; i++) {
		for(j = i+1; j < 10; j++)
			if(arr[i]+arr[j]>=10) printf("arr[%d] = %d, arr[%d] = %d\n", i, arr[i], j, arr[j]);
	}

	return 0;
}
