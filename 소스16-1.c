#include <stdio.h>
int main() {
	//�迭 ����� �ּ� &aa, �迭 ��ü�� �ּ� aa

	//������ ���� * ig) char* p; ���ڿ� ������ ���� ����
	int a = 5;
	int b = 10;
	printf("���� ��:a=%d,b=%d\n", a, b);

	//�����͸� ����Ͽ� �� ������ ���� ��ȯ
	int* ptr_a = &a;
	int* ptr_b = &b;
	int temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;

	printf("���� ��:a=%d, b=%d\n", a, b);

	return 0;

}