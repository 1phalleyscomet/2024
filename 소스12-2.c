#include <stdio.h>

void main() {
	int a[2] = { 1,2 };
	int b[2] = { 1,0 };

	int i;

	for (i = 0; i <= 1; i++)
		printf("a[%d] -> %d\t", i, a[i]);
	printf("\n");

	for (i = 0; i <= 1; i++)
		printf("b[%d] -> %d\t", i, b[i]);
	printf("\n");


}