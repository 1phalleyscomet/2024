#include <stdio.h>

int main(void) {
	int x, y;
	printf("first number=");
	scanf_s("%d", &x);
	printf("second number=");
	scanf_s("%d", &y);

	printf("bigger number=%d\n", (x > y) ? x : y);
	//x>y가 참이면 x가 수식의 값, 거짓이면 y가 수식의 값
	printf("lower number=%d\n", (x < y) ? x : y);

}