#include<stdio.h>
#include<string.h>

typedef struct student {
	int number;
	char name[20];
	double grade;
}std_t;

void inc_grade(std_t *A) {
	A->grade += 1.0;
}

int main(void) {

	std_t s1 = {20192919, "이승민", 4.0};

	printf("%d %s %.1f\n", s1.number, s1.name, s1.grade);
	inc_grade(&s1);
	printf("%d %s %.1f\n", s1.number, s1.name, s1.grade);

	return 0;
}
