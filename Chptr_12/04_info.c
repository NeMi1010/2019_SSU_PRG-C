#include<stdio.h>
#include<string.h>

int main(void) {

	char name[100];
	char addr[100];
	int n;

	printf("이름 : ");
	fgets(name, 100, stdin);
	printf("주소 : ");
	fgets(addr, 100, stdin);

	name[strlen(name)-1] = '\0';
	addr[strlen(addr)-1] = '\0';
	puts(name);
	puts(addr);

	return 0;
}
