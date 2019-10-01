#include <string.h>
#include <math.h>
#include <stdio.h>

#define N strlen(NUM)
#define ASCII
#define DEBUG

int main(void) {

#ifndef ASCII

	unsigned int64__ num, num_a, num_b;

	printf("원시적 방법입니다.\n");
	printf("숫자를 입력하세요 : ");
	scanf("%u64d", &num);
	
//	while (num >= 10) {
		num_a = num / 10;
		num_b = num - (num_a * 10);
		num = num_a - (num_b * 2);
//	}
	
	if(num % 7 == 0) printf("7의 배수입니다.\n");
	else printf("7의 배수가 아닙니다.\n");

#else

	char NUM[10000];
	unsigned int X = 0;

	printf("아스키코드값입니다.\n");
	printf("숫자를 입력하세요 : ");
	scanf("%s", NUM);

	if(NUM[0] < 48 || NUM[0] > 57) {
		printf("입력에 오류가 발생했습니다.\n");
		return 0;
	}

	for(int i = 0; i < N-1; i++) X += (NUM[i]-48)*pow(10, N-2-i);
	X -= ((NUM[N-1]-48) * 2);

	if(X % 7 == 0) printf("7의 배수입니다.\n");
	else printf("7의 배수가 아닙니다.\n");

#endif

/*

"abc" = 100a + 10b + c = 10(10a+b) + c = 10X + c

X - 2c = 7k 일때 "abc"는 7의 배수이다. 라고 가정했을 때
X = 7k + 2c, 10X + c = 10(7k + 2c) + c = 70k + 21c = 7(10k + 3c) = "abc"이므로 
주어진 가정은 참이라고 할 수 있다.

*/
	return 0;
}
