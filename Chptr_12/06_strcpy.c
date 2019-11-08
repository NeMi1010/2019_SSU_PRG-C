#include<stdio.h>
#include<string.h>

int main(void) {

	char ch1[] = "The worst things to eat before you sleep";
	char ch2[100];

	printf("ch1 : %s\n", ch1);
	strcpy(ch2, ch1);
	printf("ch2 : %s\n", ch2);

	return 0;
}
