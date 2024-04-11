#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int n = 1;
	int sum =0;

	printf("양의 상수를 입력하세요:");
	scanf("%d", &a);

	while ( n <= a) {
		if (n % 7 == 0) {

			sum = sum + n;
		}
		n++;
	}
		printf("입력한 수까지의 7의 배수의 합:%d\n", sum );
		return 0;
	
}
