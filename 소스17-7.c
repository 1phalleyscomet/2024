#include <stdio.h>

int main(void) {
	double grades[10] = { 0,0.5,1.0,2.0,2.5,3.0,3.5,4.0,4.3 };
	double scores[10] = { 0 };

	double* grades_ptr = grades;
	double* scores_ptr = scores;

	printf("grades 배열:");
	for (int i = 0; i < 10; i++) {
		printf("%05.2f ", *(grades_ptr + i));
	}

	printf("\n");

	printf("scores 배열:");
	for (int i = 0; i < 10; i++) {
		*(scores_ptr + i) = 100.0 * (*(grades_ptr + i) / 4.3);
		printf("%05.2f ", *(scores_ptr + i));
	}
	printf("\n");

	return 0;

}