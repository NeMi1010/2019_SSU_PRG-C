#include<stdio.h>

int main(void) {

	char str[] = "The worst things to eat before you sleep";
	int str_len = 0;

	for(int i = 0; str[i] != '\0'; i++) {
		str_len += 1;
	}
	printf("str : %s\n", str);
	printf("strlen : %d\n", str_len);

	return 0;
}
