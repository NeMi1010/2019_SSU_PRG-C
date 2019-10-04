#include<stdio.h>
#include<sys/time.h>
int main(void) {

	struct timeval S, E;
	long long sum = 0, i;
	register long long SUM, I;

	gettimeofday(&S, NULL);
	for(i=0;i<10000000;i++) 
		sum += i;
	gettimeofday(&E, NULL);

	printf("sum = %lld\n", sum);
	printf("Time : %ld - %ld\n\n\n", (E.tv_sec - S.tv_sec), (E.tv_usec - S.tv_usec));

	gettimeofday(&S, NULL);
	for(I=0;I<10000000;I++) 
		SUM += I;
	gettimeofday(&E, NULL);

	printf("sum = %lld\n", SUM);
	printf("Time : %ld - %ld\n", (E.tv_sec - S.tv_sec), (E.tv_usec - S.tv_usec));

	return 0;
}
