#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char countries[4][50];
	int i;
	printf("���� �̸��� �Է��ϼ���:\n");
	for (i = 0; i < 4; i++) {
		printf("���� %d:", i + 1);
		gets_s(countries[i], sizeof(countries[i]));
	}
	printf("\n�Է��� ���� �̸��� �������� ���:\n");

	for (i = 3; i >= 0; i--) {
		printf("%s\n", countries[i]);

	}
	return 0;
}