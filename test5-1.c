
// 2���� �Ǽ� �Է� -> ������ ���� �� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float a;
	float b;
	printf("ù��° �Ǽ� �Է� :");
	scanf_s("%f", &a);
	printf("�ι�° �Ǽ� �Է�:");
	scanf_s("%f", &b);
	int result;
	result = a + b;
	printf("%f + %f = %d" , a, b , result);

	return 0;
}