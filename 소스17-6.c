#include <stdio.h>

int main(void) {
	double a[] = { 1.23,3.14,9.16,100.90 };
	int size = sizeof(a) / sizeof(a[0]);

	double* ptr = a;
	double max = *ptr;
	double* max_ptr = ptr;

	for (int i = 0; i < size; i++) {
		if (*(ptr + i) > max) {
			max = *(ptr + i);
			max_ptr = ptr + i;
		}
	}
	printf("�ִ��� %.2lf�Դϴ�\n", max);
	printf("�ִ��� �ִ� �޸� �ּҴ� %p�Դϴ�\n", *max_ptr);

	return 0;
}