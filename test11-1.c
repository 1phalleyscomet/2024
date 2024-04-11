#include <stdio.h>
int main() {
	int a,i=1;
	int m = 1;

	printf("정수를 입력하세요:");
	scanf_s("%d", &a);

	while (i<= a) {
		
		if (i % 2 == 0) {
			m *= i;

		}
		i++;
	}
		printf("1부터 %d까지의 짝수의 곱은 %d입니다", a, m);
		return 0;
}