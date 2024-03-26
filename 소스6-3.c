#include <stdio.h>
void main() {
	int a = 200;

	if (a < 100)
	{
		printf("less than 100\n"); //실행할 문장 여러개 ->{}로 묶기
		printf("True\n");
	}
	else
	{
		printf("more than 100\n");
		printf("False\n");
	}
}