#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void main() {
	char ss[20];
	char tt[20];
	int r1, r2;

	puts("ù��° ���ڿ��� �Է��ϼ���:");
	gets(ss);  //���ڿ� ����� �Լ�

	puts("�ι�° ���ڿ��� �Է��ϼ���:");
	gets(tt);

	r1 = strlen(ss);
	r2 = strlen(tt);

	printf("ù��° ���ڿ��� ����:%d\n", r1);
	printf("�ι�° ���ڿ��� ����:%d\n", r2);

	if (strcmp == 0) //strcmp(ss, tt) �Լ�-> ���ڿ� ��

		puts("�� ���ڿ��� ������ �����ϴ�\n");
	else
		puts("�� ���ڿ��� ������ �ٸ��ϴ�\n");



}
