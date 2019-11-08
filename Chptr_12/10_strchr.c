#include<stdio.h>
#include<string.h>

int main(void) {

	char str[] = "Hello World From Linux!";
	char ch = 'r';
	char *p;
	int location;

	p = strchr(str, 'r');
	location = (int)(p - str);
	if(p != NULL)
		printf("첫번째 %c가 %d에서 발견되었음\n", ch, location);
	else
		printf("%c가 발견되지 않았음\n", ch);

	return 0;
}
