#include <stdio.h>
int main() {
	int num, i, a = 1;
	for (;;) {
		printf("������ �Է��ϼ���(0 �Է� �� ����):");
		scanf_s("%d", &num);

		if (num == 0)
			break;

		if (num <= 1) {
			printf("%d�� �Ҽ��� �ƴմϴ�\n", num);
			continue;
		}
		if (num == 2) {
			printf("%d�� �Ҽ��Դϴ�\n", num);
			continue;
		}
		for (i = 2; i < num; i++) {
			if (num % i == 0) {
				a = 0;
				break;
			}
		}
		if (a)
			printf("%d�� �Ҽ� �Դϴ�\n", num);
		else
			printf("%d�� �Ҽ��� �ƴմϴ�\n", num);

		a = 1;
	}
	return 0;
}