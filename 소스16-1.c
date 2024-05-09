#include <stdio.h>
int main() {
	//배열 요소의 주소 &aa, 배열 전체의 주소 aa

	//포인터 선언 * ig) char* p; 문자열 포인터 변수 선언
	int a = 5;
	int b = 10;
	printf("변경 전:a=%d,b=%d\n", a, b);

	//포인터를 사용하여 두 변수의 값을 교환
	int* ptr_a = &a;
	int* ptr_b = &b;
	int temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;

	printf("변경 후:a=%d, b=%d\n", a, b);

	return 0;

}