#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>
void main() {
	char* p[3];
	char imsi[100];
	int i, k, size;


	for (i =0 ; i < 3; i++) {
		printf("%d 번째 문자열:", i + 1);
		gets(imsi);

		size = strlen(imsi);
		p[i] = (char*)malloc((sizeof(char) * size) + 1);

		strcpy(p[i], imsi);
	}
	printf("\n-입력과 반대로 출력(포인터):글자 순서 반대-\n");
	for (i = 2; i >= 0; i--) {
		size = strlen(p[i]);
		imsi[size] = '\0';
		for (k = size - 1; k >= 0; k--)
			imsi[size - 1 - k] = p[i][k];

		printf("%d:%s\n", i + 1, imsi);
	}
	for (i = 0; i < 3; i++)
		free(p[i]);

}