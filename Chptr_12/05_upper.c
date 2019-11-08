#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void) {

	int n;
	char str[100];

	printf("입력 : ");
	fgets(str, 100, stdin);
	
	for(int i = 0; i < strlen(str); i++) {
		if(isalpha(str[i]))
			str[i] = toupper(str[i]);
	}
	printf("변경 : %s", str);
	return 0;
}
