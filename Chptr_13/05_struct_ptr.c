#include<stdio.h>

struct student {
	int number;
	char name[20];
	double grade;
};

int main(void) {

	struct student s = {20192919, "이승민", 4.3};
	struct student *s_p;

	s_p = &s;

	printf("학번=%d 이름=%s 학점=%f\n", s.number, s.name, s.grade);
	printf("학번=%d 이름=%s 학점=%f\n", (*s_p).number, (*s_p).name, (*s_p).grade);
	printf("학번=%d 이름=%s 학점=%f\n", s_p->number, s_p->name, s_p->grade);

	return 0;
}
