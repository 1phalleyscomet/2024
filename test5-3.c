// ���� 2�� �Է� -> and or xor �޿�����Ʈ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int x, y;
	printf("ù��° ���� �Է�:");
	scanf_s("%d", &x);
	printf("�ι�° ���� �Է�:");
	scanf_s("%d", &y);
	printf("%d & %d =%d\n", x, y, x & y);
	printf("%d | %d =%d\n", x, y, x | y);
	printf("%d ^ %d =%d\n", x, y, x ^ y);
	printf("x ���� ����Ʈ 1ȸ:%d\n", x << 1);
	printf("y���� ����Ʈ 1ȸ:%d \n", y >> 1);
}