#include <stdio.h>

int main(void) {
	int data[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int x = 200;
	int index = -1;

	int* ptr = data;

	for (int i = 0; i < 10; i++) {
		if (*(ptr + i) == x) {
			index = i;
			break;
		}
	}

	if (index != -1) {
		printf("������ 200������ ����� �ε���=%d\n", index);

	}
	else {
		printf("�ش� ������ �޴� ����� ã�� �� �����ϴ�\n");

	}
	return 0;
}