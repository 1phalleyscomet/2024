#include <stdio.h>

int main(void) {
	int month, days;
	printf("input month:");
	scanf_s("%d", &month);

	switch (month)
	{
	case 2:

		days = 28;
		printf("%d���� �ϼ��� %d�Դϴ�\n", month, days);
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		printf("%d���� �ϼ��� %d�Դϴ�\n", month, days);
		break;
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		days = 31;
		printf("%d���� �ϼ��� %d�Դϴ�\n", month, days);
		break;
	default:
		printf("�����ϴ� ���� �ƴմϴ�");
		break;

	}
	
	return 0;

}