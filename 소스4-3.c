#include <stdio.h>
void main()
{
	int a = 10, b;
	b = a++; //b=a -> a+1 순서 console a=11 b=10
	printf("%d", b);

	b = ++a; //a+1 -> b=a 순서 console a=11 b=11 
	printf("%d", b);
}
