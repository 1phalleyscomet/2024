#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int seat[10] = { 0 };

	int num;
	char choice;
	printf("������ �����մϴ�.\n");

	//�ʱ� �¼� ��ġ�� ���
	printf("�¼� ��ġǥ:\n");
	for (int i = 0; i < 10; i++) {
		printf("%d", seat[i]);
	}
	printf("\n");

	do {
		printf("������ �¼� ��ȣ�� �����ϼ���(1~10):");
		scanf("%d", &num);

		if (num < 1 || num >10) {
			printf("�߸��� �¼��Դϴ�. �ٽ� �������ּ���\n");
		}

		else if (seat[num - 1] == 1) {
			printf("�̹� ����� �¼��Դϴ�.\n");
		}

		else {
			seat[num - 1] = 1;
			printf("�¼� ������ �Ϸ�Ǿ����ϴ�\n");

			printf("�¼� ��ġǥ\n");
			for (int i = 0; i < 10; i++) {
				printf("%d", seat[i]);
			}
			printf("\n");
		}
		printf("�� �����Ͻðڽ��ϱ�?(y/n):");
		scanf(" %c", &choice);

	} while (choice == 'y' || choice == 'Y');
	printf("������ ����Ǿ����ϴ�. �����մϴ�\n");

	return 0;
}
