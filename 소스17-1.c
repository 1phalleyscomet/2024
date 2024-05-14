#include <stdio.h>
int main(void) {
	int large_data[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	printf("%d \n", *(large_data + 10));
	return 0;
}