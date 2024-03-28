#include <stdio.h>

int main(void) {
	int year;

	printf("input year:");
	scanf_s("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d´Â À±³âÀÔ´Ï´Ù\n", year);
	else
		printf("%d´Â À±³âÀÌ ¾Æ´Õ´Ï´Ù\n:", year);
			return 0;

}
