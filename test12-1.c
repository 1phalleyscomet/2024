#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a[4];
	int sum = 0;
	int i;

	for (i = 0;i<=3;i++) {
		printf("%d번째 숫자를 입력하세요:", i + 1);
		scanf("%d", &a[i]);

		if (a[i] % 2 == 0) {
			sum += a[i];
	}

	
	}
	printf("%d", sum);
	return 0;
}