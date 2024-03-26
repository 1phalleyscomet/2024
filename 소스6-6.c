#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a;
	printf("input your score:");
	scanf("%d", &a);

	switch (a/10)
	{
	case 0: case 1: case 2: case 3: case 4: case 5:
		printf("F\n"); break;
	case 6:
		printf("D\n"); break;
	case 7:
		printf("C\n"); break;
	case 8:
		printf("B\n"); break;
	case 9: 
		printf("A\n"); break;

	case 10:
	{switch (a % 10)
	case 0:
		printf("A\n"); break;

	}

	
	
	}

}