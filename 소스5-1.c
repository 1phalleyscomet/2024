
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float weight;
	float height;
	printf("체중을 입력하세요 :" );
	scanf_s("%f", &weight);
	printf("신장을 입력하세요(m):");
	scanf_s("%f", &height);
	float bmi = weight / (height * height);
	printf("BMI: %.2f\n\n", bmi);

	return 0;
}