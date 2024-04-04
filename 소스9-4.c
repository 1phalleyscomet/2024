#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // srand(),rand()
#include <time.h>

int main() {
	int n1, n2, a;
	char operators[] = { '+','-','*','/' };
	int num_questions;

	srand(time(NULL));//랜덤 시드 초기화

	printf("생성할 사칙연산 문항수를 입력하시오:");
	scanf("%d", &num_questions);

	for (int i = 0; i < num_questions; i++) {
		n1 = rand() % 100 + 1;
		n2 = rand() % 100 + 1;
		char operator = operators[rand() % 4];

		if (operator == '/' && n1 % n2 != 0) {
			i--;
			continue;
		}
		printf("문제 %d:%d %c %d = ? \n", i + 1, n1, operator,n2);
		printf("정답을 입력하세요:");
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
			printf("정답입니다!\n");
		}
		else {
			printf("틀렸습니다. 정딥은 %d입니다\n", correct_answer);
		}
	}
	return 0;

}