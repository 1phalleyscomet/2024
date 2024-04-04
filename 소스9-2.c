#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, i, j;
	printf("정수를 입력하시오:");
	scanf_s("%d", &num);
	
	printf("1부터 %d까지 소수:\n", num);
	for (i = 2; i <= num; i++) {
		int a = 1;
		for (j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				a = 0;
				break;
			}
		}
		if (a)
			printf("%d", i);
	}
	printf("\n");
	return 0;
}