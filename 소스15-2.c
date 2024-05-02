#include <stdio.h>
int main(void) {
	double power[4][7] = {
		{25, 30, 22, 28, 32, 45, 30},
		{22, 25, 28, 26, 38, 40, 33},
		{25, 34, 20, 22, 40, 36, 37},
		{22, 28, 27, 28, 35, 40, 32}
	};
	char dayofweek[7][3] = { "월","화","수","목","금","토","일" };
	int i, j;
	double sum, sum_col[7];

	printf("구분 ");
	for (i = 0; i < 7; i++)
		printf("%5s", dayofweek[i]);
	printf("합계 평균\n");

	for (i = 0; i < 4; i++) {
		sum = 0;
		printf("%d주:",i + 1);
		for (j = 0; j < 7; j++)
		{
			sum += power[i][j];
			printf("%5.0f", power[i][j]);
		}
		printf(" %5.1f", sum);
		printf(" %5.1f\n", sum / 7);
	}
	for (j = 0; j < 7; j++) {
		sum_col[j] = 0;
		for (i = 0; i < 4; i++)
			sum_col[j] += power[i][j];
	}
	printf("합계 ");
	sum = 0;
	for (j = 0; j < 7; j++) {
		sum += sum_col[j];
		printf("%5.0f", sum_col[j]);

	}
	printf(" %5.1f", sum);
	printf(" %5.1f\n", sum / 7);
	printf("평균 ");
	sum = 0;
	for (j = 0; j < 7; j++) {
		sum += sum_col[j] / 4;
		printf("%5.0f", sum_col[j] / 4);
	}
	printf(" %5.1f", sum);
	printf(" %5.1f\n", sum / 7);

	return 0;
}