#include<stdio.h>
#include<string.h>

int main(void) {

	char ch1[100] = "First One ";
	char ch2[] = "Second Two";
	
	printf("ch1 : %s\n", ch1);
	printf("ch2 : %s\n", ch2);
	strcat(ch1, ch2);
	puts(ch1);

	return 0;
}
