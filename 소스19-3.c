#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	FILE* wfp;
	int i, k;

	wfp = fopen("c:\\temp\\gugu.txt", "w");
	for (i = 2; i <= 9; i++) {
		for (k = 2; k <= 9; k++) {
			fprintf(wfp, "%2dX%2d=%2d", k, i, k * i);
		}
		fprintf(wfp, "\n");
	}
	fclose(wfp);
}