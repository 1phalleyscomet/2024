#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int array[5], i;
	int* p = array;

	printf("5개의 정수를 입력하세요:");
	scanf("%d %d %d %d %d", p, p + 1, p + 2, p + 3, p + 4);

	printf("역순:");
	for (i = 4; i >= 0; i--)
		printf("%d ", *(p + i));

	printf("\n");
	return 0;

}