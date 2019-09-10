#include<stdio.h>
int main(void) {

	int h, w;
	double area;

	printf("Height : ");
	scanf("%d", &h);
	
	printf("Width : ");
	scanf("%d", &w);
	
	area = (double)h * (double)w / 2.0;

	printf("area = %lf\n", area);
	return 0;
}
