#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void main()
{
	int a, b;
	int result;
	printf("ù��° ����� ���� �Է��ϼ���");
	scanf_s("%d", &a);

	printf("�ι�° ����� ���� �Է��ϼ���");
	scanf_s("%d", &b);

	result = a + b;
	printf("%d+%d=%d", a, b, result);
}