#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int data[10];
	printf("�迭��� 10���� �Է��ϼ���:\n");
	for (int i = 0; i < 10; i++) {
		printf("data[%d]: ", i);
		scanf("%d", &data[i]);
	}
	printf("print_array()\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += *(data + i);
	}
	printf("�迭����� ��=%d\n", sum);
	return 0;
}