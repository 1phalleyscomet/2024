#include <stdio.h>

int main() {
	int n;

	printf("�Ƕ�̵� ���̸� �Է��ϼ���:");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int a = 1; a <= n-i ; a++) 
			printf(" ");

			for (int j = 0; j < (2*i)-1 ; j++)
				printf("*");
			printf("\n");
		

	}
}