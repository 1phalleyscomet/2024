#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int data[10];
	int* ptr = data;
	int i;

	srand(time(NULL));
	
	printf("ä���� �迭:");
	for (i = 0; i < 10; i++) {
		*(ptr + i) = rand();
		printf("%d ", *(ptr + i));
	}
	printf("\n");

	return 0;
}