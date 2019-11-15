#include<stdio.h>
#include<string.h>
#define LINE_SIZE 256

struct wd_cnt {
	char word[20];
	int count;
};

void func_count(struct wd_cnt *A, int *n, char *cmp) {
	for(int i = 1; i <= *n; i++) {
		if(strcmp(A[i].word, cmp) == 0) {
			A[i].count += 1;
			return;
		}
	}
	*n += 1;
	strcpy(A[*n].word, cmp);
	A[*n].count = 1;
}

int main(void) {

	char buffer[LINE_SIZE];
	char seps[] = " .,\t\n";
	char *token;
	FILE *fp = fopen("london.txt", "r");
	struct wd_cnt WC[100];
	int n = 0;

	if(fp == NULL) {
		printf("Failed to open file\n");
		return 0;
	}

	while(fgets(buffer, LINE_SIZE-1, fp) != NULL) {
		token = strtok(buffer, seps);
		while(token != NULL) {
			func_count(WC, &n, token);
			token = strtok(NULL, seps);
		}
	}
	fclose(fp);

	for(int i = 1; i <= n; i++)
		printf("%d. %s : %d\n", i, WC[i].word, WC[i].count);
	return 0;
}
