#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int dice[6] = { 0 };
	int i;
	int sum = 0;

	srand(time(NULL));

	printf("�ֻ����� 20�� ���� ���:\n");

	for (i = 0; i < 20; i++) {
		int roll = rand() % 6; 
		printf("%d ", roll+1);
		sum += roll+1;
	}
	

	printf("\n�ֻ����� 20�� ���� ����� ��: %d", sum);



	return 0;
}