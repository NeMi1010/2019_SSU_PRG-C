#include<stdio.h>
int main(void) {

	int Students;
	double A, B, C;
	
	printf("Number of Students : ");
	scanf("%d", &Students);

	A = (double)Students * 0.2;
	B = (double)Students * 0.8 - A;
	C = (double)Students - ( A + B );

	printf("A : %lf\n", A);
	printf("B : %lf\n", B);
	printf("C : %lf\n", C);
		
	return 0;
}
