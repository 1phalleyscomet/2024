#include <stdio.h>
int main() {
	int i[] = { 10,20,30,40,50 };

	printf("i=%d\n", i);

	printf("i+1=%d\n", i + 1);
	printf("*i=%d\n", *i);
	printf("*(i+1)=%d\n", *(i + 1));
	printf("*(i+1)=%d\n", i[1]);
	return 0;

}