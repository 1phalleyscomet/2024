#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h> // 표준 입출력 라이브러리
#include <stdlib.h> // 일반 유틸리티 라이브러리
#include <time.h> //시간 관렴 함수 라이브러리
int main() {
	int secretN, guess, attempts = 0;

	srand(time(NULL)); //현재 시간을 기반으로 시드값 설정

	secretN = rand() % 100 + 1;
	printf("숫자 맟추기 게임 시작\n");

	do {
		printf("1에서 100 사이의 숫자를 추측하세요:");
		scanf_s("%d", &guess);
		attempts++; //시도 횟수 증가

		if (guess > secretN) {
			printf("너무 큽니다\n");

		}
		else if (guess < secretN) {
			printf("너무 작습니다\n");
		}
		else {
			printf("정답입니다. %d번 시도했습니다\n", attempts);


		}

	} while (guess != secretN);
	return 0;

}