#include<stdio.h>

struct rectangle {
	int x;
	int y;
};

int main(void) {

	struct rectangle dot1, dot2;
	int b, l;

	printf("점 1 : ");
	scanf("%d %d", &dot1.x, &dot1.y);
	printf("점 2 : ");
	scanf("%d %d", &dot2.x, &dot2.y);

	b = (dot2.x-dot1.x) * (dot2.y-dot1.y);
	l = ((dot2.x-dot1.x) + (dot2.y-dot1.y)) * 2;

	printf("%d %d\n", b, l);
	return 0;
}
