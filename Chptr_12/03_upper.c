#include<stdio.h>
#include<ctype.h>
#define SIZE 26

int main(void) {

	char str[] = "The worst things to eat before you sleep";
	int chk[26] = {0,};
	int n, i, x;

	printf("%d\n", 'A');

	/* count */

	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] == 10)
			continue;
		else if(isalpha(str[i])) {
			x = toupper(str[i])-65;
			chk[x] += 1;
		}
	}

	printf("str : %s\n", str);
	for(i = 0; i < 26; i++)
		printf("\'%c\' : %d\n", i+65, chk[i]);

	return 0;
}
