#include <stdio.h>
#include <math.h>

int main(void) {

	double a, b, c;

	printf("대각선 a와 높이 b의 길이 : ");
	scanf("%lf %lf", &a, &b);

	if(a <= b) return 0;
	c = sqrt(a*a - b*b);
	printf("나머지 변 c의 길이는 %lf입니다.\n", c);

	return 0;
}
