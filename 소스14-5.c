#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int basic[3] = { 2,4,8 }, max[3] = { 3,7,12 };
	int season[3][2] = { {30000,50000},{70000,110000},{120000,170000} };
	int exceed[3] = { 5000,10000,15000 };
	int room, time, person, charge;
	printf("���ȣ(1~3)�� �Է��ϼ���:");
	scanf("%d", &room);
	printf("�ñ�(�����:1,������:2)�� �Է��ϼ���:");
	scanf("%d", &time);
	do {
		printf("�ο����� �Է��ϼ���:");
		scanf("%d", &person);
	} while (person > max[room - 1]);
	charge = season[room - 1][time - 1] + (person - basic[room - 1]) * exceed[room - 1];
	printf("���ڿ��:%d��", charge);
	return 0;
}