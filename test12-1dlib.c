#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc, free�Լ� ���
int main() {
	int n;
	

	printf("������ ������ �Է��ϼ���:");
	scanf("%d", &n);

	int* even_numbers = (int*)malloc(n * sizeof(int)); //�迭 ���� �Ҵ�

	if (even_numbers == NULL) {

		printf("�޸� �Ҵ翡 �����߽��ϴ�.\n");
		return -1; //���н����α׷� ����

	}

	int num, sum = 0;
	int count = 0; //¦���� ����� �迭�� �ε����� �����ϴ� ����
	printf("������ �Է��ϼ���:");
	scanf("%d", &num);

	for (int i = 0; i < count; i++) {
		printf("%d", even_numbers[i]);
	}

	printf("\n¦���� ��:%d\n", sum);

	free(even_numbers); //�������� �Ҵ�� �迭 �޸� ����
	return 0;
	}

