#include <stdio.h>

int main(void) {
	int x, y;
	printf("first number=");
	scanf_s("%d", &x);
	printf("second number=");
	scanf_s("%d", &y);

	printf("bigger number=%d\n", (x > y) ? x : y);
	//x>y�� ���̸� x�� ������ ��, �����̸� y�� ������ ��
	printf("lower number=%d\n", (x < y) ? x : y);

}