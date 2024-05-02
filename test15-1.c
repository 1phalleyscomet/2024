#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int set1[100], set2[100], set[200];
	int n, m, i, j, k, isalreadyin;
	printf("첫번째 집합의 크기:");
	scanf("%d", &n);

	printf("첫번째 집합의 원소를 입력하세요:");
	for (i = 0; i < n; i++) {
		scanf("%d", &set1[i]);
	}
	printf("두번째 집합의 크기:");
	scanf("%d", &m);
	printf("두번째 집합의 원소를 입력하세요:");
	for (i = 0; i < m; i++) {
		scanf("%d", &set2[i]);
	}
	//교집합 생성
	k = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (set2[i] == set1[j]) {
				set[k++] = set2[i];
				break;
			}
		}
	}
	printf("합집합:");
	for (i = 0; i < k; i++) {
		printf("%d ", set[i]);
	}
	printf("\n");
	return 0;



}