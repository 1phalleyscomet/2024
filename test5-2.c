
// �Ǽ� 3�� -> �Ҽ��� ���� �� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float a;
	float b;
	float c;
	printf("ù��° �Ǽ� �Է� :");
	scanf_s("%f", &a);
	int a1; 
	a1 = a;
	printf("�ι�° �Ǽ� �Է�:");
	scanf_s("%f", &b);
	int b2;
	b2 = b;
	printf("����° �Ǽ� �Է�:");
	scanf_s("%f", &c);
	int c2;
	c2 = c;
	float result;
	result = a - a1 + b - b2 + c - c2;
	printf("�Ҽ���: %f", result );

	return 0;
}