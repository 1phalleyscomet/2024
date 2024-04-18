#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int dice[6] = { 0 }; //배열 초기화
	int i;

	srand(time(NULL));

	for (i = 0; i < 100; i++) {
		int roll = rand() % 6; //0부터 5까지 난수 생성하여 주사위 값으로 사용
		dice[roll]++; // 해당숫자 카운트 증가

	}
	printf("주사위를 100번 던졌을 때 각 숫자가 나온 횟수:\n");
	for (i = 0; i < 6; i++) {
		printf("%d:%d번\n", i + 1, dice[i]);

	}
	return 0;
}