#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int std[3][3] = {
		{30,10,11},
		{40,90,32},
		{70,65,56} };

	printf("학번 1의 평균점수=%f\n학번 2의 평균점수=%f\n학번 3의 평균점수=%f\n",
		(float)(std[0][0] + std[0][1] + std[0][2] )/ 3,
		(float)(std[1][0] + std[1][1] + std[1][2]) / 3,
		(float)(std[2][0] + std[2][1] + std[2][2]) / 3);

}