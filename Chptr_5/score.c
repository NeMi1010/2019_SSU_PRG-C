#include<stdio.h>
int main(void) {

	int mid_t, end_t, hw;
	double total_s;

	printf("중간, 기말, 과제 점수를 입력하시오 : ");
	scanf("%d %d %d", &mid_t, &end_t, &hw);

	total_s = (mid_t * 3.0 / 6.0) + (end_t * 3.0 / 7.0) + (hw * 4.0 / 5.0);
	printf("변환점수는 %.5lf입니다.\n", total_s);

	return 0;
}
