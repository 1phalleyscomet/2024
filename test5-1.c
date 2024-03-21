
// 2개의 실수 입력 -> 정수부 더한 값 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float a;
	float b;
	printf("첫번째 실수 입력 :");
	scanf_s("%f", &a);
	printf("두번째 실수 입력:");
	scanf_s("%f", &b);
	int result;
	result = a + b;
	printf("%f + %f = %d" , a, b , result);

	return 0;
}