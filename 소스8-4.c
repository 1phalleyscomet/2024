//1-10000 15����� ��
#include <stdio.h>
void main() {
	int i;
	int n=0;
	for (i = 1; i <= 10000; i=i*15)
	{
		n = n + i;
	}
	printf("%d",n);
}