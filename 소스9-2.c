#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, i, j;
	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &num);
	
	printf("1���� %d���� �Ҽ�:\n", num);
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