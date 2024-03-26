#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()

{

  int a;

  printf("input your score(input number 0 to 100):");

  scanf("%d", &a);

  switch (a / 10)

  {

  case 0: case 1: case 2: case 3: case 4: case 5:

    printf("F\n");	break;

  case 6:

    printf("D\n");	break;

  case 7:

    printf("C\n");	break;

  case 8:

    printf("B\n");	break;

  case 9:

    printf("A\n");	break;

  case 10:

    switch (a % 10)

    {

    case 0:

      printf("A\n");	break;

    default:

      printf("please input number 0 to 100");	break;

    }

    break;

  default:

    printf("please input number 0 to 100");	break;

  }

  return 0;

}