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
			fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.");
			exit(1);

		}
	}
	while (1) {
		menu();
		printf("정수값을 입력하시오:");
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

	printf("이름: "); gets_s(name, SIZE);
	printf("주소: "); gets_s(address, SIZE);
	printf("휴대폰: "); gets_s(phone, SIZE);
	printf("특징: "); gets_s(desc, SIZE);
}

void print_record(char name[], char address[], char phone[], char desc[]) {


	printf("이름:%s\n", name);
	printf("주소:%s\n", address);
	printf("휴대폰:%s\n", phone);
	printf("특징:%s\n", desc);


}
void menu() {
	printf("==============\n");
	printf("1.추가\n2.수정\n3.검색\n4.종료\n");
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
	printf("탐색하고자 하는 사람의 이름:");
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
	printf("해당 이름의 데이터를 찾을 수 없습니다.\n");
}
void update_record(FILE* fp) {
	char name[SIZE], address[SIZE], phone[SIZE], desc[SIZE];
	char search_name[SIZE];
	FILE* temp_fp;

	if ((temp_fp = fopen("temp.txt", "w")) == NULL) {
		fprintf(stderr, "임시 파일을 열 수 없습니다.");
		exit(1);
	}
	fseek(fp, 0, SEEK_SET);
	printf("수정하고자 하는 사람의 이름:");
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
			printf("새로운 정보를 입력하시오:\n");
			get_record(name, address, phone, desc);
			found = 1;
		}

		fprintf(temp_fp, "%s\n%s\n%s\n%s\n", name, address, phone, desc);
	}
	fclose(fp);
	fclose(temp_fp);

	if (!found) {
		printf("해당 이름의 데이터를 찾을 수 없습니다.\n");
		remove("temp.txt");
		return;
	}

	if (remove("address.txt") != 0) {
		fprintf(stderr, "원본 파일을 삭제할 수 없습니다.");
		exit(1);
	}
	if (rename("temp.txt", "address.txt") != 0) {
		fprintf(stderr, "임시 파일을 원본 파일로 이름을 변경할 수 없습니다.");
		exit(1);
	}
	if ((fp = fopen("address.txt", "r+")) == NULL) {
		fprintf(stderr, "파일을 다시 열 수 없습니다.");
		exit(1);
	}
}

