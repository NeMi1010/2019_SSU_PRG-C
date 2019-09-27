#include<stdio.h>

int main(void) {

	int num, num_a, num_b;

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	
//	while (num >= 10) {
		num_a = num / 10;
		num_b = num - (num_a * 10);
		num = num_a - (num_b * 2);
//	}
	
	if(num % 7 == 0) printf("7의 배수입니다.\n");
	else printf("7의 배수가 아닙니다.\n");

/*

"abc" = 100a + 10b + c = 10(10a+b) + c = 10X + c

X - 2c = 7k 일때 "abc"는 7의 배수이다. 라고 가정했을 때
X = 7k + 2c, 10X + c = 10(7k + 2c) + c = 70k + 21c = 7(10k + 3c) = "abc"이므로 
주어진 가정은 참이라고 할 수 있다.

*/

	return 0;
}
