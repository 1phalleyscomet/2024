#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int set1[100], set2[100], set[200];
	int n, m, i, j, k, isalreadyin;
	printf("ù��° ������ ũ��:");
	scanf("%d", &n);

	printf("ù��° ������ ���Ҹ� �Է��ϼ���:");
	for (i = 0; i < n; i++) {
		scanf("%d", &set1[i]);
	}
	printf("�ι�° ������ ũ��:");
	scanf("%d", &m);
	printf("�ι�° ������ ���Ҹ� �Է��ϼ���:");
	for (i = 0; i < m; i++) {
		scanf("%d", &set2[i]);
	}
	//������ ����
	k = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (set2[i] == set1[j]) {
				set[k++] = set2[i];
				break;
			}
		}
	}
	printf("������:");
	for (i = 0; i < k; i++) {
		printf("%d ", set[i]);
	}
	printf("\n");
	return 0;



}