#include<stdio.h>

int main(void) {

	char ch1[] = "The worst things to eat before you sleep";
	char ch2[100];
	int i;

	printf("ch1 : %s\n", ch1);
	for(i = 0; ch1[i] != '\0'; i++) {
		ch2[i] = ch1[i];
	}
	ch2[i] = '\0';
	printf("ch2 : %s\n", ch2);

	return 0;
}
