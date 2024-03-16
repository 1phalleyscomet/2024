#include <stdio.h>
void main()
{
	char str[10] = "2024108152";
		printf("str==>%s\n", str);

	str[0] = 'h';
	str[1] = 's';
	str[2] = 'j';
	str[3] = '\0';

	printf("str[20]==>%c\n", str[20]);
	printf("str==>%s\n", str);
	printf("str[0]==>%c\n", str[0]);

	char a[3] = "ÀÏ"; //ÇÑ±Û -> 2byte
	printf("str==>%s\n", a);

}