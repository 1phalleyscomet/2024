#include <stdio.h> //표준 입출력 함수

void main()
{
	
	printf("100"); //str로 인식
	printf("\n"); // \n은 공백(줄바꿈)
	printf("%d", 100); //int로 인식(decmial)
	printf("%d", 100, 200); //서식(%d)과 출력 내용 개수가 맞지 않음 console 100
	printf("%d %d", 100); //서식과 출력 내용 개수가 맞지 않음 console 100, (랜덤값)
	printf("%d+%d=%d", 100, 100, 200);
	
	printf("%d/%d=%.1f", 100, 200,0.5 ); //%.(숫자)f (숫자)만큼 소숫점 자리수 //%f 시 소수점 6자리(기본 형식)
	//%d 10진수 정수 //%x 16진수 정수 //%o 8진수 정수
	//%c 문자(char) //%s 문자열 //%c '' 사용 // %s "" 사용
	printf("%5d", 123);  console   123 - 5자리 표시
	printf("%05d", 123); console 00123 - 0외에 다른 숫자는 넣을 수 없음
	printf("%7.1f",123.45); console   123.5 - 총 7자리 표시, 소숫점 1자리
	printf("%7.3f",123.45); console 123.450
	//서식문자 \기호가 앞에 붙음 == escape문자
	
	printf("\t 탭");
	printf("\n 줄바꿈");
	printf("\" 출력"); 
	printf("\a 소리");
	printf("\\ 출력"); // printf("%c", \); - \를 문자로 사용할 수 없음
	printf("이것을 \r 덮어씁니다"); 
	
}