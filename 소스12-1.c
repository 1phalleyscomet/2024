#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a[4];
	int sum = 0;
	int i;

	for (i = 0; i <= 3; i++) {

		printf("%d��° ���ڸ� �Է��ϼ���:", i + 1);
		scanf("%d", &a[i]);
	}

	sum = a[0] + a[1] + a[2] + a[3];

	printf("�հ�:%d\n", sum);
}