
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x, y;
	printf("첫번째 정수 입력:");
	scanf_s("%d", &x);
	printf("두번째 정수 입력:");
	scanf_s("%d", &y);
	printf("몫:%d \n 나머지:%d \n", x / y, x % y);
	return 0;
}
