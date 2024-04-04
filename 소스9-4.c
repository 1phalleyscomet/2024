#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand(),rand()
#include <time.h>

int main() {
	int n1, n2, a;
	char operators[] = { '+','-','*','/' };
	int num_questions;

	srand(time(NULL));//���� �õ� �ʱ�ȭ

	printf("������ ��Ģ���� ���׼��� �Է��Ͻÿ�:");
	scanf("%d", &num_questions);

	for (int i = 0; i < num_questions; i++) {
		n1 = rand() % 100 + 1;
		n2 = rand() % 100 + 1;
		char operator = operators[rand() % 4];

		if (operator == '/' && n1 % n2 != 0) {
			i--;
			continue;
		}
		printf("���� %d:%d %c %d = ? \n", i + 1, n1, operator,n2);
		printf("������ �Է��ϼ���:");
		scanf("%d" , &a);

		int correct_answer;
		switch (operator) {
		case '+':
			correct_answer = n1 + n2;
			break;
		case'-':
			correct_answer = n1 - n2;
			break;
		case '*':
			correct_answer = n1 * n2;
			break;
		case '/':
			correct_answer = n1 / n2;
			break;

		}
		if (a == correct_answer) {
			printf("�����Դϴ�!\n");
		}
		else {
			printf("Ʋ�Ƚ��ϴ�. ������ %d�Դϴ�\n", correct_answer);
		}
	}
	return 0;

}