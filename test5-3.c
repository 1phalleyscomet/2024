// 정수 2개 입력 -> and or xor 왼오시프트연산
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
	int x, y;
	printf("첫번째 정수 입력:");
	scanf_s("%d", &x);
	printf("두번째 정수 입력:");
	scanf_s("%d", &y);
	printf("%d & %d =%d\n", x, y, x & y);
	printf("%d | %d =%d\n", x, y, x | y);
	printf("%d ^ %d =%d\n", x, y, x ^ y);
	printf("x 왼쪽 시프트 1회:%d\n", x << 1);
	printf("y왼쪽 시프트 1회:%d \n", y >> 1);
}