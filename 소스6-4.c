#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a;
	printf("insert numer:");
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("even");
	else
		printf("odd");
}