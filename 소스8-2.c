#include <stdio.h>
void main() {
	int i, k;
	for (i = 1; i <= 9; i++)
	{
		for (k = 2; k <= 9; k++)
		{
			printf("%2dX%2d=%2d", i, k, k * i);
			
		}
		printf("\n");
	}
}