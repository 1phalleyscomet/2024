#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int n = 0;
	int sum =0;

	printf("���� ����� �Է��ϼ���:");
	scanf("%d", &a);

	while (a - n <= 0) {
		if ((a - n) % 7 == 0) {

			sum = sum + (a - n);
		}
		n++;
	}
		printf("�Է��� �������� 7�� ����� ��:%d\n", sum );
		return 0;
	
}