#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int user, computer;

	printf("���������� ����\n");
	printf("choose one\n ����:0\n ����:1\n ��:2\n :");
	scanf("%d", &user);

	computer = rand() % 3;
	printf("�����=%d\n", user);
	printf("��ǻ��=%d\n", computer);

	if ((user + 1) % 3 == computer)
		printf("computer win\n");
	else if (computer == user)
		printf("�����\n");
	else
		printf("user win\n");

	return 0;


}