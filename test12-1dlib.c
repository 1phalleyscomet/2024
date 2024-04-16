#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc, free함수 사용
int main() {
	int n;
	

	printf("정수의 개수를 입력하세요:");
	scanf("%d", &n);

	int* even_numbers = (int*)malloc(n * sizeof(int)); //배열 동적 할당

	if (even_numbers == NULL) {

		printf("메모리 할당에 실패했습니다.\n");
		return -1; //실패시프로그램 종료

	}

	int num, sum = 0;
	int count = 0; //짝수가 저장된 배열의 인덱스를 추적하는 변수
	printf("정수를 입력하세요:");
	scanf("%d", &num);

	for (int i = 0; i < count; i++) {
		printf("%d", even_numbers[i]);
	}

	printf("\n짝수의 합:%d\n", sum);

	free(even_numbers); //동적으로 할당된 배열 메모리 해제
	return 0;
	}

