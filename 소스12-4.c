#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int* numbers = NULL;
	int count = 0;
	int sum = 0;
	int ran_number;
	srand(time(NULL));

	printf("·£´ýÇÏ°Ô »ÌÈù ¼ýÀÚ:\n");

	while (1) {
		ran_number = (rand() % 100) + 1;
		printf("%d\t", ran_number);

		if (count > 0 && ran_number == 99) {
			break;
		}
		numbers = realloc(numbers, (count + 1) * sizeof(int));
		if (numbers == NULL) {
			fprintf(stderr, "¸Þ¸ð¸® ÇÒ´ç¿¡ ½ÇÆÐÇÏ¿´½À´Ï´Ù.\n");
			return 1;
		}
		numbers[count] = ran_number;
		count++;

	}
	for (int i = 0; i < count; i++) {
		sum += numbers[i];
	}
	printf("\n\n");
	printf("·£´ýÇÏ°Ô »ÌÈù ¼ýÀÚÀÇ ÇÕ:%d\n", sum);

	free(numbers);
	return 0;
}
