
// 실수 3개 -> 소수부 더한 값 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float a;
	float b;
	float c;
	printf("첫번째 실수 입력 :");
	scanf_s("%f", &a);
	int a1; 
	a1 = a;
	printf("두번째 실수 입력:");
	scanf_s("%f", &b);
	int b2;
	b2 = b;
	printf("세번째 실수 입력:");
	scanf_s("%f", &c);
	int c2;
	c2 = c;
	float result;
	result = (a - a1) + (b - b2) + (c - c2);
	printf("소수부: %f", result );

	return 0;
}
