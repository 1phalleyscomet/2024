#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> // ǥ�� ����� ���̺귯��
#include <stdlib.h> // �Ϲ� ��ƿ��Ƽ ���̺귯��
#include <time.h> //�ð� ���� �Լ� ���̺귯��
int main() {
	int secretN, guess, attempts = 0;

	srand(time(NULL)); //���� �ð��� ������� �õ尪 ����

	secretN = rand() % 100 + 1;
	printf("���� ���߱� ���� ����\n");

	do {
		printf("1���� 100 ������ ���ڸ� �����ϼ���:");
		scanf_s("%d", &guess);
		attempts++; //�õ� Ƚ�� ����

		if (guess > secretN) {
			printf("�ʹ� Ů�ϴ�\n");

		}
		else if (guess < secretN) {
			printf("�ʹ� �۽��ϴ�\n");
		}
		else {
			printf("�����Դϴ�. %d�� �õ��߽��ϴ�\n", attempts);


		}

	} while (guess != secretN);
	return 0;

}