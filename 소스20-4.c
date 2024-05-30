#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

void menu();
void get_record(char name[], char address[], char phone[], char desc[]);
void print_record(char name[], char address[], char phone[], char desc[]);
void add_record(FILE* fp);
void search_record(FILE* fp);
void update_record(FILE* fp);

int main(void) {
	FILE* fp;
	int select;
	if ((fp = fopen("address.txt", "r+")) == NULL) {
		if ((fp = fopen("address.txt", "w+")) == NULL) {
			fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�.");
			exit(1);

		}
	}
	while (1) {
		menu();
		printf("�������� �Է��Ͻÿ�:");
		scanf("%d", &select);
		getchar();
		switch (select) {
		case 1: add_record(fp); break;
		case 2: update_record(fp); break;
		case 3: search_record(fp); break;
		case 4: fclose(fp); return 0;
		}
	}
	fclose(fp);
	return 0;
}
void get_record(char name[], char address[], char phone[], char desc[]) {
	printf("�̸�:%s\n", name);
	printf("�ּ�:%s\n", address);
	printf("�޴���:%s\n", phone);
	printf("Ư¡:%s\n", desc);


}
void menu() {
	printf("==============\n");
	printf("1.�߰�\n2.����\n3.�˻�\n4.����\n");
	printf("==============\n");
}

void add_record(FILE* fp) {
	char name[SIZE], address[SIZE], phone[SIZE], desc[SIZE];
	get_record(name, address, phone, desc);
	fseek(fp, 0, SEEK_END);
	fprintf(fp, "%s\n%s\n%s\n%s\n", name, address, phone, desc);
	fflush(fp);
}
void search_record(FILE* fp) {
	char name[SIZE], search_name[SIZE], address[SIZE], phone[SIZE], desc[SIZE];
	fseek(fp, 0, SEEK_SET);
	printf("Ž���ϰ��� �ϴ� ����� �̸�:");
	gets_s(search_name, SIZE);

	while (fgets(name, SIZE, fp) != NULL) {
		fgets(address, SIZE, fp);
		fgets(phone, SIZE, fp);
		fgets(desc, SIZE, fp);

		name[strcspn(name, "\n")] = 0;
		address[strcspn(address, "\n")] = 0;
		phone[strcspn(phone, "\n")] = 0;
		desc[strcspn(desc, "\n")] = 0;

		if (strcmp(name, search_name) == 0) {
			print_record(name, address, phone, desc);
			return;

		}
	}
	printf("�ش� �̸��� �����͸� ã�� �� �����ϴ�.\n");
}
void update_record(FILE* fp) {
	char name[SIZE], address[SIZE], phone[SIZE], desc[SIZE];
	char search_name[SIZE];
	FILE* temp_fp;

	if ((temp_fp = fopen("temp.txt", "w")) == NULL) {
		fprintf(stderr, "�ӽ� ������ �� �� �����ϴ�.");
		exit(1);
	}
	fseek(fp, 0, SEEK_SET);
	printf("�����ϰ��� �ϴ� ����� �̸�:");
	gets_s(search_name, SIZE);

	int found = 0;

	while (fgets(name, SIZE, fp) != NULL) {
		fgets(address, SIZE, fp);
		fgets(phone, SIZE, fp);
		fgets(desc, SIZE, fp);

		name[strcspn(name, "\n")] = 0;
		address[strcspn(address, "\n")] = 0;
		phone[strcspn(phone, "\n")] = 0;
		desc[strcspn(desc, "\n")] = 0;

		if (strcmp(name, search_name) == 0) {
			printf("���ο� ������ �Է��Ͻÿ�:\n");
			get_record(name, address, phone, desc);
			found = 1;
		}

		fprintf(temp_fp, "%s\n%s\n%s\n%s\n", name, address, phone, desc);
	}
	fclose(fp);
	fclose(temp_fp);

	if (!found) {
		printf("�ش� �̸��� �����͸� ã�� �� �����ϴ�.\n");
		remove("temp.txt");
		return;
	}

	if (remove("address.txt") != 0) {
		fprintf(stderr, "���� ������ ������ �� �����ϴ�.");
		exit(1);
	}
	if (rename("temp.txt", "address.txt") != 0) {
		fprintf(stderr, "�ӽ� ������ ���� ���Ϸ� �̸��� ������ �� �����ϴ�.");
		exit(1);
	}
	if ((fp = fopen("address.txt", "r+")) == NULL) {
		fprintf(stderr, "������ �ٽ� �� �� �����ϴ�.");
		exit(1);
	}
}
