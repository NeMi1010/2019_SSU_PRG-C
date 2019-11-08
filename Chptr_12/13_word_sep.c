#include<stdio.h>
#include<string.h>
#define LINE_SIZE 40

int main(void) {

	char buffer[LINE_SIZE];
	char seps[] = " .,\t\n";
	char *token;
	FILE *fp = fopen("london.txt", "r");

	if(fp == NULL) {
		printf("Failed to open file\n");
		return 0;
	}

	while(fgets(buffer, LINE_SIZE-1, fp) != NULL) {
		token = strtok(buffer, seps);
		while(token != NULL) {
			printf("%s ", token);
			token = strtok(NULL, seps);
		}
	}
	fclose(fp);

	return 0;
}
