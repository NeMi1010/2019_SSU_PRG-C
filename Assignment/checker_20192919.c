#include<stdio.h>
int main(void) {

	int num, num_a, num_b;

	printf("숫자를 입력하시오 : ");
	scanf("%d", &num);
	
	while (num >= 10) {
		num_a = num / 10;
		num_b = num - (num_a)*10;
		num = num_a - (num_b * 2);
	}
	
	if(num == 7) printf("7의 배수입니다.\n");
	else printf("7의 배수가 아닙니다.\n");

	return 0;
}
