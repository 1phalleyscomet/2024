#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 100
#define MAX_PHONE 20
#define MAX_ADDRESS 100
#define MAX_CONTACTS 100

typedef struct {
	char name[MAX_NAME];
	char phone[MAX_PHONE];
	char address[MAX_ADDRESS];
} Contact;

void addContact(Contact contacts[], int* count);
void deleteContact(Contact contacts[], int* count);
void listContacts(Contact contacts[], int* count);
void saveContacts(Contact contacts[], int* count);
void loadContacts(Contact contacts[], int* count);

int main() {
	Contact contacts[MAX_CONTACTS];
	int count = 0;
	int choice;
	loadContacts(contacts, &count);

	while (1) {
		printf("1.����ó �߰�\n");
		printf("2.����ó ����\n");
		printf("3.����ó ���\n");
		printf("4. ����\n");
		printf("�ɼ��� �����ϼ���:");
		scanf("%d", &choice);

		switch (choice) {
		case 1:
			addContact(contacts, &count); break;
		case 2:
			deleteContact(contacts, &count); break;
		case 3:
			listContacts(contacts, count); break;
		case 4:
			saveContacts(contacts, count); 
			exit(0);
		default:
			printf("�߸��� �����Դϴ�.\n");
		}

	}
	return 0;
}

void addContact(Contact contacts[], int* count) {
	if (*count >= MAX_CONTACTS) {
		printf("����ó ����� ���� á���ϴ�.\n");
		return;
	}
	printf("�̸��� �Է��ϼ���:");
	scanf("%s", contacts[*count].name);
	printf("��ȭ��ȣ�� �Է��ϼ���:");
	scanf("%s", contacts[*count].phone);
	printf("�ּҸ� �Է��ϼ���:");
	scanf("%s", contacts[*count].address);

	(*count)++;
	printf("����ó�� ���������� �߰��Ǿ����ϴ�.\n");

}

void deleteContact(Contact contacts[], int* count) {
	char name[MAX_NAME];
	printf("������ ����ó�� �̸��� �Է��ϼ���:");
	scanf("%s", name);

	for (int i = 0; i < *count; i++) {
		if (strcmp(contacts[i].name, name) == 0) {
			for (int j = i; j < *count - 1; j++) {
				contacts[j] = contacts[j + 1];
			}
			(*count)--;
			printf("����ó�� ���������� �����Ǿ����ϴ�\n");
			return;
		}
	}
	printf("����ó�� ã�� �� �����ϴ�\n");
}
void listContacts(Contact contacts[], int count) {
	if (count == 0) {
		printf("��� ������ ����ó�� �����ϴ�\n");
		return;
	}
	for (int i = 0; i < count; i++) {
		printf("�̸�:%s, ��ȭ��ȣ:%s, �ּ�:%s\n", contacts[i].name, contacts[i].phone, contacts[i].address);
	}
}
void saveContacts(Contact contacts[], int count) {
	FILE* file = fopen("D:\\333.txt", "w");
	if (file == NULL) {
		printf("���� ���� ����\n");
		return;
	}
	for (int i = 0; i < count; i++) {
		fprintf(file, "%s %s %s\n", contacts[i].name, contacts[i].phone, contacts[i].address);

	}
	fclose(file);
	printf("����ó�� ���������� ����Ǿ����ϴ�.\n");
}
void loadContacts(Contact contacts[], int* count) {
	FILE* file = fopen("D:\\333.txt", "r");
	if (file == NULL) {
		return;
	}
	while (fscanf(file, "%s %s %s", contacts[*count].name, contacts[*count].phone, contacts[*count].address) != EOF) {
		(*count)++;
	}
	fclose(file);
	printf("����ó�� ���������� �ҷ��Խ��ϴ�.\n");
}