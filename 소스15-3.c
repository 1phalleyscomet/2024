#include <stdio.h>
int main(void) {
	char a[100];
	int i = 0, j, count[26] = { 0 };
	printf("문자열을 입력하세요:");
	fgets(a, sizeof(a), stdin);

	printf("입력하신 문자열은 다음과 같습니다:");
	do {
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			count[a[i] - 'a'] += 1;
			printf("%c", a[i]);
		}
		i++;
	} while (a[i] != '\0');
	printf("\n");
	printf("알파벳 count\n");
	for (j = 0; j< 26; j++) {
		if (count[j] > 0) {
			printf("%c       %2d\n", j + 'a', count[j]);

		}

	}
	return 0;
}