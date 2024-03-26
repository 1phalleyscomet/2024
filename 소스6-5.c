#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a;
	printf("insert numer:");
	scanf("%d", &a);

	if (a > 50)
	{
		if (a < 100)
			printf("%d<%d<%d\n", 50, a, 100);

		else
			printf("%d<%d\n", 100, a);
	}
	else
		printf("%d<%d\n", a, 50);
}
