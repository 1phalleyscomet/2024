#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	
	int i;
	int sum = 0;

	srand(time(NULL));

	printf("주사위를 20번 던진 결과:\n");

	for (i = 0; i < 20; i++) {
		int roll = rand() % 6; 
		printf("%d ", roll+1);
		sum += roll+1;
	}
	

	printf("\n주사위를 20번 던진 결과의 합: %d", sum);



	return 0;
}
