#include <stdio.h>
#include <math.h>
//#define D

double ABS(double num) {
	return (num >= 0)?num:num*-1.0;
}

double get_height(double line, int degree) {
	return ABS(sin(degree)) * line;
}

int main(void) {

	double a, b;
	int d;

	printf("변 a의 길이 (대각선) : ");
	scanf("%lf", &a);
	printf("각도 d : ");
	scanf("%d", &d);
#ifdef D
	printf("%lf", sin(d));
#endif
	b = get_height(a, d);
	printf("높이 b의 길이는 %.3lf입니다.\n", b);

	return 0;

}
