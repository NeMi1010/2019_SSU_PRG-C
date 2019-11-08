#include<stdio.h>
#include<string.h>

int main(void) {

	char c1[100];
	char c2[100];
	int result;

	printf("첫번째 단어를 입력하세요 : ");
	scanf("%s", c1);

	printf("두번째 단어를 입력하세요 : ");
	scanf("%s", c2);

	result = strcmp(c1, c2);
	if(result < 0)
		printf("%s가 %s보다 사전적으로 앞에 있습니다.\n", c1, c2);
	else if(result == 0)
		printf("%s가 %s와 같습니다.\n", c1, c2);
	else
		printf("%s가 %s보다 사전적으로 뒤에 있습니다.\n", c1, c2);

	return 0;
}
