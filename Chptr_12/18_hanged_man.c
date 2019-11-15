#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int check(char* str, char* ans, char ch);
int main(void) {

	char solution[100] = "Meet at midnight";
	char answer[100] = {0,};
	char in[100] = {0,}, ch;
	int i, len = strlen(solution)-1;

	for(i = 0; i < len; i++) {
		if(isalpha(solution[i])) 
			answer[i] = '_';
		else
			answer[i] = solution[i];
	}

	i = 1;
	while(i < len + 10) {
		system("clear");
		printf("[ %d번째 시도 ]\n", i);
		printf("문자열을 입력하세요 : %s\n", answer);
		printf("글자를 추측하시오 : ");
		scanf("%s", in);
		ch = in[0];
		if(ch == 10) continue;
		if(check(solution, answer, ch) == 1)
			break;
		i += 1;
	}

	if(i == len + 10)
		printf("실패, 정답은 %s\n", solution);
	else
		printf("성공, 정답은 %s\n", solution);

	return 0;
}

int check(char* str, char* ans, char ch) {
	for(int i = 0; str[i] != '\0'; i++) {
		if(tolower(str[i]) == tolower(ch))
			ans[i] = str[i];
	}
	if(strcmp(str, ans) == 0) return 1;
	else return 0;
}

