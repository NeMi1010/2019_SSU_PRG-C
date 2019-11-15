#include<stdio.h>
#include<string.h>

typedef struct student {
	int number;
	char name[20];
	double grade;
}std_t;

int std_equal(std_t *A, std_t *B) {
	if(A->number != B->number)
		return 0;
	else if(strcmp(A->name, B->name) != 0)
		return 0;
	else if(A->grade != B->grade)
		return 0;
	return 1;
}

int main(void) {

	std_t s1 = {20000000, "홍길동", 4.0};
	std_t s2 = {20192919, "이승민", 4.0};
	int result;

	result = std_equal(&s1, &s2);

	if(result == 1)
		printf("같은 학생입니다.\n");
	else
		printf("다른 학생입니다.\n");

	return 0;
}
