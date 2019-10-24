#include<stdio.h>
#define N 5
#define cur_x x+X[i]
#define cur_y y+Y[i]

int X[9] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
int Y[9] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int map[N][N];

int BM[3][2] = {{1, 1},
				{0, 4},
				{2, 3}};

void bomb(int x, int y, int *b_cnt) {

	for(int i = 0; i < 9; i++) {
		if(cur_x < 0 || cur_x >= N || cur_y < 0 || cur_y >= N)
			continue;
		if(map[cur_x][cur_y] != 1)
			*b_cnt -= 1;
		map[cur_x][cur_y] = 1;
	}
	return;
}

int main(void) {

	int i, a, b;
	int cnt = N*N;
	
	for(i = 0; i < 3; i++) {
		a = BM[i][0];
		b = BM[i][1];
		bomb(a, b, &cnt);
	}

	printf("%d\n", cnt);

	return 0;
}
