#include <stdio.h>
int main() {
	int d1, d2;
	printf("�ֻ��� 2���� ���� ���� 10�� �Ǵ� ���:\n");
	for (d1 = 1; d1 <= 6; d1++) {
		for (d2 = 1; d2 <= 6; d2++) {
			if (d1 + d2 == 10) {
				printf("�ֻ���1:%d, �ֻ���2:%d\n", d1, d2);
			}
		}
	}
	return 0;
}
