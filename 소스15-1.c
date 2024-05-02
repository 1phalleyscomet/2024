#include <stdio.h>

int main(void) {
	int matrix[3][3] = {
		{2,4,6},
		{8,10,12},
		{14,16,18}
	};
	int i, j;
	printf("original matrix:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%2d", matrix[i][j]);
		printf("\n");
	}

	printf("\ntranspose matrix:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%2d", matrix[j][i]);
		printf("\n");
	}
	return 0;
}