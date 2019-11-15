#include <stdio.h>

void ecpt(char* code, int shift);
int main(void) {

	char str[100];
	int encrypt = 5;

	printf("문자열을 입력하세요 : ");
	scanf("%s", str);
	ecpt(str, encrypt);

	return 0;
}

void ecpt(char* code, int shift) {

	int i = 0;
	while(code[i] != '\0') {
		if(code[i] >= 'a' && code[i] <= 'z') {
			code[i] += shift;
			if(code[i] > 'z')
				code[i] -= 26;
		}
		i++;
	}

	printf("암호화된 문자열 : %s\n", code);
	return;
}
