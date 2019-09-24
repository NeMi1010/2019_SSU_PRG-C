#include <stdio.h>
int main(void) {

	int month;

	printf("태어난 월을 입력하세요 : ");
	scanf("%d", &month);

	switch(month/3)
	{
		case 1:
			printf("봄에  태어났군요.\n");
			break;
 		case 2:
			printf("여름에 태어났군요.\n");
			break;
		case 3:
			printf("가을에 태어났군요.\n");
			break;
		default:
			printf("겨울에 태어났군요.\n");
			break;
	}

	return 0;
}
