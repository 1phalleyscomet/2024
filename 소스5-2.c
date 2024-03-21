
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int number;

	printf("세자리 숫자 입력:");
	scanf_s("%d", &number);

	int hundreds = number / 100;
	int tens = (number % 100) / 10;
	int units = number % 10;
	printf("백의 자리:%d \n", hundreds);
	printf("십의 자리:%d \n", tens);
	printf("일의 자리:%d \n", units);

	return 0;
}