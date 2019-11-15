#include<stdio.h>
#include<string.h>

struct student {
	int number;
	char name[20];
};

int main(void) {

	struct student std;

	std.number = 20192919;
	strcpy(std.name, "이승민");

	printf("%d\n%s\n", std.number, std.name);
	return 0;
}
