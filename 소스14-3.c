#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main() {
	char in[50], out[50];
	int i, len;
	int diff = 'a' - 'A';

	printf("���ڿ� �Է�:");
	gets(in);

	len = strlen(in);

	for (i = 0; i < len; i++) {
		if (('A' <= in[i]) && (in[i] <= 'Z'))
			out[i] = in[i] + diff;
		else if (('a' <= in[i]) && (in[i] <= 'z'))
			out[i] = in[i] - diff;
		else
			out[i] = in[i];
	}
	out[i] = '\0';

	printf("��ȯ�� ����:%s\n", out);
}