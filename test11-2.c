#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a,i=1;
	int m = 1;

	printf("������ �Է��ϼ���:");
	scanf("%d", &a);

	do {
		m *= i;
		i++;

	} while (i <= a);
	printf("%d!=%d", a, m);
	return 0;
}