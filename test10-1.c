#include <stdio.h>

int main (){
	int a = 2, b = 1;
	while (a <10){
		b = 1;

		while (b < 10) {
			printf("%d * %d = %d\n", a, b, a * b);
			b++;
			
			
		}
		printf("\n");
		a++;
	}
	return 0;
}