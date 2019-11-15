#include<stdio.h>
#include<string.h>

int main(void) {

	int i, len;
	char str[100] = {0,};

	printf("문장 : ");
	scanf("%s", str);
	len = strlen(str)-1;

	for(i = 0; i <= (len-1)/2; i++) {
		if(str[i] != str[len-i])
			break;
	}
	if(i == (len-1)/2+1)
		printf("회문입니다.\n");
	else
		printf("회문이 아닙니다.\n");

	return 0;
}
