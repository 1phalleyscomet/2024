#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char countries[4][50];
	int i;
	printf("국가 이름을 입력하세요:\n");
	for (i = 0; i < 4; i++) {
		printf("국가 %d:", i + 1);
		gets_s(countries[i], sizeof(countries[i]));
	}
	printf("\n입력한 국가 이름을 역순으로 출력:\n");

	for (i = 3; i >= 0; i--) {
		printf("%s\n", countries[i]);

	}
	return 0;
}