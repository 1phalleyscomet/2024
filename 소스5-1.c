
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float weight;
	float height;
	printf("ü���� �Է��ϼ��� :" );
	scanf_s("%f", &weight);
	printf("������ �Է��ϼ���(m):");
	scanf_s("%f", &height);
	float bmi = weight / (height * height);
	printf("BMI: %.2f\n\n", bmi);

	return 0;
}