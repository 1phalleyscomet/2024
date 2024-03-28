#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int user, computer;

	printf("가위바위보 게임\n");
	printf("choose one\n 가위:0\n 바위:1\n 보:2\n :");
	scanf("%d", &user);

	computer = rand() % 3;
	printf("사용자=%d\n", user);
	printf("컴퓨터=%d\n", computer);

	if ((user + 1) % 3 == computer)
		printf("computer win\n");
	else if (computer == user)
		printf("비겼음\n");
	else
		printf("user win\n");

	return 0;


}