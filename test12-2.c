#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a[10];
	int max = 0, min = 100000000;
	int i,j;
	
	for (i = 0; i <= 9; i++) {
		printf("%d번째 숫자를 입력하세요:", i + 1);
		scanf("%d", &a[i]);

			if (max < a[i]) {
				max = a[i];
			}
			if (min > a[i]) {
				min = a[i];
			}
		}
	

	
	printf("%d", min+max);
	return 0;
}