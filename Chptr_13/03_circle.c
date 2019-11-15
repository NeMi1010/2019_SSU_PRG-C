#include<stdio.h>

struct point {
	int s;
	int e;
};

int main(void) {

	struct point p1, p2;

	printf("원 1 : ");
	scanf("%d %d", &p1.s, &p1.e);
	printf("원 2 : ");
	scanf("%d %d", &p2.s, &p2.e);

	if(p1.s == p2.s && p1.e == p2.e)
		printf("같은 원입니다.\n");
	else
		printf("다른 원입니다.\n");

	return 0;
}
