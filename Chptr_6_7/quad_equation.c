#include<stdio.h>
#include<math.h>

int main(void) {

	int a, b, c;
	int EXM;

	printf("a, b, c : ");
	scanf("%d %d %d", &a, &b, &c);

	if(a == 0)
		printf("%lf\n", (double)c / b);
	else {
		EXM = b*b - 4*a*c;
		if(EXM >= 0)
			printf("%lf\n%lf\n", (b*-1+sqrt(EXM))/(2.0*a), (b*-1-sqrt(EXM))/(2.0*a));
		else
			printf("실근이 존재하지 않습니다.\n");
	}

	return 0;
	
}
