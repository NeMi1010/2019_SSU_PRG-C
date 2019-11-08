#include <stdio.h>

int REMAIN;

void dec_item(int N) {
	if(REMAIN < N) printf("상품 %d개를 판매하였습니다.\n", REMAIN);
	else printf("상품 %d개를 판매하였습니다.\n", N);
	REMAIN -= N;
	if(REMAIN < 0) REMAIN *= 0;
}
void inc_item(int N) {
	REMAIN += N;
	printf("상품 %d개가 입고되었습니다.\n", N);
}
void print_item() {
	printf("현재 상품의 재고는 %d개입니다.\n", REMAIN);
}
int main(void) {

	int opt, n;

	while(1) {
		printf("\n<< 판매 : 1, 입고 : 2, 재고확인 : 3, 종료 : 4 >>\n");
		printf("선택 : ");
		scanf("%d", &opt);

		if(opt < 3 && opt > 0) {
			printf("수량을 입력하시오 \n");
			scanf("%d", &n);
		}

		switch (opt) {
			case 1:
				dec_item(n);
				continue;
			case 2:
				inc_item(n);
				continue;
			case 3:
				print_item();
				continue;
			case 4:
				goto END;
			default:
				printf("잘못 선택함\n");
		}
	}

END:
	return 0;
}
