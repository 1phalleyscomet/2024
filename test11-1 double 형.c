#include <stdio.h>
void main() {
	int a,i=1;
	double m = 1;

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &a);

	while (i<= a) {
		
		if (i % 2 == 0) {
			m *= i;

		}
		i++;
	}
		printf("1���� %d������ ¦���� ���� %.0lf�Դϴ�", a, m);
		return 0;
}