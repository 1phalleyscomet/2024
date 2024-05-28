#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	FILE *wfp;
	int sum = 0;
	int i, in;

	wfp = fopen("c:\\temp\\data7.txt", "w");
	for (i = 0; i < 5; i++) {
		printf("숫자%d: ", i + 1);
		scanf("%d", &in);
		sum = sum + in;
	}
	fprintf(wfp, "합계:%d\n", sum);

	fclose(wfp);

	
}