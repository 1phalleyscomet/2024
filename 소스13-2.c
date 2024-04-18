#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int seat[10] = { 0 };

	int num;
	char choice;
	printf("예약을 시작합니다.\n");

	//초기 좌석 배치도 출력
	printf("좌석 배치표:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", seat[i]);
	}
	printf("\n");

	do {
		printf("예약할 좌석 번호를 선택하세요(1~10):");
		scanf("%d", &num);

		if (num < 1 || num >10) {
			printf("잘못된 좌석입니다. 다시 선택해주세요\n");
		}

		else if (seat[num - 1] == 1) {
			printf("이미 예약된 좌석입니다.\n");
		}

		else {
			seat[num - 1] = 1;
			printf("좌석 예약이 완료되었습니다\n");

			printf("좌석 배치표\n");
			for (int i = 0; i < 10; i++) {
				printf("%d", seat[i]);
			}
			printf("\n");
		}
		printf("더 예약하시겠습니까?(y/n):");
		scanf(" %c", &choice);

	} while (choice == 'y' || choice == 'Y');
	printf("예약이 종료되었습니다. 감사합니다\n");

	return 0;
}
