#include<stdio.h>
#include<math.h>

int main(void) {

	int a, b, c;
	int EXM;

	printf("a, b, c : ");
	scanf("%d %d %d", &a, &b, &c);

	if(a == 0 && b == 0) { 
		printf((c==0)?"해는 무수히 많습니다.\n":"해가 존재하지 않습니다.\n");
		goto RTN;
	}	

	if(a == 0) {
		printf("%lf\n", (double)c / b);
		goto RTN;
	}

	EXM = b*b - 4*a*c;
	if(EXM >= 0) {
		printf("%lf\n%lf\n", (b*-1+sqrt(EXM))/(2.0*a), (b*-1-sqrt(EXM))/(2.0*a));
		goto RTN;
	}

	printf("실근이 존재하지 않습니다.\n");


RTN:
	return 0;
	
}
