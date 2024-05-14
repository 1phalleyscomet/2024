#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double d;
	int i;
	double f;
	double* pd = &d;
	int* pi = &i;

	printf("실수를 입력하세요:");
	scanf("%lf", pd);

	*pi = (int)*pd;

	f = *pd - *pi;

	printf("정수부는 %d입니다\n", i);
	printf("실수부는 %lf입니다\n", f);

	return 0;

}