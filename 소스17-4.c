#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double d;
	int i;
	double f;
	double* pd = &d;
	int* pi = &i;

	printf("�Ǽ��� �Է��ϼ���:");
	scanf("%lf", pd);

	*pi = (int)*pd;

	f = *pd - *pi;

	printf("�����δ� %d�Դϴ�\n", i);
	printf("�Ǽ��δ� %lf�Դϴ�\n", f);

	return 0;

}