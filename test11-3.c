#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, b;

	do {
		printf("���������� ���� ���� �Է��ϼ��� (1������ �����մϴ�):");
	scanf("%d", &a);

	printf("���������� ������ ���� �Է��ϼ���(1������ �����մϴ�. 0�� �Է��ϸ� ����˴ϴ�.):");
	scanf("%d", &b);

	
		printf("���������Ͱ� %d������ %d������ �̵��մϴ�.\n", a, b);


	} while (b != 0);

	b = 1;
	

	printf("���α׷��� �����մϴ�");

	return 0;


}