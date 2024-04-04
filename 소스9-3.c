#include <stdio.h>
int main() {
	int num, i, a = 1;
	for (;;) {
		printf("정수를 입력하세요(0 입력 시 종료):");
		scanf_s("%d", &num);

		if (num == 0)
			break;

		if (num <= 1) {
			printf("%d은 소수가 아닙니다\n", num);
			continue;
		}
		if (num == 2) {
			printf("%d은 소수입니다\n", num);
			continue;
		}
		for (i = 2; i < num; i++) {
			if (num % i == 0) {
				a = 0;
				break;
			}
		}
		if (a)
			printf("%d은 소수 입니다\n", num);
		else
			printf("%d은 소수가 아닙니다\n", num);

		a = 1;
	}
	return 0;
}