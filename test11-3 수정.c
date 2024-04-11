#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
  int a, b;

  do {

    
    printf("엘리베이터 현재 층을 입력하세요 (1층부터 시작합니다):");
  scanf("%d", &a);

  printf("엘리베이터 목적지 층을 입력하세요(1층부터 시작합니다. 0을 입력하면 종료됩니다.):");
  scanf("%d", &b);

    if(b !=0){
    printf("엘리베이터가 %d층에서 %d층으로 이동합니다.\n", a, b);
      continue;
    }

  else if (b == 0 ) {

      printf("프로그램을 종료합니다");

    break;
      }


  } while (b != 0);


b = 1;


  return 0;


}