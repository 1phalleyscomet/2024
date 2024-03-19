#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int 국어, 영어, 수학, 과학;
	int result, result1;

	printf("국어 점수입력:");
	scanf_s("%d", &국어);

	printf("영어 점수 입력:");
	scanf_s("%d", &영어);

	printf("수학 점수 입력:");
	scanf_s("%d", &수학);

	printf("과학 점수 입력:");
	scanf_s("%d", &과학);

	result = 국어 + 영어 + 수학 + 과학;
	result1 = result / 4;

	printf("%d/%d=%d\n", result, 4, result1);

}