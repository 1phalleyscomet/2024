
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int x, y;
	printf("ù��° ���� �Է�:");
	scanf_s("%d", &x);
	printf("�ι�° ���� �Է�:");
	scanf_s("%d", &y);
	printf("��:%d \n ������:%d \n", x / y, x % y);
	return 0;
}
