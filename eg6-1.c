#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int a,b;
	char ch;

	printf("input number:");
	scanf("%d", &a);

	printf("input another number:");
	scanf("%d", &b);

	printf("input operator:");
	scanf(" %c", &ch); //ignore blanck
	
	if (ch == '+')
	{printf("%d + %d =%d\n", a, b, a + b);
	}
	else if (ch == '-')
	printf("%d - %d =%d\n", a, b, a - b);
	
	else if (ch == '/')
	printf("%d / %d =%f\n", a, b, a / (float)b);
	
	else if (ch == '*')
	printf("%d * %d =%d\n", a, b, a * b);
	
	else if (ch == '%')
	printf("%d %% %d =%d\n", a, b, a % b);
	
	else
	{
		printf("you input wrong operator\n");
	}
}