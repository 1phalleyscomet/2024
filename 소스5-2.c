
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int number;

	printf("���ڸ� ���� �Է�:");
	scanf_s("%d", &number);

	int hundreds = number / 100;
	int tens = (number % 100) / 10;
	int units = number % 10;
	printf("���� �ڸ�:%d \n", hundreds);
	printf("���� �ڸ�:%d \n", tens);
	printf("���� �ڸ�:%d \n", units);

	return 0;
}