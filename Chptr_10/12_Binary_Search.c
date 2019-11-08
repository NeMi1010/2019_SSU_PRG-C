#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void Binary_Search(int *arr, int start, int end);

int tar;
short chk = 0;
int main(void) {

	int i;
	int array[N];
	
	srand(time(NULL));
	for(i = 0; i < N; i++) {
		array[i] = rand()%100+1;
		printf("%d ", array[i]);
	}
	printf("\n");

	printf("찾고자 하는 수 : ");
	scanf("%d", &tar);

	Binary_Search(array, 0, N);
	if(!chk) printf("찾을 수 없습니다.\n");
	return 0;
}

void Binary_Search(int *arr, int start, int end) {

	int mid;

	mid = (start + end) / 2;
	if(arr[mid] == tar) {
		printf("%d는 %d번째에 위치하고 있습니다.\n", tar, mid);
		arr[mid] = 0;
		chk = 1;
	}
	if(start == end)
		return;
	Binary_Search(arr, start, mid);
	Binary_Search(arr, mid+1, end);

	return;
}
