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
		printf("1.연락처 추가\n");
		printf("2.연락처 삭제\n");
		printf("3.연락처 목록\n");
		printf("4. 종료\n");
		printf("옵션을 선택하세요:");
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
			printf("잘못된 선택입니다.\n");
		}

	}
	return 0;
}

void addContact(Contact contacts[], int* count) {
	if (*count >= MAX_CONTACTS) {
		printf("연락처 목록이 가득 찼습니다.\n");
		return;
	}
	printf("이름을 입력하세요:");
	scanf("%s", contacts[*count].name);
	printf("전화번호를 입력하세요:");
	scanf("%s", contacts[*count].phone);
	printf("주소를 입력하세요:");
	scanf("%s", contacts[*count].address);

	(*count)++;
	printf("연락처가 성공적으로 추가되었습니다.\n");

}

void deleteContact(Contact contacts[], int* count) {
	char name[MAX_NAME];
	printf("삭제할 연락처의 이름을 입력하세요:");
	scanf("%s", name);

	for (int i = 0; i < *count; i++) {
		if (strcmp(contacts[i].name, name) == 0) {
			for (int j = i; j < *count - 1; j++) {
				contacts[j] = contacts[j + 1];
			}
			(*count)--;
			printf("연락처가 성공적으로 삭제되었습니다\n");
			return;
		}
	}
	printf("연락처를 찾을 수 없습니다\n");
}
void listContacts(Contact contacts[], int count) {
	if (count == 0) {
		printf("사용 가능한 연락처가 없습니다\n");
		return;
	}
	for (int i = 0; i < count; i++) {
		printf("이름:%s, 전화번호:%s, 주소:%s\n", contacts[i].name, contacts[i].phone, contacts[i].address);
	}
}
void saveContacts(Contact contacts[], int count) {
	FILE* file = fopen("D:\\333.txt", "w");
	if (file == NULL) {
		printf("파일 열기 오류\n");
		return;
	}
	for (int i = 0; i < count; i++) {
		fprintf(file, "%s %s %s\n", contacts[i].name, contacts[i].phone, contacts[i].address);

	}
	fclose(file);
	printf("연락처가 성공적으로 저장되었습니다.\n");
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
	printf("연락처를 성공적으로 불러왔습니다.\n");
}