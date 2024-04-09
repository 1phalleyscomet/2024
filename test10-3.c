#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int n = 0;
	int sum =0;

	printf("양의 상수를 입력하세요:");
	scanf("%d", &a);

	while (a - n <= 0) {
		if ((a - n) % 7 == 0) {

			sum = sum + (a - n);
		}
		n++;
	}
		printf("입력한 수까지의 7의 배수의 합:%d\n", sum );
		return 0;
	
}