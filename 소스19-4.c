#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	int even[100];
	int index = 0;
	FILE* wfp;
	const char* filename = "c:\\temp\\data9.txt";
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			even[index++] = i;
		}
	}
	wfp = fopen(filename, "w");
	if (wfp == NULL) {
		fprintf(stderr, "파일 열기 오류\n");
		return 1;
	}
	for (int i = 0; i < index; i++) {
		fprintf(wfp, "%d\n", even[i]);
	}
	fclose(wfp);
	printf("짝수가 %s파일에 저장되었습니다.\n", filename);
	return 0;

}
