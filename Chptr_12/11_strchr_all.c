#include<stdio.h>
#include<string.h>

int main(void) {

	char str[] = "language";
	char ch = 'g';
	char *p;
	int location = -1;

	while(1) {
		p = strchr(str+location+1, ch);
		location = (int)(p - str);
		if(p != NULL)
			printf("%c가 %d에서 발견되었음\n", ch, location);
		else
			break;
	}

	return 0;
}
