#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int dice[6] = { 0 }; //�迭 �ʱ�ȭ
	int i;

	srand(time(NULL));

	for (i = 0; i < 100; i++) {
		int roll = rand() % 6; //0���� 5���� ���� �����Ͽ� �ֻ��� ������ ���
		dice[roll]++; // �ش���� ī��Ʈ ����

	}
	printf("�ֻ����� 100�� ������ �� �� ���ڰ� ���� Ƚ��:\n");
	for (i = 0; i < 6; i++) {
		printf("%d:%d��\n", i + 1, dice[i]);

	}
	return 0;
}