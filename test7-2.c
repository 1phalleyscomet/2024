#include <stdio.h>

void main() {
    char a;
    printf("input grade:");
    scanf_s("%c", &a);

    
    switch (a)
    {

    case 'A':
        printf("����մϴ�! ���ϼ̾��!");
    case 'B':
        printf("���߽��ϴ�. �������� ����� �ʿ��ؿ�.");
    case 'C':
        printf("������� �����Դϴ�. ����� �ʿ��� �� ���ƿ�.");
    case 'D':
        printf("�հ��� ������, �� ���� ����� �ʿ��մϴ�");
    case 'F':
        printf("�� �� ����ؾ� �� �� ���ƿ�. ȭ����!");
    }
    return 0;
}



    